


void calculate_the_maximum(int n, int k) {

    int maximum_and = 0, maximum_or = 0, maximum_xor = 0, and = 0 , or = 0 , xor = 0;
    for (int i = 1 ; i <= n ; i++)
    { for (int j = i+1 ; j<= n; j++) {
        and = i & j;
        or = i | j;
        xor = i ^ j;

        if((maximum_and < and) && (and < k)) maximum_and = and;
        if((maximum_or < or) && (or < k)) maximum_or = or;
        if((maximum_xor < xor) && (xor < k)) maximum_xor = xor;}
}
    printf("%d\n%d\n%d",maximum_and,maximum_or,maximum_xor);
}


    int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
