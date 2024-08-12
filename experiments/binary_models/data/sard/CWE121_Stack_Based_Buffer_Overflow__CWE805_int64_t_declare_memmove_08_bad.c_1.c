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
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    if(FUN1())
    {
        VAR3 = VAR4;
    }
    {
        int64_t VAR6[100] = {0}; 
        memmove(VAR3, VAR6, 100*sizeof(VAR2));
        FUN4(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}