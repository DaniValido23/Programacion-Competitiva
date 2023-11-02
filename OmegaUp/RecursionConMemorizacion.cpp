//https://omegaup.com/arena/problem/Recursion-con-memorizacion/#problems
#include <bits/stdc++.h>
typedef __int128_t ull;

std::vector<std::vector<std::vector<ull>>> memo;
uint64_t cont = 0;
ull d = static_cast<ull> (2e64+1);

uint64_t recursiveFunction(uint64_t a, uint64_t b, uint64_t c){
    
    uint64_t mini = std::min(a,std::min(b,c));
    if(memo[a-1][b-1][c-1] != d)
        return (memo[a-1][b-1][c-1]);
    
    cont++;
    if(mini <= 3)
        return memo[a-1][b-1][c-1] = (a+ (2*b) + (3*c));
    
    
    else if( (a + b + c) == 100 )
        return memo[a-1][b-1][c-1] = 0;
    
    else{
        memo[a-1][b-1][c-1] = (recursiveFunction(a-1,b-1,c-1) +
         recursiveFunction(a,b-3,c-3) +
         recursiveFunction(a>>1,b,c)) ;

        return (memo[a-1][b-1][c-1]);
    }
}

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    
    uint64_t a, b, c;
    
    std::cin>>a>>b>>c;

    memo.resize(a, std::vector<std::vector<ull>>(b, std::vector<ull>(c,d)));

    std::cout<<recursiveFunction(a,b,c)<<" "<<cont<<std::endl;
    
    return 0;
}