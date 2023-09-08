int sw_test(int a,int b,int c){
    int result;
    switch (a)
    {
    case 10:
        result=c+50;
        break;
    case 12:
    result=b+50;
    break;
    case 17:
    result=b;
    default:
        result=a;
    }
return result;
}