static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    int VAR9, VAR10;
    const char *VAR11;
    const char *VAR12 = NULL;
    const char *VAR13 = NULL;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR7 *VAR18 = NULL;
    assert(VAR2->VAR4 == NULL);
    assert(VAR6 != NULL && VAR2->VAR6 != VAR6);
    VAR15 = FUN2(&VAR19, NULL, 0, &VAR20);
    FUN3(VAR15, VAR6, &VAR18);
    if (VAR18)
    {
        FUN4(VAR8, VAR18);
        VAR9 = -VAR21;
        goto VAR22;
    }
    VAR12 = FUN5(VAR15, "");
    VAR17 = FUN6(VAR12);
    assert(VAR17 != NULL);
    if (VAR4 != NULL)
    {
        VAR11 = VAR4->VAR2->VAR11;
    }
    else
    {
        VAR11 = FUN7(VAR6, "");
    }
    if (VAR17->VAR23 && !VAR11)
    {
        FUN8(VAR8, "", VAR17->VAR24);
        VAR9 = -VAR21;
        goto VAR22;
    }
    FUN9(VAR2, VAR11 ?: "", VAR2->VAR10, VAR17->VAR24);
    VAR13 = FUN5(VAR15, "");
    FUN10(VAR2, VAR13, &VAR18);
    if (VAR18)
    {
        FUN4(VAR8, VAR18);
        VAR9 = -VAR21;
        goto VAR22;
    }
    VAR2->VAR25 = !(VAR2->VAR10 & VAR26);
    if (VAR27 && !FUN11(VAR17, VAR2->VAR25))
    {
        FUN8(VAR8, !VAR2->VAR25 && FUN11(VAR17, true) ? "" : "", VAR17->VAR24);
        VAR9 = -VAR28;
        goto VAR22;
    }
    assert(VAR2->VAR29 == 0);
    if (VAR2->VAR10 & VAR30)
    {
        if (!VAR2->VAR25)
        {
            FUN12(VAR2);
        }
        else
        {
            FUN8(VAR8, "");
            VAR9 = -VAR21;
            goto VAR22;
        }
    }
    if (VAR11 != NULL)
    {
        FUN13(VAR2->VAR11, sizeof(VAR2->VAR11), VAR11);
    }
    else
    {
        VAR2->VAR11[0] = '';
    }
    FUN13(VAR2->VAR31, sizeof(VAR2->VAR31), VAR2->VAR11);
    VAR2->VAR17 = VAR17;
    VAR2->VAR32 = FUN14(VAR17->VAR33);
    FUN15(&VAR2->VAR10, VAR15);
    VAR10 = FUN16(VAR2, VAR2->VAR10);
    if (VAR17->VAR34)
    {
        assert(VAR4 == NULL);
        assert(!VAR17->VAR23 || VAR11 != NULL);
        VAR9 = VAR17->FUN17(VAR2, VAR6, VAR10, &VAR18);
    }
    else
    {
        if (VAR4 == NULL)
        {
            FUN8(VAR8, ""
                             "",
                       VAR17->VAR24);
            VAR9 = -VAR21;
            goto VAR35;
        }
        VAR2->VAR4 = VAR4;
        VAR9 = VAR17->FUN18(VAR2, VAR6, VAR10, &VAR18);
    }
    if (VAR9 < 0)
    {
        if (VAR18)
        {
            FUN4(VAR8, VAR18);
        }
        else if (VAR2->VAR11[0])
        {
            FUN19(VAR8, -VAR9, "", VAR2->VAR11);
        }
        else
        {
            FUN19(VAR8, -VAR9, "");
        }
        goto VAR35;
    }
    VAR9 = FUN20(VAR2, VAR2->VAR36);
    if (VAR9 < 0)
    {
        FUN19(VAR8, -VAR9, "");
        goto VAR35;
    }
    FUN21(VAR2, &VAR18);
    if (VAR18)
    {
        FUN4(VAR8, VAR18);
        VAR9 = -VAR21;
        goto VAR35;
    }
    assert(FUN22(VAR2) != 0);
    assert(FUN23(VAR2) != 0);
    assert(FUN24(VAR2->VAR37.VAR38));
    FUN25(VAR15);
    return 0;
VAR35:
    VAR2->VAR4 = NULL;
    FUN26(VAR2->VAR32);
    VAR2->VAR32 = NULL;
    VAR2->VAR17 = NULL;
VAR22:
    FUN25(VAR15);
    return VAR9;
}