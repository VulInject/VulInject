static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11, VAR12;
    const char *VAR13;
    const char *VAR14 = NULL;
    VAR9 *VAR15 = NULL;
    assert(VAR8 != NULL);
    assert(VAR2->VAR3 == NULL);
    assert(VAR5 != NULL && VAR2->VAR5 != VAR5);
    if (VAR3 != NULL)
    {
        VAR13 = VAR3->VAR13;
    }
    else
    {
        VAR13 = FUN2(VAR5, "");
    }
    if (VAR8->VAR16 && !VAR13)
    {
        FUN3(VAR10, "", VAR8->VAR17);
        return -VAR18;
    }
    FUN4(VAR2, VAR13 ?: "", VAR6, VAR8->VAR17);
    VAR14 = FUN2(VAR5, "");
    FUN5(VAR2, VAR14, &VAR15);
    if (VAR15)
    {
        FUN6(VAR10, VAR15);
        return -VAR18;
    }
    FUN7(VAR5, "");
    VAR2->VAR12 = VAR6;
    VAR2->VAR19 = 512;
    VAR2->VAR20 = 512;
    VAR2->VAR21 = true;
    VAR12 = FUN8(VAR2, VAR6);
    VAR2->VAR22 = !(VAR12 & VAR23);
    if (VAR24 && !FUN9(VAR8, VAR2->VAR22))
    {
        FUN3(VAR10, !VAR2->VAR22 && FUN9(VAR8, true) ? "" : "", VAR8->VAR17);
        return -VAR25;
    }
    assert(VAR2->VAR26 == 0);
    if (VAR6 & VAR27)
    {
        if (!VAR2->VAR22)
        {
            FUN10(VAR2);
        }
        else
        {
            FUN3(VAR10, "");
            return -VAR18;
        }
    }
    if (VAR13 != NULL)
    {
        FUN11(VAR2->VAR13, sizeof(VAR2->VAR13), VAR13);
    }
    else
    {
        VAR2->VAR13[0] = '';
    }
    FUN11(VAR2->VAR28, sizeof(VAR2->VAR28), VAR2->VAR13);
    VAR2->VAR8 = VAR8;
    VAR2->VAR29 = FUN12(VAR8->VAR30);
    VAR2->VAR31 = !!(VAR6 & VAR32);
    if (VAR8->VAR33)
    {
        assert(VAR3 == NULL);
        assert(!VAR8->VAR16 || VAR13 != NULL);
        VAR11 = VAR8->FUN13(VAR2, VAR5, VAR12, &VAR15);
    }
    else
    {
        if (VAR3 == NULL)
        {
            FUN3(VAR10, ""
                             "",
                       VAR8->VAR17);
            VAR11 = -VAR18;
            goto VAR34;
        }
        VAR2->VAR3 = VAR3;
        VAR11 = VAR8->FUN14(VAR2, VAR5, VAR12, &VAR15);
    }
    if (VAR11 < 0)
    {
        if (VAR15)
        {
            FUN6(VAR10, VAR15);
        }
        else if (VAR2->VAR13[0])
        {
            FUN15(VAR10, -VAR11, "", VAR2->VAR13);
        }
        else
        {
            FUN15(VAR10, -VAR11, "");
        }
        goto VAR34;
    }
    if (VAR2->VAR35)
    {
        FUN16("");
        FUN17(""
                     ""
                     "");
    }
    VAR11 = FUN18(VAR2, VAR2->VAR36);
    if (VAR11 < 0)
    {
        FUN15(VAR10, -VAR11, "");
        goto VAR34;
    }
    FUN19(VAR2, &VAR15);
    if (VAR15)
    {
        FUN6(VAR10, VAR15);
        VAR11 = -VAR18;
        goto VAR34;
    }
    assert(FUN20(VAR2) != 0);
    assert(FUN21(VAR2) != 0);
    assert((VAR2->VAR20 != 0) || VAR2->VAR37);
    return 0;
VAR34:
    VAR2->VAR3 = NULL;
    FUN22(VAR2->VAR29);
    VAR2->VAR29 = NULL;
    VAR2->VAR8 = NULL;
    return VAR11;
}