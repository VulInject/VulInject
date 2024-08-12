void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, int64_t VAR5, MirrorSyncMode VAR6, VAR7 *VAR8, BlockdevOnError VAR9, BlockdevOnError VAR10, VAR11 *VAR12, void *VAR13, VAR14 *VAR15, VAR16 **VAR17)
{
    int64_t VAR18;
    BlockDriverInfo VAR19;
    VAR20 *VAR21 = NULL;
    int VAR22;
    assert(VAR3);
    assert(VAR4);
    if (VAR3 == VAR4)
    {
        FUN2(VAR17, "");
        return;
    }
    if (!FUN3(VAR3))
    {
        FUN2(VAR17, "", FUN4(VAR3));
        return;
    }
    if (!FUN3(VAR4))
    {
        FUN2(VAR17, "", FUN4(VAR4));
        return;
    }
    if (FUN5(VAR3, VAR23, VAR17))
    {
        return;
    }
    if (FUN5(VAR4, VAR24, VAR17))
    {
        return;
    }
    if (VAR6 == VAR25)
    {
        if (!VAR8)
        {
            FUN2(VAR17, ""
                             ""VAR26\"");
            return;
        }
        if (FUN6(VAR3, VAR8, VAR17) < 0)
        {
            return;
        }
    }
    else if (VAR8)
    {
        FUN2(VAR17, ""
                         "",
                   VAR27[VAR6]);
        return;
    }
    VAR18 = FUN7(VAR3);
    if (VAR18 < 0)
    {
        FUN8(VAR17, -VAR18, "", FUN4(VAR3));
        goto VAR28;
    }
    VAR21 = FUN9(VAR1, &VAR29, VAR3, VAR5, VAR12, VAR13, VAR17);
    if (!VAR21)
    {
        goto VAR28;
    }
    VAR21->VAR4 = FUN10();
    FUN11(VAR21->VAR4, VAR4);
    VAR21->VAR9 = VAR9;
    VAR21->VAR10 = VAR10;
    VAR21->VAR6 = VAR6;
    VAR21->VAR8 = VAR6 == VAR25 ? VAR8 : NULL;
    VAR22 = FUN12(VAR4, &VAR19);
    if (VAR22 < 0 && !VAR4->VAR30)
    {
        FUN8(VAR17, -VAR22, ""
                                     "");
        FUN13(VAR17, "");
        goto VAR28;
    }
    else if (VAR22 < 0 && VAR4->VAR30)
    {
        VAR21->VAR31 = VAR32;
    }
    else
    {
        VAR21->VAR31 = FUN14(VAR32, VAR19.VAR31);
    }
    FUN15(VAR4, VAR21->VAR33.VAR34);
    VAR21->VAR33.VAR18 = VAR18;
    VAR21->VAR33.VAR35 = FUN16(VAR36);
    FUN17(VAR15, &VAR21->VAR33);
    FUN18(VAR21->VAR33.VAR35, VAR21);
    return;
VAR28:
    if (VAR8)
    {
        FUN19(VAR3, VAR8, NULL);
    }
    if (VAR21)
    {
        FUN20(VAR21->VAR4);
        FUN21(&VAR21->VAR33);
    }
}