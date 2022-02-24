#pragma once
#include "OwnArray.h"

// 설명 : 나만의 노드
template <typename DataType>
class OwnNode
{
public:
	// constrcuter destructer
	OwnNode()
	{

	}
	~OwnNode()
	{

	}

	// delete Function
	OwnNode(const OwnNode& _Other) = delete;
	OwnNode(OwnNode&& _Other) noexcept = delete;
	OwnNode& operator=(const OwnNode& _Other) = delete;
	OwnNode& operator=(OwnNode&& _Other) noexcept = delete;

protected:

public:
	DataType Data_;
	OwnNode* NextNode_;
};

