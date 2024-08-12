int FUN1(VAR1 **VAR2, const char *VAR3, int VAR4, const VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    const VAR11 **VAR12;
    VAR13 *VAR14;
    int VAR15;
    VAR12 = FUN2(NULL, NULL);
    if (!VAR12)
        return FUN3(VAR16);
    VAR15 = FUN4(&VAR14, VAR3, VAR4, VAR6, VAR8, VAR12);
    if (VAR15 < 0)
    {
        FUN5(&VAR12);
        return VAR15;
    }
    VAR15 = FUN6(VAR2, VAR14);
    if (VAR15 < 0)
    {
        FUN7(VAR14);
        FUN5(&VAR12);
        return VAR15;
    }
    VAR10 = (*VAR2)->VAR17;
    VAR10->VAR12 = VAR12;
    return 0;
}