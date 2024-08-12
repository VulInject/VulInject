VAR1 *FUN1(VAR2 *VAR3, unsigned int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = (VAR9 *)(((VAR11 *)VAR3) - FUN2(VAR9, VAR12));
    VAR1 *VAR13 = NULL;
    int VAR14;
    int VAR15 = VAR5 >> 16;
    FUN3(VAR3->VAR16 == NULL);
    if (VAR3->VAR7 == 0 && VAR7 > 0)
        VAR3->VAR7 = VAR7;
    if (VAR3->VAR8 == 0 && VAR8 > 0)
        VAR3->VAR8 = VAR8;
    FUN3(VAR7 == -1 || VAR7 >= VAR3->VAR7);
    FUN3(VAR8 == -1 || VAR8 >= VAR3->VAR8);
    FUN3(VAR3->VAR7 > 0);
    FUN3(VAR3->VAR8 > 0);
    FUN4(VAR10->VAR17, VAR18, "", VAR7, VAR8, VAR3->VAR7, VAR3->VAR8);
    if (VAR7 == -1)
        VAR7 = VAR3->VAR7;
    if (VAR8 == -1)
        VAR8 = VAR3->VAR8;
    VAR14 = (VAR6 & VAR19) ? ((VAR7 + 15) & (~15)) : VAR7;
    switch (VAR5 & 0xff)
    {
    case VAR20:
        if (!VAR3->VAR21.VAR22[0])
            VAR3->VAR21.VAR22[0] = FUN5(VAR14, VAR8);
        VAR13 = VAR3->VAR21.VAR22[0];
        break;
    case VAR23:
        if (!VAR3->VAR21.VAR24[0])
            VAR3->VAR21.VAR24[0] = FUN5(VAR14, VAR8);
        VAR13 = VAR3->VAR21.VAR24[0];
        break;
    case VAR25:
        if (!VAR3->VAR21.VAR26[0])
            VAR3->VAR21.VAR26[0] = FUN5(VAR14, VAR8);
        VAR13 = VAR3->VAR21.VAR26[0];
        break;
    case VAR27:
        if (!(VAR6 & VAR28))
        {
            if (!VAR3->VAR21.VAR26[0])
                VAR3->VAR21.VAR26[0] = FUN5(VAR14, VAR8);
            VAR13 = VAR3->VAR21.VAR26[0];
            break;
        }
    case VAR29:
        if (!VAR3->VAR21.VAR24[VAR3->VAR21.VAR30])
            VAR3->VAR21.VAR24[VAR3->VAR21.VAR30] = FUN5(VAR14, VAR8);
        VAR13 = VAR3->VAR21.VAR24[VAR3->VAR21.VAR30];
        VAR3->VAR21.VAR30 ^= 1;
        break;
    case VAR31:
        if (VAR15 == -1)
        {
            int VAR32;
            for (VAR32 = 0; VAR32 < VAR33; VAR32++)
                if (!VAR3->VAR21.VAR34[VAR32] || !VAR3->VAR21.VAR34[VAR32]->VAR35)
                    break;
            VAR15 = VAR32;
        }
        if (VAR15 < 0 || VAR15 >= VAR33)
            return NULL;
        if (!VAR3->VAR21.VAR34[VAR15])
            VAR3->VAR21.VAR34[VAR15] = FUN5(VAR14, VAR8);
        VAR13 = VAR3->VAR21.VAR34[VAR15];
        VAR13->VAR15 = VAR15;
        break;
    }
    if (VAR13)
    {
        VAR13->VAR36 = VAR5;
        VAR13->VAR7 = VAR3->VAR7;
        VAR13->VAR8 = VAR3->VAR8;
        VAR13->VAR37 &= VAR38 | VAR39 | VAR40;
        VAR13->VAR37 |= VAR6 & (VAR41 | VAR42 | VAR43);
        if (!VAR3->VAR44)
            VAR13->VAR37 &= ~VAR42;
        if (VAR13->VAR45 != VAR14 || VAR13->VAR46 != VAR8)
        {
            if (VAR13->VAR37 & VAR38)
            {
                if (VAR13->VAR45 < VAR14 || VAR13->VAR46 < VAR8)
                {
                    FUN6(VAR13->VAR47[0]);
                    VAR13->VAR37 &= ~VAR38;
                    FUN7(VAR48, VAR49, "");
                }
            }
            {
                VAR13->VAR45 = VAR14;
                VAR13->VAR50 = (VAR14 + (1 << VAR13->VAR51) - 1) >> VAR13->VAR51;
                VAR13->VAR46 = VAR8;
                VAR13->VAR52 = (VAR8 + (1 << VAR13->VAR53) - 1) >> VAR13->VAR53;
            }
        }
        if (!VAR13->VAR54)
            FUN8(VAR13, VAR4);
        if (!(VAR13->VAR37 & VAR38) && VAR13->VAR36 > VAR20)
        {
            FUN3(!VAR3->VAR55);
            if (VAR3->VAR55)
                VAR3->FUN9(VAR3, VAR13);
            if (!(VAR13->VAR37 & VAR56))
            {
                if (!VAR13->VAR54)
                {
                    FUN7(VAR57, VAR58, "");
                    return NULL;
                }
                if (VAR6 & VAR59)
                {
                    int VAR60 = (VAR13->VAR37 & VAR61 && VAR13->VAR37 & VAR62) ? (8 << VAR13->VAR51) - 1 : 15;
                    VAR14 = ((VAR7 + VAR60) & (~VAR60));
                    if (VAR13->VAR45 != VAR14)
                    {
                        int VAR37 = VAR3->FUN10(VAR3, VAR4);
                        if (!(VAR37 & 3))
                            FUN7(VAR57, VAR63, "");
                        if (VAR37 & VAR64)
                        {
                            VAR13->VAR45 = VAR14;
                            VAR13->VAR50 = (VAR14 + (1 << VAR13->VAR51) - 1) >> VAR13->VAR51;
                        }
                    }
                    FUN11(VAR13);
                    FUN12(VAR13, 0, 0, VAR13->VAR45, VAR13->VAR46);
                }
            }
            FUN3(!VAR3->VAR65);
            if (VAR13->VAR37 & VAR42)
                if (VAR3->VAR65)
                    VAR3->FUN13(VAR3, VAR13);
            if (!(VAR13->VAR37 & VAR39))
            {
                FUN7(VAR57, VAR49, "", "", (VAR13->VAR36 == VAR20) ? "" : ((VAR13->VAR37 & VAR56) ? "" : ""), (VAR13->VAR37 & VAR42) ? "" : "", VAR13->VAR45, VAR13->VAR46, VAR13->VAR54, (VAR13->VAR37 & VAR62) ? "" : ((VAR13->VAR37 & VAR66) ? "" : ""), (VAR13->VAR37 & VAR61) ? "" : "", VAR13->VAR54 * VAR13->VAR45 * VAR13->VAR46 / 8);
                FUN7(VAR57, VAR67, "", VAR13->VAR68, VAR13->VAR47[0], VAR13->VAR47[1], VAR13->VAR47[2], VAR13->VAR69[0], VAR13->VAR69[1], VAR13->VAR69[2], VAR13->VAR50, VAR13->VAR52, VAR13->VAR51, VAR13->VAR53);
                VAR13->VAR37 |= VAR39;
            }
            VAR13->VAR70 = NULL;
        }
        VAR13->VAR35++;
        return VAR13;
    }