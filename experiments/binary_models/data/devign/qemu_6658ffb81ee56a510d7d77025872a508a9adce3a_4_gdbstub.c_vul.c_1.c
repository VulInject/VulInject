static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    char VAR5[256];
    int VAR6;
    if (VAR4->VAR7 == VAR8)
        FUN2(VAR4->VAR9, 0);
    if (VAR2 == VAR10)
    {
        FUN3(VAR4->VAR9);
        VAR6 = VAR11;
    }
    else if (VAR2 == VAR12)
    {
        VAR6 = VAR13;
    }
    else
    {
        VAR6 = 0;
        snprintf(VAR5, sizeof(VAR5), "", VAR6);