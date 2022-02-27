#pragma once
using DataType = int;

class OwnList
{
private:
	class DataNode
	{
	public:
		DataType Data;
		DataNode* NextNode;
		DataNode* PrevNode;
	public:
		DataNode()
			:Data(),
			NextNode(nullptr),
			PrevNode(nullptr)
		{

		}
		DataNode(const DataType& _Data)
			:Data(_Data),
			NextNode(nullptr),
			PrevNode(nullptr)
		{

		}
		~DataNode()
		{

		}
	};
public:
	class iterator
	{
	private:
		DataNode* Node_;
	public:
		bool operator!=(const iterator& _Other)
		{
			return Node_ != _Other.Node_;
		}
		bool operator==(const iterator& _Other)
		{
			return Node_ == _Other.Node_;
		}
		iterator& operator++()
		{
			Node_ = Node_->NextNode;
			return *this;
		}
		iterator& operator--()
		{
			Node_ = Node_->PrevNode;
			return *this;
		}
		DataType& operator*()
		{
			return Node_->Data;
		}

	public:
		iterator(DataNode* _Node)
			:Node_(_Node)
		{

		}
		~iterator()
		{
		}
	};

public:
	void push_back(const DataType& _Value)
	{
		DataNode* NewData = new DataNode(_Value);
		//먼저 원래 값을 저장해놔야한다
		DataNode* PrevNode = EndNode->PrevNode;
		DataNode* NextNode = EndNode;
		NewData->NextNode = NextNode;
		NewData->PrevNode = PrevNode;
		NextNode->PrevNode = NewData;
		PrevNode->NextNode = NewData;
	}
	void push_front(const DataType& _Value)
	{
		DataNode* NewData = new DataNode(_Value);
		//먼저 원래 값을 저장해놔야한다
		DataNode* PrevNode = StartNode;
		DataNode* NextNode = StartNode->NextNode;
		NewData->NextNode = NextNode;
		NewData->PrevNode = PrevNode;
		NextNode->PrevNode = NewData;
		PrevNode->NextNode = NewData;
	}

	iterator begin()
	{
		return iterator(StartNode);
	}
	iterator end()
	{
		return iterator(EndNode);
	}
public:
	OwnList()
		:StartNode(new DataNode()),
		EndNode(new DataNode())
	{
		StartNode->NextNode = EndNode;
		EndNode->PrevNode = StartNode;
	}
	~OwnList()
	{

	};

	// delete Function
	OwnList(const OwnList& _Other) = delete;
	OwnList(OwnList&& _Other) noexcept = delete;
	OwnList& operator=(const OwnList& _Other) = delete;
	OwnList& operator=(OwnList&& _Other) noexcept = delete;

protected:

private:
	DataNode* StartNode;
	DataNode* EndNode;

};

