/*************************************************************************
	> File Name: Leed_202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 14时49分34秒
 ************************************************************************/
int get_next(int n){
    int temp = 0;
      while (n) {
                temp += (n % 10) * (n % 10);
                n /= 10;
            }
            return temp;
}
bool isHappy(int n) {
    int  p = n, q = n;
    while( q != 1){
        p = get_next(p);
        q = get_next(get_next(q));
        if(p == q) break;
    }
    return q == 1;
}
