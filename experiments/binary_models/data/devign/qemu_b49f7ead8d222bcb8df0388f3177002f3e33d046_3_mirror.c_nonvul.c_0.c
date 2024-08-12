void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, int64_t VAR5, BlockdevOnError VAR6, VAR7 *VAR8, void *VAR9, VAR10 **VAR11, bool VAR12)
{
    int64_t VAR13, VAR14;
    int VAR15;
    int VAR16;
    VAR10 *VAR17 = NULL;
    VAR15 = FUN2(VAR4);
    if (FUN3(VAR4, VAR3->VAR18, VAR11))
    {
        return;
    }
    VAR13 = FUN4(VAR3);
    if (VAR13 < 0)
    {
        FUN5(VAR11, -VAR13, "", VAR3->VAR19);
        goto VAR20;
    }
    VAR14 = FUN4(VAR4);
    if (VAR14 < 0)
    {
        FUN5(VAR11, -VAR14, "", VAR4->VAR19);
        goto VAR20;
    }
    if (VAR13 > VAR14)
    {
        VAR16 = FUN6(VAR4, VAR13);
        if (VAR16 < 0)
        {
            FUN5(VAR11, -VAR16, ""
                                         "",
                             VAR3->VAR19, VAR4->VAR19);
            goto VAR20;
        }
    }
    FUN7(VAR1, VAR3, VAR4, NULL, VAR5, 0, 0, VAR21, VAR6, VAR6, false, VAR8, VAR9, &VAR17, &VAR22, false, VAR4, VAR12);
    if (VAR17)
    {
        FUN8(VAR11, VAR17);
        goto VAR20;
    }
    return;
VAR20:
    FUN3(VAR4, VAR15, NULL);
    return;
}