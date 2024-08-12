void FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, BlockdevOnError VAR5, VAR6 *VAR7, void *VAR8, VAR9 **VAR10)
{
    int64_t VAR11, VAR12;
    int VAR13;
    int VAR14;
    VAR9 *VAR15 = NULL;
    VAR13 = FUN2(VAR3);
    if (FUN3(VAR3, VAR2->VAR16, VAR10))
    {
        return;
    }
    VAR11 = FUN4(VAR2);
    if (VAR11 < 0)
    {
        FUN5(VAR10, -VAR11, "", VAR2->VAR17);
        goto VAR18;
    }
    VAR12 = FUN4(VAR3);
    if (VAR12 < 0)
    {
        FUN5(VAR10, -VAR12, "", VAR3->VAR17);
        goto VAR18;
    }
    if (VAR11 > VAR12)
    {
        VAR14 = FUN6(VAR3, VAR11);
        if (VAR14 < 0)
        {
            FUN5(VAR10, -VAR14, ""
                                         "",
                             VAR2->VAR17, VAR3->VAR17);
            goto VAR18;
        }
    }
    FUN7(VAR3);
    FUN8(VAR2, VAR3, VAR4, 0, 0, VAR5, VAR5, VAR7, VAR8, &VAR15, &VAR19, false, VAR3);
    if (VAR15)
    {
        FUN9(VAR10, VAR15);
        goto VAR18;
    }
    return;
VAR18:
    FUN3(VAR3, VAR13, NULL);
    return;
}