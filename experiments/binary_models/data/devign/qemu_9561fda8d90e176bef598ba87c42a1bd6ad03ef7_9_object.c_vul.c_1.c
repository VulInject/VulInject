static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR1 **VAR9 = VAR5;
    VAR10 *VAR11;
    if (*VAR9)
    {
        VAR11 = FUN2(*VAR9);
        FUN3(VAR4, &VAR11, VAR6, VAR8);
        FUN4(VAR11);
    }
    else
    {
        VAR11 = (VAR10 *)"";
        FUN3(VAR4, &VAR11, VAR6, VAR8);
    }
}