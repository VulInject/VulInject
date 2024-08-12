#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    if(FUN1())
    {
        VAR2 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        memcpy(VAR2, VAR5, 100*sizeof(int));
        FUN4(VAR2[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}