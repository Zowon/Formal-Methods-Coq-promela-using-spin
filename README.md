# Formal Methods Assignment Repository

## Overview
This repository contains the work for the Formal Methods Assignment. It includes implementations and experiments in the following areas:

1. **Google Test**: Unit testing framework for C++.
2. **Coq**: Theorem proofing and formal verification.
3. **Promela**: Modeling and verification of concurrent systems using the SPIN tool.



## Getting Started

### Prerequisites

- **Google Test**: 
  - Install a modern C++ compiler (e.g., GCC or Clang).
  - CMake (version 3.10 or later).

- **Coq**:
  - Install Coq (version 8.14 or later). Visit the [Coq official website](https://coq.inria.fr/download) for installation instructions.

- **SPIN**:
  - Install the SPIN model checker. Visit the [SPIN website](http://spinroot.com/spin/whatispin.html) for installation details.



## Google Test (C++)

### Description
The `GoogleTest` folder contains unit tests for C++ programs. It demonstrates the use of Google Test for verifying program correctness.


## Coq Theorem Proofing

### Description
The `Coq`  contains formal proofs and examples using the Coq proof assistant. The examples include logical propositions and their proofs.

### Running Proofs

## Promela and SPIN

### Description
The `Promela` folder contains models written in Promela for concurrent systems. These models are verified using the SPIN model checker.

### Running SPIN

1. Navigate to the `Promela` directory:
   ```bash
   cd Promela
   ```

2. Verify a Promela model:
   ```bash
   spin -a models/example.pml
   gcc -o pan pan.c
   ./pan
   ```

3. Check the output for verification results.

