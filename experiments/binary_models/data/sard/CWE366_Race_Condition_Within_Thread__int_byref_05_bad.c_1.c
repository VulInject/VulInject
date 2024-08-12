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
int VAR7 = 1; 
int VAR8 = 0; 
void FUN5()
{
    if(VAR7)
    {
        {
            stdThread VAR9 = NULL;
            stdThread VAR10 = NULL;
            int VAR11;
            VAR11 = 0;
            if (!FUN6(VAR12, (void*)&VAR11, &VAR9))
            {
                VAR9 = NULL;
            }
            if (!FUN6(VAR12, (void*)&VAR11, &VAR10))
            {
                VAR10 = NULL;
            }
            if (VAR9 && FUN7(VAR9))
            {
                FUN8(VAR9);
            }
            if (VAR10 && FUN7(VAR10))
            {
                FUN8(VAR10);
            }
            FUN9(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN5();
    return 0;
}