void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=15,b=22;
    swap(&a,&b);
}