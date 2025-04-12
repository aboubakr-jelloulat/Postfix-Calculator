# 🧮 Postfix Expression Evaluator

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)

A fast and efficient C++ implementation of a postfix expression evaluator. This program evaluates mathematical expressions written in postfix notation (Reverse Polish Notation) using a stack-based algorithm.

## 📝 Description

Postfix notation is a way of writing arithmetic expressions without parentheses. It places operators after their operands, making it easier for computers to parse and evaluate expressions.

This implementation:
- Uses the C++ Standard Library stack for efficient operations
- Handles basic arithmetic operations (+, -, *, /)
- Processes single-digit numeric operands
- Implements a clean approach to mathematical operations

## 🚀 Features

- **Stack-Based Algorithm**: Utilizes C++'s stack container for efficient LIFO operations
- **Error-Free Calculation**: Properly handles operator precedence inherent in postfix notation
- **Modular Design**: Separates math operations from the evaluation logic
- **Lightweight**: Minimal memory footprint and resource usage

## 🔧 Usage

### Build the Program

```bash
g++ -std=c++11 postfix_evaluator.cpp -o postfix_evaluator
```

### Run the Program

```bash
./postfix_evaluator
```

The example in the code evaluates the postfix expression "382/+5-", which translates to:
3 + (8/2) - 5 = 2

## 💻 Example

```cpp
string postfix = "382/+5-";
cout << "Result: " << postfix_evaluate(postfix) << endl;
// Output: Result: 2
```

## 📋 Function Documentation

### `MathOperation(float op1, float op2, char operat)`

Performs a basic arithmetic operation on two operands.

**Parameters:**
- `op1`: First operand
- `op2`: Second operand
- `operat`: Operator character (+, -, *, /)

**Returns:** Result of the arithmetic operation

### `postfix_evaluate(string postfix)`

Evaluates a postfix expression.

**Parameters:**
- `postfix`: String containing the postfix expression

**Returns:** The numerical result of evaluating the expression

## 🛠️ Future Improvements

- Support for multi-digit numbers
- Handling decimal numbers
- Supporting more operators (^, %, etc.)
- Error handling for invalid expressions
- Command-line interface for user input

## 📜 License

This project is licensed under the MIT License - see the LICENSE file for details.
