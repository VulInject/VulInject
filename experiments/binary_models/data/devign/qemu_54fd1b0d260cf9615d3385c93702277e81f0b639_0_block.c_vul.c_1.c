int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7 = -1;
    VAR5 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR11 *VAR12;
    const char *VAR13;
    bool VAR14;
    assert(VAR2 != NULL);
    assert(VAR2->VAR15->VAR10 != NULL);
    VAR10 = VAR2->VAR15->VAR10;
    VAR12 = FUN2(&VAR16, NULL, 0, &VAR17);
    FUN3(VAR12, VAR2->VAR18, &VAR8);
    if (VAR8)
    {
        FUN4(VAR6, VAR8);
        VAR7 = -VAR19;
        goto VAR20;
    }
    FUN5(&VAR2->VAR21, VAR12);
    VAR13 = FUN6(VAR12, "");
    if (VAR13)
    {
        FUN7(VAR2->VAR18, "", VAR13);
    }
    VAR13 = FUN6(VAR12, "");
    if (VAR13)
    {
        FUN7(VAR2->VAR18, "", VAR13);
    }
    VAR14 = !(VAR2->VAR21 & VAR22);
    VAR7 = FUN8(VAR2->VAR15, VAR14, true, &VAR8);
    if (VAR8)
    {
        FUN4(VAR6, VAR8);
        goto VAR20;
    }
    FUN9(VAR4, VAR2->VAR15, &VAR2->VAR23, &VAR2->VAR24);
    VAR7 = FUN10(VAR2->VAR15);
    if (VAR7)
    {
        FUN11(VAR6, -VAR7, "");
        goto VAR20;
    }
    if (VAR10->VAR25)
    {
        VAR7 = VAR10->FUN1(VAR2, VAR4, &VAR8);
        if (VAR7)
        {
            if (VAR8 != NULL)
            {
                FUN4(VAR6, VAR8);
            }
            else
            {
                FUN12(VAR6, "", VAR2->VAR15->VAR26);
            }
            goto VAR20;
        }
    }
    else
    {
        FUN12(VAR6, ""
                         "",
                   VAR10->VAR27, FUN13(VAR2->VAR15));
        VAR7 = -1;
        goto VAR20;
    }
    if (FUN14(VAR2->VAR18))
    {
        const VAR28 *VAR29 = FUN15(VAR2->VAR18);
        do
        {
            VAR30 *VAR31 = FUN16(VAR29->VAR13);
            const char *new = FUN17(VAR31);
            const char *VAR32 = FUN18(VAR2->VAR15->VAR18, VAR29->VAR33);
            if (!VAR32 || strcmp(new, VAR32))
            {
                FUN12(VAR6, "", VAR29->VAR33);
                VAR7 = -VAR19;
                goto VAR20;
            }
        } while ((VAR29 = FUN19(VAR2->VAR18, VAR29)));
    }
    VAR7 = FUN20(VAR2->VAR15, VAR4, VAR2->VAR23, VAR2->VAR24, NULL, VAR6);
    if (VAR7 < 0)
    {
        goto VAR20;
    }
    VAR7 = 0;
VAR20:
    FUN21(VAR12);
    return VAR7;
}