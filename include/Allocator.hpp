#pragma once

#include "stdlib.hpp"

namespace Ranty
{
  class Allocator
  {
  public:
    virtual ~Allocator() = 0;

    virtual void* allocate(uint32_t size) const = 0;
    virtual void free(void* pointer) const = 0;
  };
}