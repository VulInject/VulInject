#VAR1 ""
#VAR1 <signal.VAR2>
typedef struct VAR3
{
    sig_atomic_t VAR4;
}   VAR5;
VAR5 *VAR6 = NULL;
VAR5 *VAR7 = NULL;
void FUN1(int VAR8)
{
    if (VAR6 != NULL)
    {
        VAR6->VAR4 = 2;
    }
}
void FUN2(int VAR8)
{
    if (VAR7 != NULL)
    {
        VAR7->VAR4 = 2;
    }
}
int FUN3()
{
    return 1;
}
int FUN4()
{
    return 0;
}
void FUN5()
{
    if(FUN3())
    {
        {
            VAR5 *VAR9 = NULL;
            signal(VAR10, VAR11);
            if (VAR6 != NULL)
            {
                free(VAR6);
                VAR6 = NULL;
            }
            VAR9 = (VAR5*)malloc(sizeof(VAR5));
            if (VAR9 == NULL) {FUN6(-1);}
            VAR6 = VAR9;
            VAR6->VAR4 = 1;
            signal(VAR10, VAR12);
            if (VAR6 != NULL)
            {
                free(VAR6);
                VAR6 = NULL;
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}