void FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, MirrorSyncMode VAR5, VAR6 *VAR7, BlockdevOnError VAR8, BlockdevOnError VAR9, VAR10 *VAR11, void *VAR12, VAR13 *VAR14, VAR15 **VAR16)
{
    int64_t VAR17;
    BlockDriverInfo VAR18;
    int VAR19;
    assert(VAR2);
    assert(VAR3);
    assert(VAR11);
    if (VAR2 == VAR3)
    {
        FUN2(VAR16, "");
        return;
    }
    if (!FUN3(VAR2))
    {
        FUN2(VAR16, "", FUN4(VAR2));
        return;
    }
    if (!FUN3(VAR3))
    {
        FUN2(VAR16, "", FUN4(VAR3));
        return;
    }
    if (FUN5(VAR2, VAR20, VAR16))
    {
        return;
    }
    if (FUN5(VAR3, VAR21, VAR16))
    {
        return;
    }
    if (VAR5 == VAR22)
    {
        if (!VAR7)
        {
            FUN2(VAR16, ""
                             ""VAR23\"");
            return;
        }
        if (FUN6(VAR2, VAR7, VAR16) < 0)
        {
            return;
        }
    }
    else if (VAR7)
    {
        FUN2(VAR16, ""
                         "",
                   VAR24[VAR5]);
        return;
    }
    VAR17 = FUN7(VAR2);
    if (VAR17 < 0)
    {
        FUN8(VAR16, -VAR17, "", FUN4(VAR2));
        goto VAR25;
    }
    VAR26 *VAR27 = FUN9(&VAR28, VAR2, VAR4, VAR11, VAR12, VAR16);
    if (!VAR27)
    {
        goto VAR25;
    }
    VAR27->VAR8 = VAR8;
    VAR27->VAR9 = VAR9;
    VAR27->VAR3 = VAR3;
    VAR27->VAR5 = VAR5;
    VAR27->VAR7 = VAR5 == VAR22 ? VAR7 : NULL;
    VAR19 = FUN10(VAR27->VAR3, &VAR18);
    if (VAR19 < 0 && !VAR3->VAR29)
    {
        FUN8(VAR16, -VAR19, ""
                                     "");
        FUN11(VAR16, "");
        goto VAR25;
    }
    else if (VAR19 < 0 && VAR3->VAR29)
    {
        VAR27->VAR30 = VAR31;
    }
    else
    {
        VAR27->VAR30 = FUN12(VAR31, VAR18.VAR30);
    }
    FUN13(VAR3, VAR27->VAR32.VAR33);
    VAR27->VAR32.VAR17 = VAR17;
    VAR27->VAR32.VAR34 = FUN14(VAR35);
    FUN15(VAR14, &VAR27->VAR32);
    FUN16(VAR27->VAR32.VAR34, VAR27);
    return;
VAR25:
    if (VAR7)
    {
        FUN17(VAR2, VAR7, NULL);
    }
}