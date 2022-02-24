#pragma once
#include "OwnArray.h"
// 설명 : 나만의 벡터

template <typename DataType>
class OwnVector
{
public:
	void ReSize(size_t _Size)
	{
		ArrData_.ReSize(_Size);
		Size_ = _Size;
	}
	void Reserve(size_t _Cap)
	{
		ArrData_.ReSize(_Cap);
	}

	void push_back(const DataType& _Data)
	{
		if (ArrData_.getCap() <= Size_)
		{
			ArrData_.ReSize(Size_*2 + 1);
		}
		ArrData_[Size_] = _Data;
		Size_++;
	}
	void pop_back()
	{
		Size_--;
	}
	inline size_t getSize()
	{
		return Size_;
	}
public:
	DataType& operator[](size_t _Index)
	{
		if (Size_ < _Index)
		{
			assert(false);
		}
		return ArrData_[_Index];
	}
	// constrcuter destructer
	OwnVector()
		:Size_(0)
	{

	}
	~OwnVector()
	{

	}
	// delete Function
	OwnVector(const OwnVector& _Other) = delete;
	OwnVector(OwnVector&& _Other) noexcept = delete;
	OwnVector& operator=(const OwnVector& _Other) = delete;
	OwnVector& operator=(OwnVector&& _Other) noexcept = delete;

protected:

private:
	OwnArray<DataType> ArrData_;
	size_t Size_;
};

