
Primarily there are three types of widely used asymptotic notations.

1. Big oh notation ( O )
2. Big omega notation ( Ω )
3. Big theta notation ( θ )

#### Big oh notation ( O ):

- Asymptotic upper bound.
- Mathematically, if f(n) describes the running time of an algorithm; f(n) is O(g(n)) if and only if there exist positive constants c and n° such that:  

	0 ≤ f(n) ≤ c g(n), for all n ≥ n°. 

- Here, n is the input size and g(n) is any complexity function
- Graphic example for Big oh ( O )
- ![[Big oh.png]]

#### Big Omega Notation ( Ω ):

- Asymptotic lower bound. 
- Let f(n) define the running time of an algorithm; f(n) is said to be Ω (g(n)) if and only if there exist positive constants  c and n° such that:  

	0 ≤ c g(n) ≤ f(n), for all n ≥ n°. 

- Here, n is the input size and g(n) is any complexity function
- Graphic example for Big omega ( Ω )
- ![[Big omega.png]]

#### Big theta notation ( θ ):

- Let f(n) define the running time of an algorithm.
- F(n) is said to be θ (g(n)) if f(n) is O (g(n)) and f(x) is Ω (g(n)) both. 
- Mathematically,

	0 ≤ c2 g(n)  ≤  f(n) ≤ c1 g(n) ∀ n ≥ no. 

- Graphic example of Big theta ( θ ):
- ![[Big theta.png]]
- Big theta provides a better picture of a given algorithm's run time

#### Increasing order of common runtimes:

Here's the increasing order of common runtimes mentioned:

1. O(1) - Constant time complexity
2. O(log n) - Logarithmic time complexity
3. O(n) - Linear time complexity
4. O(n log n) - Linearithmic time complexity
5. O(n^2) - Quadratic time complexity
6. O(2^n) - Exponential time complexity


