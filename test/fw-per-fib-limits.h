/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 University of California, Los Angeles
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 */

#ifndef NDNSIM_TEST_FW_PER_FIB_LIMITS_H
#define NDNSIM_TEST_FW_PER_FIB_LIMITS_H

#include "ns3/test.h"
#include "ns3/ptr.h"

namespace ns3 {
namespace ndn {

class Fib;
namespace fib { class Entry; }
  
class FwPerFibLimits : public TestCase
{
public:
  FwPerFibLimits ()
    : TestCase ("Test for ndn::fw::PerFibLimits")
  {
  }
    
private:
  virtual void DoRun ();

  void CheckCurMaxLimit (Ptr<fib::Entry> entry, double amount);
  void CheckOutstanding (Ptr<fib::Entry> entry, uint32_t amount);
  // void Check2 (Ptr<fib::Entry> entry);
};
  
} // namespace ndn
} // namespace ns3

#endif // NDNSIM_TEST_FW_PER_FIB_LIMITS_H
