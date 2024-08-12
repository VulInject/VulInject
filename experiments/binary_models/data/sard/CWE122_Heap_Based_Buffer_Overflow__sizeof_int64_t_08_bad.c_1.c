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
    VAR3 = NULL;
    if(FUN1())
    {
        VAR3 = (VAR2 *)malloc(sizeof(VAR3));
        if (VAR3 == NULL) {FUN4(-1);}
        *VAR3 = 2147483643LL;
    }
    FUN5(*VAR3);
    free(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}