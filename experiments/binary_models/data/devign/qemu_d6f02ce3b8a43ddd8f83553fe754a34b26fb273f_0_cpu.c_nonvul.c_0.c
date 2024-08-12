static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR2);
    VAR11 *VAR12 = &VAR8->VAR12;
    int VAR13;
    VAR3 *VAR14 = NULL;
    FUN5(VAR6, &VAR14);
    if (VAR14 != NULL)
    {
        FUN6(VAR4, VAR14);
        return;
    }
    if (FUN7(VAR12, VAR15))
    {
        FUN8(VAR12, VAR16);
        FUN8(VAR12, VAR17);
        FUN8(VAR12, VAR18);
    }
    if (FUN7(VAR12, VAR16))
    {
        FUN8(VAR12, VAR19);
        FUN8(VAR12, VAR20);
        FUN8(VAR12, VAR21);
        if (!FUN7(VAR12, VAR22))
        {
            FUN8(VAR12, VAR23);
        }
        else
        {
            FUN8(VAR12, VAR24);
        }
        FUN8(VAR12, VAR25);
    }
    if (FUN7(VAR12, VAR23))
    {
        FUN8(VAR12, VAR24);
        FUN8(VAR12, VAR26);
    }
    if (FUN7(VAR12, VAR24))
    {
        FUN8(VAR12, VAR27);
        if (!FUN7(VAR12, VAR22))
        {
            FUN8(VAR12, VAR28);
        }
    }
    if (FUN7(VAR12, VAR27))
    {
        FUN8(VAR12, VAR29);
    }
    if (FUN7(VAR12, VAR22))
    {
        FUN8(VAR12, VAR30);
    }
    if (FUN7(VAR12, VAR17))
    {
        FUN8(VAR12, VAR30);
    }
    if (FUN7(VAR12, VAR31))
    {
        FUN8(VAR12, VAR32);
        FUN8(VAR12, VAR33);
    }
    if (FUN7(VAR12, VAR32))
    {
        FUN8(VAR12, VAR34);
    }
    if (FUN7(VAR12, VAR18))
    {
        FUN8(VAR12, VAR35);
        FUN8(VAR12, VAR36);
    }
    if (FUN7(VAR12, VAR37))
    {
        FUN8(VAR12, VAR38);
    }
    if (FUN7(VAR12, VAR20) && !FUN7(VAR12, VAR22))
    {
        FUN8(VAR12, VAR39);
    }
    if (FUN7(VAR12, VAR16) && !FUN7(VAR12, VAR22) && !FUN7(VAR12, VAR40))
    {
        VAR13 = 12;
    }
    else
    {
        VAR13 = 10;
    }
    if (!FUN9(VAR13))
    {
        FUN10(VAR4, ""
                         "");
        return;
    }
    if (VAR8->VAR41 == VAR42)
    {
        uint32_t VAR43 = VAR6->VAR44 / VAR45;
        uint32_t VAR46 = VAR6->VAR44 % VAR45;
        VAR8->VAR41 = (VAR43 << VAR47) | VAR46;
    }
    if (VAR8->VAR48)
    {
        VAR8->VAR49 |= (1 << 13);
    }
    if (VAR8->VAR50)
    {
        if (FUN7(&VAR8->VAR12, VAR16))
        {
            VAR8->VAR49 |= VAR51;
        }
        else
        {
            VAR8->VAR49 |= VAR52;
        }
    }
    if (!VAR8->VAR53)
    {
        FUN11(VAR12, VAR54);
        VAR8->VAR55 &= ~0xf0;
        VAR8->VAR56 &= ~0xf000;
    }
    if (!VAR8->VAR57)
    {
        FUN11(VAR12, VAR58);
    }
    if (!VAR8->VAR59)
    {
        VAR8->VAR59 = false;
        FUN11(VAR12, VAR60);
    }
    if (!FUN7(VAR12, VAR58))
    {
        VAR8->VAR56 &= ~0xf00;
        VAR8->VAR55 &= ~0xf000;
    }
    if (!VAR8->VAR61)
    {
        FUN11(VAR12, VAR40);
    }
    if (FUN7(VAR12, VAR40) && FUN7(VAR12, VAR16))
    {
        uint32_t VAR62 = VAR8->VAR63;
        if (VAR62 > 0xff)
        {
            FUN10(VAR4, "" VAR64, VAR62);
            return;
        }
        if (VAR62)
        {
            VAR12->VAR65.VAR66 = FUN12(VAR67, VAR62);
            VAR12->VAR65.VAR68 = FUN12(VAR67, VAR62);
            VAR12->VAR65.VAR69 = FUN12(VAR67, VAR62);
        }
    }
    if (FUN7(VAR12, VAR54))
    {
        FUN8(VAR12, VAR25);
    }
    FUN13(VAR8);
    FUN14(VAR8);
    FUN15(VAR8);
    if (VAR8->VAR53)
    {
        VAR6->VAR70 = 2;
    }
    else
    {
        VAR6->VAR70 = 1;
    }
    if (VAR8->VAR53)
    {
        VAR71 *VAR72;
        if (!VAR8->VAR73)
        {
            VAR8->VAR73 = VAR6->VAR74;
        }
        VAR72 = FUN16(VAR8->VAR73, "");
        FUN17(VAR6, VAR72, VAR75);
    }
    FUN17(VAR6, FUN16(VAR6->VAR74, ""), VAR76);
    FUN18(VAR6);
    FUN19(VAR6);
    VAR10->FUN20(VAR2, VAR4);
}