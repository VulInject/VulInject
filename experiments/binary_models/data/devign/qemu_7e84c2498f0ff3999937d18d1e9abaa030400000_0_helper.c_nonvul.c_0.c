void FUN1(int VAR1, int VAR2)
{
    int VAR3, VAR4;
    uint32_t VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    uint32_t VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    uint32_t VAR20, VAR21, VAR22, VAR23, VAR24;
    VAR25 *VAR26, *VAR27;
    VAR3 = VAR28;
    VAR4 = VAR29;
    if ((VAR3 & 0xfffc) == 0)
        FUN2(VAR30, 0);
    if (FUN3(&VAR5, &VAR6, VAR3) != 0)
        FUN2(VAR30, VAR3 & 0xfffc);
    VAR7 = VAR31->VAR32 & VAR33;
    if (VAR6 & VAR34)
    {
        if (!(VAR6 & VAR35))
            FUN2(VAR30, VAR3 & 0xfffc);
        VAR8 = (VAR6 >> VAR36) & 3;
        if (VAR6 & VAR37)
        {
            if (VAR8 > VAR7)
                FUN2(VAR30, VAR3 & 0xfffc);
        }
        else
        {
            VAR9 = VAR3 & 3;
            if (VAR9 > VAR7)
                FUN2(VAR30, VAR3 & 0xfffc);
            if (VAR8 != VAR7)
                FUN2(VAR30, VAR3 & 0xfffc);
        }
        if (!(VAR6 & VAR38))
            FUN2(VAR39, VAR3 & 0xfffc);
        VAR17 = VAR40;
        if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
            VAR17 &= 0xffff;
        VAR26 = VAR31->VAR41[VAR42].VAR45 + VAR17;
        if (VAR1)
        {
            VAR26 -= 4;
            FUN4(VAR26, VAR31->VAR41[VAR46].VAR10);
            VAR26 -= 4;
            FUN4(VAR26, VAR2);
        }
        else
        {
            VAR26 -= 2;
            FUN5(VAR26, VAR31->VAR41[VAR46].VAR10);
            VAR26 -= 2;
            FUN5(VAR26, VAR2);
        }
        VAR17 -= (4 << VAR1);
        VAR24 = FUN6(VAR5, VAR6);
        if (VAR4 > VAR24)
            FUN2(VAR30, VAR3 & 0xfffc);
        if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
            VAR40 = (VAR40 & 0xffff0000) | (VAR17 & 0xffff);
        else
            VAR40 = VAR17;
        FUN7(VAR31, VAR46, (VAR3 & 0xfffc) | VAR7, FUN8(VAR5, VAR6), VAR24, VAR6);
        VAR47 = VAR4;
    }
    else
    {
        VAR18 = (VAR6 >> VAR48) & 0x1f;
        VAR8 = (VAR6 >> VAR36) & 3;
        VAR9 = VAR3 & 3;
        switch (VAR18)
        {
        case 1:
        case 9:
        case 5:
            if (VAR8 < VAR7 || VAR8 < VAR9)
                FUN2(VAR30, VAR3 & 0xfffc);
            FUN9(VAR3, VAR5, VAR6, VAR49);
            break;
        case 4:
        case 12:
            break;
        default:
            FUN2(VAR30, VAR3 & 0xfffc);
            break;
        }
        VAR1 = VAR18 >> 3;
        if (VAR8 < VAR7 || VAR8 < VAR9)
            FUN2(VAR30, VAR3 & 0xfffc);
        if (!(VAR6 & VAR38))
            FUN2(VAR39, VAR3 & 0xfffc);
        VAR10 = VAR5 >> 16;
        VAR11 = (VAR6 & 0xffff0000) | (VAR5 & 0x0000ffff);
        if ((VAR10 & 0xfffc) == 0)
            FUN2(VAR30, 0);
        if (FUN3(&VAR5, &VAR6, VAR10) != 0)
            FUN2(VAR30, VAR10 & 0xfffc);
        if (!(VAR6 & VAR34) || !(VAR6 & (VAR35)))
            FUN2(VAR30, VAR10 & 0xfffc);
        VAR8 = (VAR6 >> VAR36) & 3;
        if (VAR8 > VAR7)
            FUN2(VAR30, VAR10 & 0xfffc);
        if (!(VAR6 & VAR38))
            FUN2(VAR39, VAR10 & 0xfffc);
        if (!(VAR6 & VAR37) && VAR8 < VAR7)
        {
            FUN10(&VAR13, &VAR17, VAR8);
            if ((VAR13 & 0xfffc) == 0)
                FUN2(VAR50, VAR13 & 0xfffc);
            if ((VAR13 & 3) != VAR8)
                FUN2(VAR50, VAR13 & 0xfffc);
            if (FUN3(&VAR14, &VAR15, VAR13) != 0)
                FUN2(VAR50, VAR13 & 0xfffc);
            VAR19 = (VAR15 >> VAR36) & 3;
            if (VAR19 != VAR8)
                FUN2(VAR50, VAR13 & 0xfffc);
            if (!(VAR15 & VAR34) || (VAR15 & VAR35) || !(VAR15 & VAR51))
                FUN2(VAR50, VAR13 & 0xfffc);
            if (!(VAR15 & VAR38))
                FUN2(VAR50, VAR13 & 0xfffc);
            VAR12 = VAR6 & 0x1f;
            VAR16 = ((VAR12 * 2) + 8) << VAR1;
            VAR21 = VAR40;
            VAR20 = VAR31->VAR41[VAR42].VAR10;
            if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
                VAR21 &= 0xffff;
            VAR27 = VAR31->VAR41[VAR42].VAR45 + VAR21;
            VAR13 = (VAR13 & ~3) | VAR8;
            FUN7(VAR31, VAR42, VAR13, FUN8(VAR14, VAR15), FUN6(VAR14, VAR15), VAR15);
            if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
                VAR17 &= 0xffff;
            VAR26 = VAR31->VAR41[VAR42].VAR45 + VAR17;
            if (VAR1)
            {
                VAR26 -= 4;
                FUN4(VAR26, VAR20);
                VAR26 -= 4;
                FUN4(VAR26, VAR21);
                VAR26 -= 4 * VAR12;
                for (VAR23 = 0; VAR23 < VAR12; VAR23++)
                {
                    VAR22 = FUN11(VAR27 + VAR23 * 4);
                    FUN4(VAR26 + VAR23 * 4, VAR22);
                }
            }
            else
            {
                VAR26 -= 2;
                FUN5(VAR26, VAR20);
                VAR26 -= 2;
                FUN5(VAR26, VAR21);
                VAR26 -= 2 * VAR12;
                for (VAR23 = 0; VAR23 < VAR12; VAR23++)
                {
                    VAR22 = FUN12(VAR27 + VAR23 * 2);
                    FUN5(VAR26 + VAR23 * 2, VAR22);
                }
            }
        }
        else
        {
            if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
                VAR17 &= 0xffff;
            VAR26 = VAR31->VAR41[VAR42].VAR45 + VAR17;
            VAR16 = (4 << VAR1);
        }
        if (VAR1)
        {
            VAR26 -= 4;
            FUN4(VAR26, VAR31->VAR41[VAR46].VAR10);
            VAR26 -= 4;
            FUN4(VAR26, VAR2);
        }
        else
        {
            VAR26 -= 2;
            FUN5(VAR26, VAR31->VAR41[VAR46].VAR10);
            VAR26 -= 2;
            FUN5(VAR26, VAR2);
        }
        VAR17 -= VAR16;
        VAR10 = (VAR10 & ~3) | VAR8;
        FUN7(VAR31, VAR46, VAR10, FUN8(VAR5, VAR6), FUN6(VAR5, VAR6), VAR6);
        FUN13(VAR31, VAR8);
        if (!(VAR31->VAR41[VAR42].VAR43 & VAR44))
            VAR40 = (VAR40 & 0xffff0000) | (VAR17 & 0xffff);
        else
            VAR40 = VAR17;
        VAR47 = VAR11;
    }
}