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
        VAR8->VAR41 = FUN11(VAR6->VAR43, VAR44);
    }
    if (VAR8->VAR45)
    {
        VAR8->VAR46 |= (1 << 13);
    }
    if (VAR8->VAR47)
    {
        if (FUN7(&VAR8->VAR12, VAR16))
        {
            VAR8->VAR46 |= VAR48;
        }
        else
        {
            VAR8->VAR46 |= VAR49;
        }
    }
    if (!VAR8->VAR50)
    {
        FUN12(VAR12, VAR51);
        VAR8->VAR52 &= ~0xf0;
        VAR8->VAR53 &= ~0xf000;
    }
    if (!VAR8->VAR54)
    {
        FUN12(VAR12, VAR55);
    }
    if (!VAR8->VAR56)
    {
        FUN12(VAR12, VAR57);
        VAR8->VAR58 &= ~0xf00;
    }
    if (!FUN7(VAR12, VAR55))
    {
        VAR8->VAR53 &= ~0xf00;
        VAR8->VAR52 &= ~0xf000;
    }
    if (!VAR8->VAR59)
    {
        VAR8->VAR60 = 0;
    }
    if (VAR8->VAR60 == 0)
    {
        VAR8->VAR59 = false;
    }
    if (FUN7(VAR12, VAR40) && FUN7(VAR12, VAR16))
    {
        uint32_t VAR61 = VAR8->VAR60;
        if (VAR61 > 0xff)
        {
            FUN10(VAR4, "" VAR62, VAR61);
            return;
        }
        if (VAR61)
        {
            if (FUN7(VAR12, VAR15))
            {
                VAR12->VAR63.VAR64[VAR65] = FUN13(VAR66, VAR61);
                VAR12->VAR63.VAR67[VAR65] = FUN13(VAR66, VAR61);
                if (FUN7(VAR12, VAR68))
                {
                    VAR12->VAR63.VAR64[VAR69] = FUN13(VAR66, VAR61);
                    VAR12->VAR63.VAR67[VAR69] = FUN13(VAR66, VAR61);
                }
            }
            else
            {
                VAR12->VAR70.VAR71 = FUN13(VAR66, VAR61);
                VAR12->VAR70.VAR72 = FUN13(VAR66, VAR61);
                VAR12->VAR70.VAR73 = FUN13(VAR66, VAR61);
            }
        }
    }
    if (FUN7(VAR12, VAR51))
    {
        FUN8(VAR12, VAR25);
    }
    FUN14(VAR8);
    FUN15(VAR8);
    FUN16(VAR8);
    if (VAR8->VAR50 || FUN7(VAR12, VAR68))
    {
        VAR74 *VAR75;
        VAR6->VAR76 = 2;
        if (!VAR8->VAR77)
        {
            VAR8->VAR77 = VAR6->VAR78;
        }
        VAR75 = FUN17(VAR8->VAR77, "");
        FUN18(VAR6, VAR75, VAR79);
    }
    else
    {
        VAR6->VAR76 = 1;
    }
    FUN18(VAR6, FUN17(VAR6->VAR78, ""), VAR80);
    FUN19(VAR6);
    FUN20(VAR6);
    VAR10->FUN21(VAR2, VAR4);