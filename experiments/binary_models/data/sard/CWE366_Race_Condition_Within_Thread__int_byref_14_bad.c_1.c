#VAR1 ""
#VAR1 ""
#define N_ITERS 1000000
static stdThreadLock VAR2 = NULL;
void FUN1(void *VAR3)
{
    int *VAR4 = (int*)VAR3;
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        *VAR4 = *VAR4 + 1;
    }
}
void FUN2(void *VAR3)
{
    int *VAR4 = (int *)VAR3;
    int VAR5;
    FUN3(VAR2);
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        *VAR4 = *VAR4 + 1;
    }
    FUN4(VAR2);
}
void FUN5()
{
    if(VAR7==5)
    {
        {
            stdThread VAR8 = NULL;
            stdThread VAR9 = NULL;
            int VAR10;
            VAR10 = 0;
            if (!FUN6(VAR11, (void*)&VAR10, &VAR8))
            {
                VAR8 = NULL;
            }
            if (!FUN6(VAR11, (void*)&VAR10, &VAR9))
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
            FUN9(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN5();
    return 0;
}