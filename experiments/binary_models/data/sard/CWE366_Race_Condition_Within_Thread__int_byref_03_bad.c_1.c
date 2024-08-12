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
    if(5==5)
    {
        {
            stdThread VAR7 = NULL;
            stdThread VAR8 = NULL;
            int VAR9;
            VAR9 = 0;
            if (!FUN6(VAR10, (void*)&VAR9, &VAR7))
            {
                VAR7 = NULL;
            }
            if (!FUN6(VAR10, (void*)&VAR9, &VAR8))
            {
                VAR8 = NULL;
            }
            if (VAR7 && FUN7(VAR7))
            {
                FUN8(VAR7);
            }
            if (VAR8 && FUN7(VAR8))
            {
                FUN8(VAR8);
            }
            FUN9(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN5();
    return 0;
}