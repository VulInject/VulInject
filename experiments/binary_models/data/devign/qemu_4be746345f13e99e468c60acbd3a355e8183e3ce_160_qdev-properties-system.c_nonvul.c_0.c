static void FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = VAR4;
    VAR9 **VAR10 = FUN3(VAR6, VAR8);
    if (*VAR10)
    {
        FUN4(*VAR10, VAR6);
        FUN5(*VAR10);
    }
}