void FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, BlockdevOnError VAR5, VAR6 *VAR7, void *VAR8, VAR9 **VAR10)
{
    int64_t VAR11, VAR12;
    int VAR13;
    VAR13 = FUN2(VAR3);
    if (FUN3(VAR3, VAR2->VAR14, VAR10))
    {
        return;
    }
    VAR11 = FUN4(VAR2);
    if (VAR11 < 0)
    {
        FUN5(VAR10, "", VAR2->VAR15);
        goto VAR16;
    }
    VAR12 = FUN4(VAR3);
    if (VAR12 < 0)
    {
        FUN5(VAR10, "", VAR3->VAR15);
        goto VAR16;
    }
    if (VAR11 > VAR12)
    {
        if (FUN6(VAR3, VAR11) < 0)
        {
            FUN5(VAR10, ""
                             "",
                       VAR2->VAR15, VAR3->VAR15);
            goto VAR16;
        }
    }
    FUN7(VAR3);
    FUN8(VAR2, VAR3, VAR4, 0, 0, VAR5, VAR5, VAR7, VAR8, VAR10, &VAR17, false, VAR3);
    if (FUN9(VAR10))
    {
        goto VAR16;
    }
    return;
VAR16:
    FUN3(VAR3, VAR13, NULL);
    return;
}