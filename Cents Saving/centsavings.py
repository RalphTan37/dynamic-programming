import sys

inf = sys.maxsize
def rounding_function(n):
    cents = n % 10
    if cents >= 5:
        return n + (10 - cents)
    return n - cents
    
def main():
    n, d = map(int, input().split())
    array = list(map(int, input().split()))
    table = [[inf] * (d+1) for _ in range(n+1)]
    
    for i in range(d+1):
        table[0][i] = 0
    for i in range(1, n+1):
        table[i][0] = table[i-1][0] + array[i-1]
        
    for i in range(1,n+1):
        for j in range(d,0,-1):
            table[i][j] = min(table[i-1][j] + array[i-1], rounding_function(table[i-1][j-1] + array[i-1]))
            
    ans = inf
    for i in range(d+1):
        ans = min(ans, rounding_function(table[n][i]))
        
    print(ans)
    
if __name__ == "__main__":
    main()
                                            