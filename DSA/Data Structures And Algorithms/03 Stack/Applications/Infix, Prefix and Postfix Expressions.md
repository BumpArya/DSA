
 **These are notations to write an expression:**

| **Infix**                    | **Prefix**                   | **Postfix**                  |
| ---------------------------- | ---------------------------- | ---------------------------- |
| a * b                        | * a b                        | a b *                        |
| <op 1> <**operator**> <op 2> | <op 1> <op 2> <**operator**> | <**operator**> <op 1> <op 2> |

**Why these methods?**
	Computers use postfix notation to evaluate mathematical expressions efficiently, following their own operator precedence. 
	In postfix notation, operators come after operands, allowing for easy algorithmic evaluation. 
	This notation is commonly used in programming to handle complex expressions.

**Converting postfix to infix**
	**a b c + * d *
	a (b + c) * d * 
	(a * (b + c)) d *
	(a * (b + c))  * d

**Converting infix to prefix:** 
	 **x - y * z**.
	 **( x - ( y * z ) )** (Using BODMAS)
	 **( x - ( y * z ) )** → **( x - [ * y z ] )**
	 **( x - [ * y z ] )  → [ - x * y z ]**

**Converting infix to postfix:**
	**x - y * z**
	**( x - ( y * z ) )**
	**( x - ( y * z ) )** → **( x - [ y z * ] )**
	**( x - [ y z * ] )  → [ x y z * - ]**