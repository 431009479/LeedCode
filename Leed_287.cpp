/*************************************************************************
	> File Name: Leed_287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 18时58分51秒
 ************************************************************************/
int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do{
        p = nums[p];
        q = nums[nums[q]];
        }while(p != q);
        int cnt = 0;
        do{
            cnt += 1;
            p = nums[p];
        }while(p != q);
        p = q = nums[0];
        while(cnt--) q = nums[q];
        while(p != q){
            q = nums[q];
            p = nums[p];
        }

    return p;
}
