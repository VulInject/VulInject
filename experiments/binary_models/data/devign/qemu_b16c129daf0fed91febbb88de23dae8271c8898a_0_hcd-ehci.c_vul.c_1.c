static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    uint32_t VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR2->VAR22 = VAR23;
    VAR13 = (VAR4->VAR24[1] & VAR25);
    VAR14 = FUN2(VAR4->VAR24[0], VAR26);
    VAR15 = FUN2(VAR4->VAR24[0], VAR27);
    VAR20 = FUN2(VAR4->VAR24[1], VAR28);
    VAR21 = FUN2(VAR4->VAR24[2], VAR29);
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        if (VAR4->VAR30[VAR10] & VAR31)
        {
            VAR16 = FUN2(VAR4->VAR30[VAR10], VAR32);
            VAR17 = VAR4->VAR30[VAR10] & VAR33;
            VAR11 = FUN2(VAR4->VAR30[VAR10], VAR34);
            if (VAR11 > VAR20 * VAR21)
            {
                VAR11 = VAR20 * VAR21;
            }
            if (VAR11 > VAR35 || VAR16 > 6)
            {
                return -1;
            }
            VAR18 = (VAR4->VAR24[VAR16] & VAR36);
            FUN3(&VAR2->VAR37, VAR2->VAR38, 2, VAR2->VAR39);
            if (VAR17 + VAR11 > 4096)
            {
                if (VAR16 == 6)
                {
                    return -1;
                }
                VAR19 = (VAR4->VAR24[VAR16 + 1] & VAR36);
                uint32_t VAR40 = VAR17 + VAR11 - 4096;
                uint32_t VAR41 = VAR11 - VAR40;
                FUN4(&VAR2->VAR37, VAR18 + VAR17, VAR41);
                FUN4(&VAR2->VAR37, VAR19, VAR40);
            }
            else
            {
                FUN4(&VAR2->VAR37, VAR18 + VAR17, VAR11);
            }
            VAR12 = VAR13 ? VAR42 : VAR43;
            VAR7 = FUN5(VAR2, VAR14);
            VAR9 = FUN6(VAR7, VAR12, VAR15);
            if (VAR9 && VAR9->VAR44 == VAR45)
            {
                FUN7(&VAR2->VAR46, VAR12, VAR9, 0, VAR5, false, (VAR4->VAR30[VAR10] & VAR47) != 0);
                FUN8(&VAR2->VAR46, &VAR2->VAR37);
                FUN9(VAR7, &VAR2->VAR46);
                FUN10(&VAR2->VAR46, &VAR2->VAR37);
            }
            else
            {
                FUN11("");
                VAR2->VAR46.VAR48 = VAR49;
                VAR2->VAR46.VAR50 = 0;
            }
            switch (VAR2->VAR46.VAR48)
            {
            case VAR51:
                break;
            default:
                fprintf(VAR52, "", VAR2->VAR46.VAR48);
            case VAR53:
            case VAR54:
                if (VAR13)
                {
                    VAR4->VAR30[VAR10] |= VAR55;
                    FUN12(VAR2, VAR56);
                }
                break;
            case VAR57:
                VAR4->VAR30[VAR10] |= VAR58;
                FUN12(VAR2, VAR56);
                break;
            case VAR49:
                VAR2->VAR46.VAR50 = 0;
                break;
            }
            if (!VAR13)
            {
                FUN13(&VAR4->VAR30[VAR10], VAR11 - VAR2->VAR46.VAR50, VAR34);
            }
            else
            {
                FUN13(&VAR4->VAR30[VAR10], VAR2->VAR46.VAR50, VAR34);
            }
            if (VAR4->VAR30[VAR10] & VAR47)
            {
                FUN12(VAR2, VAR59);
            }
            VAR4->VAR30[VAR10] &= ~VAR31;
        }
    }
    return 0;