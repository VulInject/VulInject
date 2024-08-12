#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    if(FUN2())
    {
        VAR3 = (VAR2 *)malloc(sizeof(VAR3));
        if (VAR3 == NULL) {FUN3(-1);}
        *VAR3 = 2147483643LL;
    }
    else
    {
        VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
        if (VAR3 == NULL) {FUN3(-1);}
        *VAR3 = 2147483643LL;
    }
    FUN4(*VAR3);
    free(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}