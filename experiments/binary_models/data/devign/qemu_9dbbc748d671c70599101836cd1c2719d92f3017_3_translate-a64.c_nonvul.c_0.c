void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    int VAR14, VAR15;
    target_ulong VAR16;
    target_ulong VAR17;
    int VAR18;
    int VAR19;
    VAR16 = VAR4->VAR20;
    VAR11->VAR4 = VAR4;
    VAR11->VAR21 = VAR22;
    VAR11->VAR20 = VAR16;
    VAR11->VAR23 = VAR7->VAR23;
    VAR11->VAR24 = 0;
    VAR11->VAR25 = 1;
    VAR11->VAR26 = FUN3(VAR9, 3);
    VAR11->VAR27 = 0;
    VAR11->VAR28 = 0;
    VAR11->VAR29 = 0;
    VAR11->VAR30 = 0;
    VAR11->VAR31 = FUN4(VAR4->VAR32);
    VAR11->VAR33 = FUN5(VAR11->VAR31);
    VAR11->VAR34 = (VAR11->VAR33 == 0);
    VAR11->VAR35 = FUN6(VAR4->VAR32);
    VAR11->VAR36 = 0;
    VAR11->VAR37 = 0;
    VAR11->VAR38 = VAR2->VAR38;
    VAR11->VAR39 = VAR9->VAR39;
    VAR11->VAR40 = FUN7(VAR4->VAR32);
    VAR11->VAR41 = FUN8(VAR4->VAR32);
    VAR11->VAR42 = false;
    VAR11->VAR43 = (FUN9(VAR9) == VAR11->VAR33);
    FUN10(VAR11);
    VAR17 = (VAR16 & VAR44) + VAR45;
    VAR15 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR46 & VAR47;
    if (VAR19 == 0)
    {
        VAR19 = VAR47;
    }
    FUN11(VAR4);
    FUN12();
    do
    {
        if (FUN13(!FUN14(&VAR7->VAR48)))
        {
            FUN15(VAR13, &VAR7->VAR48, VAR49)
            {
                if (VAR13->VAR20 == VAR11->VAR20)
                {
                    FUN16(VAR11, 0, VAR50);
                    VAR11->VAR20 += 2;
                    goto VAR51;
                }
            }
        }
        if (VAR5)
        {
            VAR14 = FUN17();
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                {
                    VAR52.VAR53[VAR15++] = 0;
                }
            }
            VAR52.VAR54[VAR15] = VAR11->VAR20;
            VAR52.VAR53[VAR15] = 1;
            VAR52.VAR55[VAR15] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR46 & VAR56))
        {
            FUN18();
        }
        if (FUN13(FUN19(VAR57 | VAR58)))
        {
            FUN20(VAR11->VAR20);
        }
        if (VAR11->VAR40 && !VAR11->VAR41)
        {
            assert(VAR18 == 0);
            FUN21(VAR59, FUN22(VAR11->VAR43, 0, 0), FUN23(VAR11));
            VAR11->VAR21 = VAR60;
            break;
        }
        FUN24(VAR9, VAR11);
        if (FUN25())
        {
            fprintf(VAR61, "" VAR62 "", VAR11->VAR20);
        }
        VAR18++;
    } while (!VAR11->VAR21 && !FUN26() && !VAR7->VAR23 && !VAR63 && !VAR11->VAR40 && VAR11->VAR20 < VAR17 && VAR18 < VAR19);
    if (VAR4->VAR46 & VAR56)
    {
        FUN27();
    }
    if (FUN13(VAR7->VAR23 || VAR11->VAR40) && VAR11->VAR21 != VAR60)
    {
        assert(VAR11->VAR21 != VAR64);
        if (VAR11->VAR21 != VAR65)
        {
            FUN28(VAR11->VAR20);
        }
        if (VAR7->VAR23)
        {
            FUN29(VAR50);
        }
        else
        {
            FUN30(VAR11);
        }
    }
    else
    {
        switch (VAR11->VAR21)
        {
        case VAR22:
            FUN31(VAR11, 1, VAR11->VAR20);
            break;
        default:
        case VAR66:
            FUN28(VAR11->VAR20);
        case VAR65:
            FUN32(0);
            break;
        case VAR64:
        case VAR60:
        case VAR67:
            break;
        case VAR68:
            FUN28(VAR11->VAR20);
            FUN33(VAR69);
            break;
        case VAR70:
            FUN28(VAR11->VAR20);
            FUN34(VAR69);
            break;
        }
    }
VAR51:
    FUN35(VAR4, VAR18);
    if (FUN19(VAR71))
    {
        FUN36("");
        FUN36("", FUN37(VAR16));
        FUN38(VAR9, VAR16, VAR11->VAR20 - VAR16, 4 | (VAR11->VAR28 << 1));
        FUN36("");
    }
    if (VAR5)
    {
        VAR14 = FUN17();
        VAR15++;
        while (VAR15 <= VAR14)
        {
            VAR52.VAR53[VAR15++] = 0;
        }
    }
    else
    {
        VAR4->VAR72 = VAR11->VAR20 - VAR16;
        VAR4->VAR73 = VAR18;
    }
}