//converts binary to decimal and decimal to binary (doesnt work with fractional parts)
#include <stdio.h>
#include <math.h>

//declaring the functions globally
int bin_dec(int bin_num[5]){
    int idx,ex_val=4;
    double dec_num=0;
    for (idx=0;idx<5;idx++){
        dec_num=dec_num+bin_num[idx]*pow(2,ex_val);
        ex_val--;
    }
    return dec_num;
}

int dec_bin(int dec_num){
    int bin_num[5],idx=0,q_tnt=dec_num,i;
    while(q_tnt>0){
        //binary num in reverse
        bin_num[idx]=q_tnt%2;
        idx++;
        q_tnt=q_tnt/2; //int divison 17/2=8
    }
    for (i=4;i>=0;i--){
        printf("%d",bin_num[i]);
    }
    printf("\n");
    return 0;
}


int main() {
    // insert code here...
    char conv;
    int num[5],i=0,dec_num=0;
    printf("For binary to decimal enter 'a', for decimal to binary enter 'b'\n");
    scanf("%c",&conv);
   
    if (conv=='a'){
        printf("Enter the number:(Each digit followed by return)\n");
        for (i=0;i<5;i++){
            scanf("%d",&num[i]);
        }
        printf("The decimal number is:%d\n",bin_dec(num));
    }
    if (conv=='b'){
        //range can be easily changed by increasing the array length in dec_bin function
        printf("Enter the decimal number(<31)\n");
        scanf("%d",&dec_num);
        dec_bin(dec_num);
    }
    
}
