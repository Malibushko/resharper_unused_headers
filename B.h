#pragma once
#include <memory>

class A;

class B
{
public:

  ~B();

private:

  std::unique_ptr<A> m_Ptr;
};