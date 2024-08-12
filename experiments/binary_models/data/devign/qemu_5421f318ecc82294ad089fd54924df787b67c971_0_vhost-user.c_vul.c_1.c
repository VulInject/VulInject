static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR4;
    int VAR10, VAR11 = VAR12;
    VAR10 = FUN2(VAR6, VAR9, VAR11);
    if (VAR10 != VAR11)
    {
        FUN3("", VAR10, VAR11);
        goto VAR13;
    }
    if (VAR4->VAR14 != (VAR15 | VAR16))
    {
        FUN3(""
                     "",
                     VAR4->VAR14, VAR15 | VAR16);
        goto VAR13;
    }
    if (VAR4->VAR11 > VAR17)
    {
        FUN3(""
                     "",
                     VAR4->VAR11, VAR17);
        goto VAR13;
    }
    if (VAR4->VAR11)
    {
        VAR9 += VAR12;
        VAR11 = VAR4->VAR11;
        VAR10 = FUN2(VAR6, VAR9, VAR11);
        if (VAR10 != VAR11)
        {
            FUN3(""
                         "",
                         VAR10, VAR4->VAR11);
            goto VAR13;
        }
    }
    return 0;
VAR13:
    return -1;
}