#include <stdio.h>
 
// 構造体
typedef struct {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person;

typedef struct {
    int x;
    int y;
    int z;
} zahyou;


 
// 一括代入用の関数
//person init(char *name, char sex, int age, char *add, char* job) {

    /*person p;
    p.name = name;
    p.sex = sex;
    p.age = age;
    p.add = add;
    p.job = job;
    return p;
    }*/


zahyou init(int x, int y, int z) {
    zahyou jk;
    jk.x = x;
    jk.y = y;
    jk.z = z;
    return jk;
}
 
int main(void) {
    // 構造体の実体を生成
    /*person p[3];
    
    // 関数で一括代入
    p[0] = init("T.Tanaka", 'm', 30, "Tokyo", "teacher");
    p[1] = init("S.Sato", 'f', 25, "Osaka", "nurse");
    p[2] = init("K.Sato", 'm', 35, "Nagoya", "doctor");
    
    for(int i = 0; i < 3; i++) {
        printf("%sは%d歳で、%sです\n", p[i].name, p[i].age, p[i].add, p[i].job);
    }*/

    zahyou jk[1000];

    /*jk[0] = init(14,2,4);
    jk[1] = init(34,11,0);
    jk[2] = init(7,8,9);
    jk[3] = init(1,2,3);*/


    for(int j =0;j<4;j++){
        printf("%dコ目のコマ\n",j);
        for(int x =0;x<4;x++){
            for(int y =0;y<4;y++){
                jk[j].x = x;
                jk[j].y = y;
                jk[j].z = x + y;

                printf("X[%d] = %d ,Y[%d]= %d , Z[%d] = %d\n",j,jk[j].x,j,jk[j].y,j,jk[j].z);
        }}}

    /*for(int j =0;j<10;j++){
        jk[j] =init(j+1,j+2,j+3);
    }*/

    /*for(int j = 0; j < 4;j++){
        printf("X = %d,Y = %d,Z = %d\n",jk[j].x,jk[j].y,jk[j].z);
    }*/
    //コマを指定してコマ内の全データの取得は可能6/15
    printf("取り出し X[3]=%d,Y[3]=%d,Z[3]=%d\n",jk[3].x,jk[3].y,jk[3].z);

    //異なるループからもコマの全データを取り出すことはできる。6/15
    //ただしコマ内のX,X,Zのデータに直接アクセスすることはできていない。6/15
    for(int i=0;i<4;i++){
    int j=i;
    printf("%dコ目のコマ\n",j);
        for(int x =0;x<4;x++){
            for(int y =0;y<4;y++){
            

                printf("X[%d] = %d ,Y[%d]= %d , Z[%d] = %d\n",j,jk[j].x,j,jk[j].y,j,jk[j].z);
        }}}



    return 0;

}

