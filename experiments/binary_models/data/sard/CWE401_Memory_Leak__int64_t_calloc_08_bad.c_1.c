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
    VAR4 * VAR5;
    VAR5 = NULL;
    if(FUN1())
    {
        VAR5 = (VAR4 *)calloc(100, sizeof(VAR4));
        if (VAR5 == NULL) {FUN4(-1);}
        VAR5[0] = 5LL;
        FUN5(VAR5[0]);
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