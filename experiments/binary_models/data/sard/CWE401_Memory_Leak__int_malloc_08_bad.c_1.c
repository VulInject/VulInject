#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    int * VAR4;
    VAR4 = NULL;
    if(FUN1())
    {
        VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN4(-1);}
        VAR4[0] = 5;
        FUN5(VAR4[0]);
    }
    if(FUN1())
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}