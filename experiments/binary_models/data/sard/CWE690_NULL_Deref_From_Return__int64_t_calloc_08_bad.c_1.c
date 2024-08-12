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
    VAR5 = (VAR4 *)calloc(1, sizeof(VAR4));
    if(FUN1())
    {
        VAR5[0] = 5LL;
        FUN4(VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}