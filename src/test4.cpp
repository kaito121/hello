#include <stdio.h>
#include <vector>
 
// 構造体

typedef struct {
    double x;
    double y;
    double z;
} zahyou;


zahyou init(double x, double y, double z) {
    zahyou jk;
    jk.x = x;
    jk.y = y;
    jk.z = z;
    return jk;
}
 
int main(void) {
  
    printf("111111111111111111111\n");

    //std::vector<std::vector<std::vector<zahyou>>> jk(10,std::vector<zahyou>(10),std::vector<std::vector<zahyou>>(10));
    std::vector<std::vector<std::vector<zahyou>>> jk(4, std::vector<std::vector<zahyou>>(1000, std::vector<zahyou>(1000)));

    /*jk[0] = init(14,2,4);
    jk[1] = init(34,11,0);
    jk[2] = init(7,8,9);
    jk[3] = init(1,2,3);*/
    printf("aaaaaaaa\n");

    for(int j =0;j<4;j++){
        printf("%fコ目のコマ\n",j);
        for(int x =0;x<4;x++){
            for(int y =0;y<4;y++){
                jk[j][x][y].x = x;
                jk[j][x][y].y = y;
                jk[j][x][y].z = x + y;

                printf("X[%d][%d][%d] = %f ,Y[%d][%d][%d]= %f , Z[%d][%d][%d] = %f\n",j,x,y,jk[j][x][y].x,j,x,y,jk[j][x][y].y,j,x,y,jk[j][x][y].z);
                //printf("X[%d][%d][%d] = %d ,Y[%d][%d][%d]= %d , Z[%d][%d][%d] = %d\n",j,x,y,jk[j][x].x,j,x,y,jk[j][x].y,j,x,y,jk[j][x].z);
        }}}

    /*for(int j =0;j<10;j++){
        jk[j] =init(j+1,j+2,j+3);
    }*/

    /*for(int j = 0; j < 4;j++){
        printf("X = %d,Y = %d,Z = %d\n",jk[j].x,jk[j].y,jk[j].z);
    }*/
    //コマを指定してコマ内の全データの取得は可能6/15

    //printf("取り出し X[3]=%d,Y[3]=%d,Z[3]=%d\n",jk[3].x,jk[3].y,jk[3].z);

    //データが上書きされているため異なるループからデータを取り出すことはできていない6/15
    for(int i=0;i<4;i++){
    int j=i;
    printf("aaaaaaaaaaaaaaaa%fコ目のコマ\n",j);
        for(int x =0;x<4;x++){
            for(int y =0;y<4;y++){

            printf("X[%d][%d][%d] = %f ,Y[%d][%d][%d]= %f , Z[%d][%d][%d] = %f\n",j,x,y,jk[j][x][y].x,j,x,y,jk[j][x][y].y,j,x,y,jk[j][x][y].z);
            

                //printf("X[%d] = %d ,Y[%d]= %d , Z[%d] = %d\n",j,jk[j][x][y].x,j,jk[j].y,j,jk[j].z);
        }}}



    return 0;

}


