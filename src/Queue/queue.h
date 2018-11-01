/* *
 * MIT License
 *
 * Copyright (c) 2016 Daniel Santos
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * */
#ifndef DSTRUCTS_QUEUE_H
#define DSTRUCTS_QUEUE_H

#include <cstdio>
#include "../Dynamic_Array/dynamic_array.h"

namespace DStructs {

/**
 * \brief       Queue is another fundamental ADT (Abstract Data Structure) that is similar
 *  to the stack, but that uses the opposite rule to decide which element to
 *  remove for delete. This is a first in first out data structure.
 * */
template <class T>
class Queue {
 public:
  /**
   * \brief     Default Constructor
   * */
  Queue();
  /**
   * \brief     Deconstructor
   * */
  ~Queue();
  /**
   * \brief     Returns the element in the fron of the queue.
   *
   * \returns   T&
   * */
  virtual const T& front() const;
  /**
   * \brief     Puts and element to the last position of the queue. This is
   * also know as enqueue at tail.
   *
   * \param     const T&
   * */
  virtual void push(const T& data);
  /**
   * \brief     Removes the element in the front of the queue. This is also
   * know as dequeue from front.
   * */
  virtual void pop();
  /**
   * \brief     Returns true is the queue have a size of 0, i.e., it has no
   * elements.
   *
   * \returns   bool
   * */
  bool empty() const;
  /**
   * \brief     Returns the current size of the queue.
   *
   * \returns   std::size_t
   * */
  std::size_t size() const;

 protected:
  DynamicArray<T> *buffer_;  //< the buffer
  int             head_;         //< position of the head of the queue
  std::size_t     size_;         //< current size of the queue

};
}

#include "queue.cc"

#endif //DSTRUCTS_QUEUE_H
