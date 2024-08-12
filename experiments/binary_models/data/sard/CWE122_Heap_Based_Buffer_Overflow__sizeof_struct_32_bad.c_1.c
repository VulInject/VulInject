#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * *VAR4 = &VAR3;
    VAR2 * *VAR5 = &VAR3;
    VAR3 = NULL;
    {
        VAR2 * VAR3 = *VAR4;
        VAR3 = (VAR2 *)malloc(sizeof(VAR3));
        if (VAR3 == NULL) {FUN2(-1);}
        VAR3->VAR6 = 1;
        VAR3->VAR7 = 2;
        *VAR4 = VAR3;
    }
    {
        VAR2 * VAR3 = *VAR5;
        FUN3(VAR3);
        free(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}