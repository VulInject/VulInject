static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5 = 0;
    uint8_t VAR6 = 0, VAR7;
    uint16_t VAR8 = 0;
    int VAR9 = VAR10;
    FUN3(VAR2, ""
                  "",
               VAR4->VAR11.VAR12, VAR4->VAR11.VAR13, VAR4->VAR11.VAR14, VAR4->VAR15.VAR16);
    VAR5 = FUN4(&VAR4->VAR17, VAR4->VAR11.VAR18, VAR4->VAR11.VAR12, VAR4->VAR11.VAR13, VAR4->VAR11.VAR14);
    if (VAR5)
    {
        FUN5(VAR2, ""open\"", VAR5);
        return -1;
    }
    VAR4->VAR19 = VAR4->VAR17.VAR19;
    if (VAR4->VAR19)
    {
        FUN3(VAR2, "", VAR4->VAR17.VAR18, VAR4->VAR17.VAR12, VAR4->VAR17.VAR15, VAR4->VAR17.VAR20);
    }
    if (FUN6(&VAR4->VAR17, 0, VAR2->VAR21, VAR22) < 0)
    {
        FUN7(&VAR4->VAR17);
        return -1;
    }
    VAR4->VAR23 = VAR24;
    VAR4->VAR25 = VAR26;
    if ((VAR4->VAR17.VAR18 == 0) && (VAR4->VAR17.VAR12 == 0) && (VAR4->VAR17.VAR15 == 2) && (VAR4->VAR17.VAR20 == 0))
    {
        if (!FUN8(&VAR4->VAR17))
        {
            FUN5(VAR2, ""
                          "");
            FUN7(&VAR4->VAR17);
            return -1;
        }
        if (FUN9(VAR4, &VAR4->VAR17) < 0)
        {
            FUN5(VAR2, "");
            FUN7(&VAR4->VAR17);
            return -1;
        }
        FUN10(VAR4, &VAR4->VAR17);
    }
    FUN11(VAR4, &VAR8);
    if (FUN12(VAR4))
    {
        FUN5(VAR2, "");
        FUN7(&VAR4->VAR17);
        return -1;
    }
    VAR5 = FUN13(&VAR4->VAR17, VAR27, &VAR7);
    if (VAR5)
    {
        FUN5(VAR2, "", VAR5);
        VAR7 = 0;
    }
    if (!VAR7)
    {
        FUN3(VAR2, "");
        goto VAR28;
    }
    VAR6 = VAR4->VAR17.VAR29;
    VAR5 = FUN14(VAR30, VAR31, VAR6, &VAR9);
    if (VAR5 < 0)
    {
        FUN5(VAR2, "", VAR6, VAR9, VAR32);
        VAR8 |= VAR33;
        VAR6 = 0;
        VAR4->VAR6 = 0;
    }
    else
    {
        VAR6 = VAR9;
        VAR4->VAR6 = VAR9;
        VAR34[VAR6]++;
    }
    if (VAR6 != 0)
    {
        uint8_t VAR35 = FUN15(VAR4);
        VAR5 = FUN16(VAR30, VAR31, VAR6, FUN17(VAR2->VAR12), FUN18(VAR2->VAR16), VAR35);
        if (VAR5 < 0)
        {
            FUN5(VAR2, "", VAR35, VAR32);
            VAR8 |= VAR33;
            VAR34[VAR6]--;
            if (VAR34[VAR6] == 0)
            {
                if (FUN19(VAR30, VAR31, VAR6))
                {
                    FUN5(VAR2, ""
                                  "",
                               VAR6, VAR32);
                }
            }
            VAR4->VAR6 = 0;
        }
    }
VAR28:
    if (VAR8)
    {
        uint16_t VAR36;
        VAR5 = FUN20(&VAR4->VAR17, VAR37, &VAR36);
        if (VAR5)
        {
            FUN5(VAR2, "", VAR5);
        }
        else
        {
            VAR36 |= VAR8;
            VAR5 = FUN21(&VAR4->VAR17, VAR37, VAR36);
            if (VAR5)
            {
                FUN5(VAR2, "", VAR36, VAR5);
            }
        }
    }
    FUN22(&VAR4->VAR23, &VAR4->VAR15.VAR38);
    FUN22(&VAR4->VAR25, &VAR39);
    VAR4->VAR40 = true;
    FUN3(VAR2, "", VAR4->VAR11.VAR12, VAR4->VAR11.VAR13, VAR4->VAR11.VAR14);
    return 0;
}