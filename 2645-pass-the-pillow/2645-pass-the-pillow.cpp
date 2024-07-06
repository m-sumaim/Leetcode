class Solution {
public:
    // int passThePillow(int n, int time) {
    //     int N = 2*n-2;     
    //          // pattern changes every 2n- 2
    //          // 2*n -> when the direction is changed
    //          // -2 because first and last person doesn't count twice
    //     int x = time%N;

    //     return 1+((x<n)?x:N-x);
    // }

    int passThePillow(int n, int time){
        int pos = 1, dir = 1;
        while(time--){
            if(dir){
                pos++;
                if(pos==n)
                    dir = !dir;
            }else{
                pos--;
                if(pos==1)
                dir = !dir;
            }
        }
        return pos;
    }
};