#pragma once
#include <assert.h>

// 설명 : 내가 재구성한 배열

template <typename DataType>
//using DataType = int;
class OwnArray
{
public:
	DataType& operator[](size_t _Index)
	{
		if (Cap_ < _Index)
		{
			assert(false);
		}
		return DataPtr_[_Index];
	}
	DataType& operator=(const OwnArray& _Other)
	{
		ReSize(_Other.Cap_);
		for (size_t i = 0; i < Cap_; i++)
		{
			DataPtr_[i] = _Other.DataPtr_[i];
		}
		return;
	}

	void ReSize(size_t _Size)
	{
		DataType* PrevData = DataPtr_;
		DataPtr_ = new DataType[_Size];
		size_t Size = Cap_ > _Size ? _Size : Cap_;

		for (size_t i = 0; i < Size; i++)
		{
			DataPtr_[i] = PrevData[i];
		}

		if (PrevData != nullptr)
		{
			delete PrevData;
			PrevData = nullptr;
		}
		Cap_ = _Size;
	}
	void Release()
	{
		if (DataPtr_ != nullptr)
		{
			delete[] DataPtr_;
			DataPtr_ = nullptr;
		}
	}

	inline size_t getCap()
	{
		return Cap_;
	}

public:
	// constrcuter destructer
	OwnArray()
		:DataPtr_(nullptr),
		Cap_(0)
	{
	}

	~OwnArray()
	{
		Release();
	}

	// delete Function
	OwnArray(const OwnArray& _Other) = delete;
	OwnArray(OwnArray&& _Other) noexcept = delete;
	//OwnArray& operator=(OwnArray&& _Other) noexcept = delete;

protected:

public:
	DataType* DataPtr_;
	size_t Cap_;
};

