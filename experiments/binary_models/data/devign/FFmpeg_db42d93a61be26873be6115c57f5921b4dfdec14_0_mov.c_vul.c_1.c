static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5 = FUN2(VAR4);
    int64_t VAR6 = FUN3(VAR4);
    int64_t VAR7;
    int32_t VAR8;
    int VAR9 = -1;
    if ((VAR7 = FUN4(VAR4, VAR5 - 4, VAR10)) < 0)
    {
        VAR9 = VAR7;
        goto VAR11;
    }
    VAR8 = FUN5(VAR4);
    if (VAR8 < 0 || VAR8 > VAR5)
    {
        FUN6(VAR2->VAR12, VAR13, "");
        goto VAR11;
    }
    if ((VAR7 = FUN4(VAR4, -VAR8, VAR14)) < 0)
    {
        VAR9 = VAR7;
        goto VAR11;
    }
    if (FUN5(VAR4) != VAR8)
    {
        FUN6(VAR2->VAR12, VAR13, "");
        goto VAR11;
    }
    if (FUN5(VAR4) != FUN7('', '', '', ''))
    {
        FUN6(VAR2->VAR12, VAR13, "");
        goto VAR11;
    }
    VAR9 = 0;
    FUN6(VAR2->VAR12, VAR15, "");
    while (!FUN8(VAR2, VAR4))
    {
    }
VAR11:
    VAR7 = FUN4(VAR4, VAR6, VAR10);
    if (VAR7 < 0)
    {
        FUN6(VAR2->VAR12, VAR16, "");
        VAR9 = VAR7;
    }
    return VAR9;
}