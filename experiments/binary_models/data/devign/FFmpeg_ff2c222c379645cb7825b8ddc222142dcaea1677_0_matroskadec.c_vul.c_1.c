FUN1(VAR1 *VAR2, VAR3 *VAR4, char **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR7;
    int VAR9, VAR10;
    uint64_t VAR11;
    if ((VAR10 = FUN2(VAR2, VAR4, NULL)) < 0 || (VAR10 = FUN3(VAR2, &VAR11)) < 0)
        return VAR10;
    VAR9 = VAR11;
    if (VAR9 < 0 || !(*VAR5 = FUN4(VAR9 + 1)))
    {
        FUN5(VAR2->VAR8, VAR12, "");
        return FUN6(VAR13);
    }
    if (FUN7(VAR7, (VAR14 *)*VAR5, VAR9) != VAR9)
    {
        offset_t VAR15 = FUN8(VAR7);
        FUN5(VAR2->VAR8, VAR12, "" VAR16 "" VAR17 "", VAR15, VAR15);
        return FUN6(VAR18);
    }
    (*VAR5)[VAR9] = '';
    return 0;