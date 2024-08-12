#VAR1 ""
#VAR1 ""
#define N_ITERS 1000000
int VAR2 = 0;
int VAR3 = 0;
static stdThreadLock VAR4 = NULL;
void FUN1(void *VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        VAR2 = VAR2 + 1;
    }
}
void FUN2(void *VAR5)
{
    int VAR6;
    FUN3(VAR4);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        VAR3 = VAR3 + 1;
    }
    FUN4(VAR4);
}
void FUN5()
{
    if(5==5)
    {
        {
            stdThread VAR8 = NULL;
            stdThread VAR9 = NULL;
            VAR2 = 0;
            if (!FUN6(VAR10, NULL, &VAR8))
            {
                VAR8 = NULL;
            }
            if (!FUN6(VAR10, NULL, &VAR9))
            {
                VAR9 = NULL;
            }
            if (VAR8 && FUN7(VAR8))
            {
                FUN8(VAR8);
            }
            if (VAR9 && FUN7(VAR9))
            {
                FUN8(VAR9);
            }
            FUN9(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN5();
    return 0;
}