static void FUN1(VAR1 *VAR2, const char *VAR3, double *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    char *VAR9 = (char *)VAR8->VAR10;
    double VAR11;
    VAR12 = 0;
    if (VAR8->VAR10)
    {
        VAR11 = FUN3(VAR8->VAR10, &VAR9);
    }
    if (!VAR8->VAR10 || VAR12 || VAR9 == VAR8->VAR10 || *VAR9)
    {
        FUN4(VAR6, VAR13, VAR3 ? VAR3 : "", "");
        return;
    }
    *VAR4 = VAR11;
}