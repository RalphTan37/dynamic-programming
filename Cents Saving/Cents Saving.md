## Problem Description from Kattis:

To host a regional contest like NWERC a lot of preparation is necessary: organizing rooms and computers, making a good problem set, inviting contestants, designing T-shirts, booking hotel rooms and so on. I am responsible for going shopping in the supermarket. </br>

When I get to the cash register, I put all my **n** items on the conveyor belt and wait until all the other customers in the queue in front of me are served. While waiting, I realize that this supermarket recently started to round the total price of a purchase to the nearest multiple of **10** cents (with **5**cents being rounded upwards). For example, **94** cents are rounded to **90** cents, while **95** are rounded to **100**. </br>

It is possible to divide my purchase into groups and to pay for the parts separately. I managed to find **d** dividers to divide my purchase in up to **d+1** groups. I wonder where to place the dividers to minimize the total cost of my purchase. As I am running out of time, I do not want to rearrange items on the belt. </br>

## Input:

The input consists of: </br>

-  one line with two integers **n** (**1 <= n <=2000**) and **d**(1 <= d <= 20), the number of items and the number of available dividers; 

- one line with **n** integers **p1, ..., pn**(**1 <= pi <= 10000** for 
**i <= i <= n**), the prices of the items in cents. The prices are given in the same order as the items appear on the belt.

## Output:

Output the minimum amount of money needed to buy all the items, using up to **d** dividers.

## Sample Input 1:

```
5 1
13 21 55 60 42
```

## Sample Output 1:

```
190
```

## Sample Input 2:

```
5 2
1 1 1 1 1
```

## Sample Output 2:

```
0
```