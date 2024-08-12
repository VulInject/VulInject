void FUN1(int VAR1, target_ulong VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22, VAR23, VAR24;
    target_ulong VAR25, VAR26, VAR27;
    VAR27 = VAR28->VAR29 + VAR4;
    FUN2("", VAR1, (VAR30)VAR2, VAR3);
    FUN3(VAR28);
    if ((VAR1 & 0xfffc) == 0)
        FUN4(VAR31, 0);
    if (FUN5(&VAR7, &VAR8, VAR1) != 0)
        FUN4(VAR31, VAR1 & 0xfffc);
    VAR9 = VAR28->VAR32 & VAR33;
    FUN2("", VAR7, VAR8);
    if (VAR8 & VAR34)
    {
        if (!(VAR8 & VAR35))
            FUN4(VAR31, VAR1 & 0xfffc);
        VAR10 = (VAR8 >> VAR36) & 3;
        if (VAR8 & VAR37)
        {
            if (VAR10 > VAR9)
                FUN4(VAR31, VAR1 & 0xfffc);
        }
        else
        {
            VAR11 = VAR1 & 3;
            if (VAR11 > VAR9)
                FUN4(VAR31, VAR1 & 0xfffc);
            if (VAR10 != VAR9)
                FUN4(VAR31, VAR1 & 0xfffc);
        }
        if (!(VAR8 & VAR38))
            FUN4(VAR39, VAR1 & 0xfffc);
        if (VAR3 == 2)
        {
            target_ulong VAR40;
            VAR40 = VAR41;
            FUN6(VAR40, VAR28->VAR42[VAR43].VAR12);
            FUN6(VAR40, VAR27);
            VAR41 = VAR40;
            FUN7(VAR28, VAR43, (VAR1 & 0xfffc) | VAR9, FUN8(VAR7, VAR8), FUN9(VAR7, VAR8), VAR8);
            VAR44 = VAR2;
        }
        else
        {
            VAR18 = VAR41;
            VAR21 = FUN10(VAR28->VAR42[VAR45].VAR46);
            VAR25 = VAR28->VAR42[VAR45].VAR47;
            if (VAR3)
            {
                FUN11(VAR25, VAR18, VAR21, VAR28->VAR42[VAR43].VAR12);
                FUN11(VAR25, VAR18, VAR21, VAR27);
            }
            else
            {
                FUN12(VAR25, VAR18, VAR21, VAR28->VAR42[VAR43].VAR12);
                FUN12(VAR25, VAR18, VAR21, VAR27);
            }
            VAR23 = FUN9(VAR7, VAR8);
            if (VAR2 > VAR23)
                FUN4(VAR31, VAR1 & 0xfffc);
            FUN13(VAR18, VAR21);
            FUN7(VAR28, VAR43, (VAR1 & 0xfffc) | VAR9, FUN8(VAR7, VAR8), VAR23, VAR8);
            VAR44 = VAR2;
        }
    }
    else
    {
        VAR19 = (VAR8 >> VAR48) & 0x1f;
        VAR10 = (VAR8 >> VAR36) & 3;
        VAR11 = VAR1 & 3;
        switch (VAR19)
        {
        case 1:
        case 9:
        case 5:
            if (VAR10 < VAR9 || VAR10 < VAR11)
                FUN4(VAR31, VAR1 & 0xfffc);
            FUN14(VAR1, VAR7, VAR8, VAR49, VAR27);
            VAR50 = VAR51;
            return;
        case 4:
        case 12:
            break;
        default:
            FUN4(VAR31, VAR1 & 0xfffc);
            break;
        }
        VAR3 = VAR19 >> 3;
        if (VAR10 < VAR9 || VAR10 < VAR11)
            FUN4(VAR31, VAR1 & 0xfffc);
        if (!(VAR8 & VAR38))
            FUN4(VAR39, VAR1 & 0xfffc);
        VAR12 = VAR7 >> 16;
        VAR13 = (VAR8 & 0xffff0000) | (VAR7 & 0x0000ffff);
        VAR14 = VAR8 & 0x1f;
        if ((VAR12 & 0xfffc) == 0)
            FUN4(VAR31, 0);
        if (FUN5(&VAR7, &VAR8, VAR12) != 0)
            FUN4(VAR31, VAR12 & 0xfffc);
        if (!(VAR8 & VAR34) || !(VAR8 & (VAR35)))
            FUN4(VAR31, VAR12 & 0xfffc);
        VAR10 = (VAR8 >> VAR36) & 3;
        if (VAR10 > VAR9)
            FUN4(VAR31, VAR12 & 0xfffc);
        if (!(VAR8 & VAR38))
            FUN4(VAR39, VAR12 & 0xfffc);
        if (!(VAR8 & VAR37) && VAR10 < VAR9)
        {
            FUN15(&VAR15, &VAR18, VAR10);
            FUN2("" VAR52 "", VAR15, VAR18, VAR14, VAR41);
            if ((VAR15 & 0xfffc) == 0)
                FUN4(VAR53, VAR15 & 0xfffc);
            if ((VAR15 & 3) != VAR10)
                FUN4(VAR53, VAR15 & 0xfffc);
            if (FUN5(&VAR16, &VAR17, VAR15) != 0)
                FUN4(VAR53, VAR15 & 0xfffc);
            VAR20 = (VAR17 >> VAR36) & 3;
            if (VAR20 != VAR10)
                FUN4(VAR53, VAR15 & 0xfffc);
            if (!(VAR17 & VAR34) || (VAR17 & VAR35) || !(VAR17 & VAR54))
                FUN4(VAR53, VAR15 & 0xfffc);
            if (!(VAR17 & VAR38))
                FUN4(VAR53, VAR15 & 0xfffc);
            VAR24 = FUN10(VAR28->VAR42[VAR45].VAR46);
            VAR26 = VAR28->VAR42[VAR45].VAR47;
            VAR21 = FUN10(VAR17);
            VAR25 = FUN8(VAR16, VAR17);
            if (VAR3)
            {
                FUN11(VAR25, VAR18, VAR21, VAR28->VAR42[VAR45].VAR12);
                FUN11(VAR25, VAR18, VAR21, VAR41);
                for (VAR6 = VAR14 - 1; VAR6 >= 0; VAR6--)
                {
                    VAR22 = FUN16(VAR26 + ((VAR41 + VAR6 * 4) & VAR24));
                    FUN11(VAR25, VAR18, VAR21, VAR22);
                }
            }
            else
            {
                FUN12(VAR25, VAR18, VAR21, VAR28->VAR42[VAR45].VAR12);
                FUN12(VAR25, VAR18, VAR21, VAR41);
                for (VAR6 = VAR14 - 1; VAR6 >= 0; VAR6--)
                {
                    VAR22 = FUN17(VAR26 + ((VAR41 + VAR6 * 2) & VAR24));
                    FUN12(VAR25, VAR18, VAR21, VAR22);
                }
            }
            VAR5 = 1;
        }
        else
        {
            VAR18 = VAR41;
            VAR21 = FUN10(VAR28->VAR42[VAR45].VAR46);
            VAR25 = VAR28->VAR42[VAR45].VAR47;
            VAR5 = 0;
        }
        if (VAR3)
        {
            FUN11(VAR25, VAR18, VAR21, VAR28->VAR42[VAR43].VAR12);
            FUN11(VAR25, VAR18, VAR21, VAR27);
        }
        else
        {
            FUN12(VAR25, VAR18, VAR21, VAR28->VAR42[VAR43].VAR12);
            FUN12(VAR25, VAR18, VAR21, VAR27);
        }
        if (VAR5)
        {
            VAR15 = (VAR15 & ~3) | VAR10;
            FUN7(VAR28, VAR45, VAR15, VAR25, FUN9(VAR16, VAR17), VAR17);
        }
        VAR12 = (VAR12 & ~3) | VAR10;
        FUN7(VAR28, VAR43, VAR12, FUN8(VAR7, VAR8), FUN9(VAR7, VAR8), VAR8);
        FUN18(VAR28, VAR10);
        FUN13(VAR18, VAR21);
        VAR44 = VAR13;
    }
}