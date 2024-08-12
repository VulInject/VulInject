static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11, VAR12;
    const char *VAR13;
    VAR9 *VAR14 = NULL;
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
    FUN3(VAR2, VAR13 ?: "", VAR6, VAR8->VAR15);
    if (VAR3 != NULL && VAR8->VAR16)
    {
        FUN4(VAR3, VAR2);
        return 0;
    }
    VAR2->VAR12 = VAR6;
    VAR2->VAR17 = 512;
    VAR2->VAR18 = true;
    VAR12 = FUN5(VAR2, VAR6);
    VAR2->VAR19 = !(VAR12 & VAR20);
    if (VAR21 && !FUN6(VAR8, VAR2->VAR19))
    {
        FUN7(VAR10, "", VAR8->VAR15);
        return -VAR22;
    }
    assert(VAR2->VAR23 == 0);
    if (!VAR2->VAR19 && (VAR6 & VAR24))
    {
        FUN8(VAR2);
    }
    if (VAR13 != NULL)
    {
        FUN9(VAR2->VAR13, sizeof(VAR2->VAR13), VAR13);
    }
    else
    {
        VAR2->VAR13[0] = '';
    }
    VAR2->VAR8 = VAR8;
    VAR2->VAR25 = FUN10(VAR8->VAR26);
    VAR2->VAR27 = !!(VAR6 & VAR28);
    if (VAR8->VAR16)
    {
        assert(VAR3 == NULL);
        assert(!VAR8->VAR29 || VAR13 != NULL);
        VAR11 = VAR8->FUN11(VAR2, VAR5, VAR12, &VAR14);
    }
    else
    {
        if (VAR3 == NULL)
        {
            FUN7(VAR10, ""
                             "",
                       VAR8->VAR15);
            VAR11 = -VAR30;
            goto VAR31;
        }
        VAR2->VAR3 = VAR3;
        VAR11 = VAR8->FUN12(VAR2, VAR5, VAR12, &VAR14);
    }
    if (VAR11 < 0)
    {
        if (FUN13(&VAR14))
        {
            FUN14(VAR10, VAR14);
        }
        else if (VAR2->VAR13[0])
        {
            FUN15(VAR10, -VAR11, "", VAR2->VAR13);
        }
        else
        {
            FUN15(VAR10, -VAR11, "");
        }
        goto VAR31;
    }
    VAR11 = FUN16(VAR2, VAR2->VAR32);
    if (VAR11 < 0)
    {
        FUN15(VAR10, -VAR11, "");
        goto VAR31;
    }
    if (VAR2->VAR33)
    {
        assert(VAR2->VAR13[0] != '');
        unlink(VAR2->VAR13);
    }
    return 0;
VAR31:
    VAR2->VAR3 = NULL;
    FUN17(VAR2->VAR25);
    VAR2->VAR25 = NULL;
    VAR2->VAR8 = NULL;
    return VAR11;
}