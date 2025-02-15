/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef HERMES_VM_VMEXPERIMENTS_H
#define HERMES_VM_VMEXPERIMENTS_H

namespace hermes {
namespace vm {
namespace experiments {

/// List of active experiments, corresponding to
/// Runtime::getVMExperimentFlags().
enum {
  Default = 0,
  MAdviseSequential = 1 << 2,
  MAdviseRandom = 1 << 3,
  MAdviseStringsSequential = 1 << 4,
  MAdviseStringsRandom = 1 << 5,
  MAdviseStringsWillNeed = 1 << 6,
  VerifyBytecodeChecksum = 1 << 7,
  IgnoreMemoryWarnings = 1 << 9,
  HadesCompaction = 1 << 10,
};

/// Set of flags for active VM experiments.
using VMExperimentFlags = uint32_t;

} // namespace experiments
} // namespace vm
} // namespace hermes

#endif // HERMES_VM_VMEXPERIMENTS_H
