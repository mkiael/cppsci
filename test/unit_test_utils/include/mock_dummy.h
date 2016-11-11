//
// Created by Mikael Larsson on 11/11/16.
//

#ifndef CPPSCI_MOCK_DUMMY_H_H
#define CPPSCI_MOCK_DUMMY_H_H

#include "gmock/gmock.h"

class mock_dummy
{
public:
  mock_dummy();
  ~mock_dummy();
  MOCK_METHOD0(test, void());
};

#endif //CPPSCI_MOCK_DUMMY_H_H
