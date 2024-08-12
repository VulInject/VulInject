static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR3 *VAR7 = NULL;
    VAR8 *VAR9;
    uint8_t VAR10 = VAR11 | VAR12;
    if (!!VAR6->VAR13 + !!VAR6->VAR14 + !!VAR6->VAR15 != 1)
    {
        FUN3(VAR4, "");
        return;
    }
    if (VAR6->VAR15)
    {
        VAR16 *VAR17;
        if (VAR6->VAR18)
        {
            FUN4("");
        }
        VAR17 = FUN5(VAR6->VAR15, &VAR19);
        VAR6->VAR20 = FUN6(VAR17);
    }
    else if (VAR6->VAR18 == NULL)
    {
        VAR6->VAR20 = 4 << 20;
    }
    else
    {
        char *VAR21;
        int64_t VAR22 = FUN7(VAR6->VAR18, &VAR21);
        if (VAR22 < 0 || *VAR21 != '' || !FUN8(VAR22))
        {
            FUN3(VAR4, "", VAR6->VAR18);
            return;
        }
        VAR6->VAR20 = VAR22;
    }
    if (FUN9(VAR6, VAR23) && !FUN9(VAR6, VAR24))
    {
        FUN3(VAR4, "");
        return;
    }
    if (VAR6->VAR25)
    {
        if (FUN10(VAR6->VAR25, "", 5) == 0)
        {
            VAR6->VAR26 = VAR27;
        }
        else if (FUN10(VAR6->VAR25, "", 7) == 0)
        {
            VAR6->VAR26 = VAR28;
        }
        else
        {
            FUN3(VAR4, "");
            return;
        }
    }
    else
    {
        VAR6->VAR26 = VAR28;
    }
    VAR9 = VAR2->VAR29;
    VAR9[VAR30] = VAR31 | VAR32;
    FUN11(VAR9, 1);
    FUN12(&VAR6->VAR33, FUN13(VAR6), &VAR34, VAR6, "", VAR35);
    FUN14(VAR2, 0, VAR11, &VAR6->VAR33);
    FUN15(&VAR6->VAR36, FUN13(VAR6), "", VAR6->VAR20);
    if (VAR6->VAR37)
    {
        VAR10 |= VAR38;
    }
    if (VAR6->VAR15 != NULL)
    {
        VAR16 *VAR17;
        FUN16("");
        VAR17 = FUN5(FUN17(VAR6->VAR15), &VAR19);
        FUN18(VAR17, FUN19(VAR6));
        FUN20(&VAR6->VAR36, 0, VAR17);
        FUN14(FUN21(VAR6), 2, VAR10, &VAR6->VAR36);
    }
    else if (VAR6->VAR13 != NULL)
    {
        if (FUN10(VAR6->VAR13->VAR39, "", 5))
        {
            FUN3(VAR4, "");
            return;
        }
        FUN16("", VAR6->VAR13->VAR39);
        if (FUN22(VAR6) < 0)
        {
            FUN3(VAR4, "");
            return;
        }
        FUN23(VAR6, 16);
        VAR6->VAR40 = -1;
        FUN14(VAR2, 2, VAR10, &VAR6->VAR36);
        FUN24(VAR6->VAR13, VAR41, VAR42, NULL, VAR6);
    }
    else
    {
        int VAR43;
        FUN16("", VAR6->VAR14);
        if ((VAR43 = FUN25(VAR6->VAR14, VAR44 | VAR45 | VAR46, VAR47 | VAR48 | VAR49)) > 0)
        {
            if (FUN26(VAR43, VAR6->VAR20) != 0)
            {
                FUN27("");
            }
        }
        else if ((VAR43 = FUN25(VAR6->VAR14, VAR44 | VAR45, VAR47 | VAR48 | VAR49)) < 0)
        {
            FUN3(VAR4, "");
            return;
        }
        if (FUN28(VAR6, VAR43, VAR4) == -1)
        {
            return;
        }
        FUN29(VAR6, VAR43, VAR10, &VAR7);
        if (VAR7)
        {
            FUN30(VAR4, VAR7);
            return;
        }
    }
    FUN31(&VAR6->VAR50, sizeof(VAR51));
    if (VAR6->VAR26 == VAR27)
    {
        FUN3(&VAR6->VAR52, "");
        FUN32(VAR6->VAR52);
    }
}