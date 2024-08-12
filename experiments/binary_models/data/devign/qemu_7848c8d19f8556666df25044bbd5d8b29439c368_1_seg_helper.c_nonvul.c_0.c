void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    uint32_t VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    uint32_t VAR17 = 0, VAR18 = 0, VAR19 = 0, VAR20, VAR21, VAR22, VAR23;
    uint32_t VAR24, VAR25, VAR26;
    target_ulong VAR27, VAR28, VAR29;
    VAR29 = VAR2->VAR30 + VAR6;
    FUN2("", VAR3, (VAR31)VAR4, VAR5);
    FUN3(FUN4(FUN5(VAR2)));
    if ((VAR3 & 0xfffc) == 0)
    {
        FUN6(VAR2, VAR32, 0);
    }
    if (FUN7(VAR2, &VAR9, &VAR10, VAR3) != 0)
    {
        FUN6(VAR2, VAR32, VAR3 & 0xfffc);
    }
    VAR11 = VAR2->VAR33 & VAR34;
    FUN2("", VAR9, VAR10);
    if (VAR10 & VAR35)
    {
        if (!(VAR10 & VAR36))
        {
            FUN6(VAR2, VAR32, VAR3 & 0xfffc);
        }
        VAR12 = (VAR10 >> VAR37) & 3;
        if (VAR10 & VAR38)
        {
            if (VAR12 > VAR11)
            {
                FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            }
        }
        else
        {
            VAR13 = VAR3 & 3;
            if (VAR13 > VAR11)
            {
                FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            }
            if (VAR12 != VAR11)
            {
                FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            }
        }
        if (!(VAR10 & VAR39))
        {
            FUN6(VAR2, VAR40, VAR3 & 0xfffc);
        }
        if (VAR5 == 2)
        {
            target_ulong VAR41;
            VAR41 = VAR2->VAR42[VAR43];
            FUN8(VAR41, VAR2->VAR44[VAR45].VAR14);
            FUN8(VAR41, VAR29);
            VAR2->VAR42[VAR43] = VAR41;
            FUN9(VAR2, VAR45, (VAR3 & 0xfffc) | VAR11, FUN10(VAR9, VAR10), FUN11(VAR9, VAR10), VAR10);
            VAR2->VAR30 = VAR4;
        }
        else
        {
            VAR20 = VAR2->VAR42[VAR43];
            VAR23 = FUN12(VAR2->VAR44[VAR46].VAR47);
            VAR27 = VAR2->VAR44[VAR46].VAR48;
            if (VAR5)
            {
                FUN13(VAR27, VAR20, VAR23, VAR2->VAR44[VAR45].VAR14);
                FUN13(VAR27, VAR20, VAR23, VAR29);
            }
            else
            {
                FUN14(VAR27, VAR20, VAR23, VAR2->VAR44[VAR45].VAR14);
                FUN14(VAR27, VAR20, VAR23, VAR29);
            }
            VAR25 = FUN11(VAR9, VAR10);
            if (VAR4 > VAR25)
            {
                FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            }
            FUN15(VAR20, VAR23);
            FUN9(VAR2, VAR45, (VAR3 & 0xfffc) | VAR11, FUN10(VAR9, VAR10), VAR25, VAR10);
            VAR2->VAR30 = VAR4;
        }
    }
    else
    {
        VAR21 = (VAR10 >> VAR49) & 0x1f;
        VAR12 = (VAR10 >> VAR37) & 3;
        VAR13 = VAR3 & 3;
        switch (VAR21)
        {
        case 1:
        case 9:
        case 5:
            if (VAR12 < VAR11 || VAR12 < VAR13)
            {
                FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            }
            FUN16(VAR2, VAR3, VAR9, VAR10, VAR50, VAR29);
            VAR51 = VAR52;
            return;
        case 4:
        case 12:
            break;
        default:
            FUN6(VAR2, VAR32, VAR3 & 0xfffc);
            break;
        }
        VAR5 = VAR21 >> 3;
        if (VAR12 < VAR11 || VAR12 < VAR13)
        {
            FUN6(VAR2, VAR32, VAR3 & 0xfffc);
        }
        if (!(VAR10 & VAR39))
        {
            FUN6(VAR2, VAR40, VAR3 & 0xfffc);
        }
        VAR14 = VAR9 >> 16;
        VAR15 = (VAR10 & 0xffff0000) | (VAR9 & 0x0000ffff);
        VAR16 = VAR10 & 0x1f;
        if ((VAR14 & 0xfffc) == 0)
        {
            FUN6(VAR2, VAR32, 0);
        }
        if (FUN7(VAR2, &VAR9, &VAR10, VAR14) != 0)
        {
            FUN6(VAR2, VAR32, VAR14 & 0xfffc);
        }
        if (!(VAR10 & VAR35) || !(VAR10 & (VAR36)))
        {
            FUN6(VAR2, VAR32, VAR14 & 0xfffc);
        }
        VAR12 = (VAR10 >> VAR37) & 3;
        if (VAR12 > VAR11)
        {
            FUN6(VAR2, VAR32, VAR14 & 0xfffc);
        }
        if (!(VAR10 & VAR39))
        {
            FUN6(VAR2, VAR40, VAR14 & 0xfffc);
        }
        if (!(VAR10 & VAR38) && VAR12 < VAR11)
        {
            FUN17(VAR2, &VAR17, &VAR20, VAR12);
            FUN2("" VAR53 "", VAR17, VAR20, VAR16, VAR2->VAR42[VAR43]);
            if ((VAR17 & 0xfffc) == 0)
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            if ((VAR17 & 3) != VAR12)
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            if (FUN7(VAR2, &VAR18, &VAR19, VAR17) != 0)
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            VAR22 = (VAR19 >> VAR37) & 3;
            if (VAR22 != VAR12)
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            if (!(VAR19 & VAR35) || (VAR19 & VAR36) || !(VAR19 & VAR55))
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            if (!(VAR19 & VAR39))
            {
                FUN6(VAR2, VAR54, VAR17 & 0xfffc);
            }
            VAR26 = FUN12(VAR2->VAR44[VAR46].VAR47);
            VAR28 = VAR2->VAR44[VAR46].VAR48;
            VAR23 = FUN12(VAR19);
            VAR27 = FUN10(VAR18, VAR19);
            if (VAR5)
            {
                FUN13(VAR27, VAR20, VAR23, VAR2->VAR44[VAR46].VAR14);
                FUN13(VAR27, VAR20, VAR23, VAR2->VAR42[VAR43]);
                for (VAR8 = VAR16 - 1; VAR8 >= 0; VAR8--)
                {
                    VAR24 = FUN18(VAR2, VAR28 + ((VAR2->VAR42[VAR43] + VAR8 * 4) & VAR26));
                    FUN13(VAR27, VAR20, VAR23, VAR24);
                }
            }
            else
            {
                FUN14(VAR27, VAR20, VAR23, VAR2->VAR44[VAR46].VAR14);
                FUN14(VAR27, VAR20, VAR23, VAR2->VAR42[VAR43]);
                for (VAR8 = VAR16 - 1; VAR8 >= 0; VAR8--)
                {
                    VAR24 = FUN19(VAR2, VAR28 + ((VAR2->VAR42[VAR43] + VAR8 * 2) & VAR26));
                    FUN14(VAR27, VAR20, VAR23, VAR24);
                }
            }
            VAR7 = 1;
        }
        else
        {
            VAR20 = VAR2->VAR42[VAR43];
            VAR23 = FUN12(VAR2->VAR44[VAR46].VAR47);
            VAR27 = VAR2->VAR44[VAR46].VAR48;
            VAR7 = 0;
        }
        if (VAR5)
        {
            FUN13(VAR27, VAR20, VAR23, VAR2->VAR44[VAR45].VAR14);
            FUN13(VAR27, VAR20, VAR23, VAR29);
        }
        else
        {
            FUN14(VAR27, VAR20, VAR23, VAR2->VAR44[VAR45].VAR14);
            FUN14(VAR27, VAR20, VAR23, VAR29);
        }
        if (VAR7)
        {
            VAR17 = (VAR17 & ~3) | VAR12;
            FUN9(VAR2, VAR46, VAR17, VAR27, FUN11(VAR18, VAR19), VAR19);
        }
        VAR14 = (VAR14 & ~3) | VAR12;
        FUN9(VAR2, VAR45, VAR14, FUN10(VAR9, VAR10), FUN11(VAR9, VAR10), VAR10);
        FUN15(VAR20, VAR23);
        VAR2->VAR30 = VAR15;
    }
}