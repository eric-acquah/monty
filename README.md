The goal of this project is to create an interpreter
for Monty ByteCodes files. The Monty interpreter reads
Monty bytecode commands and performs the corresponding
operations.

Here's how a simplified version of a Monty interpreter
might work:

1. Parsing Bytecode: The Monty interpreter reads a file
containing Monty bytecode instructions. Each line
typically corresponds to a Monty command.

2. Command Execution: The interpreter parses each line
of bytecode, identifies the command, and executes the
corresponding operation.

3. Stack Data Structure: Monty usually operates on a
stack data structure. The interpreter maintains a stack
to perform operations like pushing values onto the stack,
popping values from the stack, performing arithmetic
operations, and more.

4. Command Implementations: The interpreter has
implementations for each Monty command. For example, if
the bytecode specifies "push 5", the interpreter will
push the value 5 onto the stack. If the bytecode
specifies "add", the interpreter will pop two values
from the stack, add them, and push the result back onto
the stack.

5. Control Flow: The interpreter handles control flow
instructions like conditionals and loops. It evaluates
conditions, jumps to different parts of the bytecode
based on the evaluation, and repeats code execution
as needed.

6. Output: During execution, the interpreter may output
values or messages based on the Monty commands and
operations.

7. Error Handling: The interpreter should handle errors
gracefully, such as dealing with division by zero,
trying to pop from an empty stack, or encountering
unsupported commands.

8. Memory Management: The interpreter may need to
allocate and deallocate memory for data structures
as needed.
This project was implemented by Eric Acquah and
Ukora Chioma (ALX students)
