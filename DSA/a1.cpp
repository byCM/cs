1.

a.) 

True

Take away the constant. There is no constant value of c for which 2^2n <= c*2^n is true

2^(n+1)= 2(2^n)
2^(n+1) = 2^(1) * 2^(n) = O(2^(n))


b.)

False

2^(2n) = O(2^n)
2^2n <= c * 2^(n)
ln 2 * 2n <= ln c +ln 2 * n
2n <= ln c + n
n <= ln c


Which means 2^(2n) != O(2^n)


c.) 

False

2^(log n) = O(log n)

2^(log n) = n
n = O(log n)

Let f(n) =n and g(n) = O(log n)
n <= c * (log n)
c <= n / log n

c <= lim ( n -> ∞ ) ( n / log n )
c <= lim ( n -> ∞ ) 1 / 1/ n = lim ( n -> ∞ ) n = ∞

This means that the statement is false





2.)

Best case occurs when the array is already sorted and the worst case occurs when the array is reverse sorted. 

Big O bound(the worst complexity) and Theta bound (average complexity) will be O(n^2). 

Omega bound is the best case time complexity. Omega bound will be O(n).            



4. Part E

Order O is in linear order. To calculate the sum, the funcion is of order O(n) since it needs to go over the list once. The time linerally goes with the length of n. So if we double n 
time will double. 



