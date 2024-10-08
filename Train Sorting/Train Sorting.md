## Problem Description from Kattis:

Erin is an engineer. She drives trains. She also arranges the cars within each train. She prefers to put the cars in decreasing order of weight, with the heaviest car at the front of the train. </br>

Unfortunately, sorting train cars is not easy. One cannot simply pick up a car and place it somewhere else. It is impractical to insert a car within an existing train. A car may only be added to the beginning and end of the train. </br>

Cars arrive at the train station in a predetermined order. When each car arrives, Erin can add it to the beginning or end of her train, or refuse to add it at all. The resulting train should be as long as possible, but the cars within it must be ordered by weight. </br>

Given the weights of the cars in the order in which they arrive, what is the longest train that Erin can make? </br>

## Input:

The first line contains an integer **0 <= n <= 2000**, the number of cars. Each of the following **n** lines contains a non-negative integer smaller than **10000** giving the weight of a car. No two cars have the same weight. </br>

## Output:

Output a single integer giving the number of cars in the longest train that can be made with the given restrictions. </br>

## Sample Input 1:

```
3
1
2
3
```

## Sample Output 1:

```
3
```