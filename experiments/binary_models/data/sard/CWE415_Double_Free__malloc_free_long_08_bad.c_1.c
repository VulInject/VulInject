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
    long * VAR4;
    VAR4 = NULL;
    if(FUN1())
    {
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN4(-1);}
        free(VAR4);
    }
    if(FUN1())
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}