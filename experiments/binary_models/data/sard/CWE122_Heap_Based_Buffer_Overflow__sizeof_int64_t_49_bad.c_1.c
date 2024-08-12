#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    if(VAR4==5)
    {
        VAR3 = (VAR2 *)malloc(sizeof(VAR3));
        if (VAR3 == NULL) {FUN2(-1);}
        *VAR3 = 2147483643LL;
    }
    FUN3(*VAR3);
    free(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}