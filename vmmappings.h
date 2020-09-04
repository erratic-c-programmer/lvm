/* Statements are given, 1 per line.
 * It is generally good practice to lable line numbers every 5 lines, as
 * you might get confused(the only form of flow control is JMPing around...)
 *
 * The first line contains the number of statements.
 *
 * The default number of registers is 10, but can be changed by recompiling
 * with -DREGNO=<whatever>.
 *
 * The default stack size is 100000, but can be changed bt recompiling with
 * -DMAX_STACK_SZ=<whatever>.
 *
 * The default program size limit is 100000 statements, but can be changed
 * by recompiling with DMAX_PROG_LEN=<whatever>.
 */

#define NOP	0 /* Does nothing. Example usage:
		     NOP
		     */

/* Registers/stack */
#define PUSH	1 /* Pushes argument onto stack. Example usage:
		     PUSH 5
		     */
#define POP	2 /* Pops top of stack, Example usage:
		     POP
		     */
#define POPS	3 /* Pops top of stack into register named by its argument. Example usage:
		     POPS 0
		     */
#define STORE	4 /* Stores top of stack into register named by its argument. Example usage:
		     STORE 3
		     */
#define LOAD	5 /* Pushes the value in the register named by its argument onto the
		     stack. Example usage:
		     LOAD 2
		     */

/* Arithmetic */
#define ADD	6 /* Pops the stack twice, then pushes their sum onto the stack. Example usage:
		     ADD
		     */
#define SUB	7 /* Pops the stack twice, then pushes their difference onto the
		     stack. Example usage:
		     SUB
		     */
#define MUL 	8 /* Pops the stack twice, then pushes their product onto the
		     stack. Example usage:
		     MUL
		     */
#define DIV 	9 /* Pops the stack twice, then pushes their quotient onto the stack. Example usage:
		     DIV
		     */
#define REM 	10 /* Pops the stack twice, then pushes their the remainder of divesion onto
		      the stack. Example usage:
		      REM
		      */

/* Bitwise operators */
#define NOT 	11 /* Pops the stack and takes its one's complement, then pushes the result onto
		      the stack. Example usage:
		      NOT
		      */
#define AND 	12 /* Pops the stack twice, takes their bitwise AND, then pushes the result onto
		      the stack. Example usage:
		      AND
		      */
#define OR 	13 /* Pops the stack twice, takes their bitwise OR, then pushes the result onto
		      the stack. Example usage:
		      OR
		      */
#define XOR 	14 /* Pops the stack twice, takes their bitwise XOR, then pushes the result onto
		      the stack. Example usage:
		      XOR
		      */
#define LSHFT 	15 /* Pops the stack once, left-shifts it by its argument, then pushes the result
		      onto the stack. Example usage:
		      LSHFT 4
		      */
#define RSHFT	16 /* Pops the stack once, right-shifts it by its argument, then pushes the result
		      onto the stack. Example usage:
		      RSHFT 2
		      */

/* Flow control */
#define JMP 	17 /* Does an unconditional jump to the line specified by its
		      argument. Example usage:
		      JMP 6
		      */
#define IFEQ 	18 /* Pops the first two values off the stack, then jumps to the line specified by
		      its argument if they are equal, does nothing else otherwise. Example usage:
		      IFEQ 92
		      */
#define IFNEQ 	19 /* Pops the first two values off the stack, then jumps to the line specified by
		      its argument if they are not equal, does nothing else
		      otherwise. Example usage:
		      IFEQ 92
		      */
#define IFZ 	20 /* Pops the the stack, then jumps to the line specified by its argument if it
		      is 0. does nothing else otherwise. Example usage:
		      IFZ 63
		      */
#define IFNZ 	21 /* Pops the the stack, then jumps to the line specified by its argument if it
		      is not 0. does nothing else otherwise. Example usage:
		      IFNZ 854
		      */

/* I/O */
#define PRINT 	22 /* Prints out the top value on the stack. Example usage:
		      PRINT
		      */
#define PRINC 	23 /* Prints out the top value on the stack as a character. Example usage:
		      PRINC
		      */
#define POPP 	24 /* Pops the the stack and prints it. Example usage:
		      POPP
		      */
#define POPPC 	25 /* Pops the the stack and prints it as a character. Example usage:
		      POPPC
		      */

#define DONE 	26 /* Terminates program execution immediately. Example usage:
		      DONE
		      */
