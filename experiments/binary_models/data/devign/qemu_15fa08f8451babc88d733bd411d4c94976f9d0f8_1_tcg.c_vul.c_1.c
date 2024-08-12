static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    int VAR4, VAR5;
    FUN2(VAR2);
    for (VAR4 = VAR2->VAR6[0].VAR7; VAR4 != 0; VAR4 = VAR5)
    {
        int VAR8, VAR9, VAR10;
        TCGOpcode VAR11, VAR12;
        bool VAR13;
        TCGLifeData VAR14 = 0;
        VAR15 *VAR16;
        VAR17 *const VAR18 = &VAR2->VAR6[VAR4];
        TCGOpcode VAR19 = VAR18->VAR19;
        const VAR20 *VAR21 = &VAR22[VAR19];
        VAR5 = VAR18->VAR7;
        switch (VAR19)
        {
        case VAR23:
        {
            int VAR24;
            VAR10 = VAR18->VAR25;
            VAR9 = VAR18->VAR26;
            VAR24 = VAR18->VAR27[VAR10 + VAR9 + 1];
            if (VAR24 & VAR28)
            {
                for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16->VAR29 != VAR30)
                    {
                        goto VAR31;
                    }
                }
                goto VAR32;
            }
            else
            {
            VAR31:
                for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16->VAR29 & VAR30)
                    {
                        VAR14 |= VAR33 << VAR8;
                    }
                    if (VAR16->VAR29 & VAR34)
                    {
                        VAR14 |= VAR35 << VAR8;
                    }
                    VAR16->VAR29 = VAR30;
                }
                if (!(VAR24 & (VAR36 | VAR37)))
                {
                    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
                    {
                        VAR2->VAR38[VAR8].VAR29 = VAR30 | VAR34;
                    }
                }
                else if (!(VAR24 & VAR37))
                {
                    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
                    {
                        VAR2->VAR38[VAR8].VAR29 |= VAR34;
                    }
                }
                for (VAR8 = VAR10; VAR8 < VAR9 + VAR10; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16 && VAR16->VAR29 & VAR30)
                    {
                        VAR14 |= VAR33 << VAR8;
                    }
                }
                for (VAR8 = VAR10; VAR8 < VAR9 + VAR10; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16)
                    {
                        VAR16->VAR29 &= ~VAR30;
                    }
                }
            }
        }
        break;
        case VAR39:
            break;
        case VAR40:
            FUN3(VAR18->VAR27[0])->VAR29 = VAR30;
            break;
        case VAR41:
            VAR11 = VAR42;
            goto VAR43;
        case VAR44:
            VAR11 = VAR45;
            goto VAR43;
        case VAR46:
            VAR11 = VAR47;
            goto VAR43;
        case VAR48:
            VAR11 = VAR49;
        VAR43:
            VAR9 = 4;
            VAR10 = 2;
            if (FUN3(VAR18->VAR27[1])->VAR29 == VAR30)
            {
                if (FUN3(VAR18->VAR27[0])->VAR29 == VAR30)
                {
                    goto VAR32;
                }
                VAR18->VAR19 = VAR19 = VAR11;
                VAR18->VAR27[1] = VAR18->VAR27[2];
                VAR18->VAR27[2] = VAR18->VAR27[4];
                VAR9 = 2;
                VAR10 = 1;
            }
            goto VAR50;
        case VAR51:
            VAR11 = VAR52;
            VAR12 = VAR53;
            VAR13 = VAR54;
            goto VAR55;
        case VAR56:
            VAR11 = VAR52;
            VAR12 = VAR57;
            VAR13 = VAR58;
            goto VAR55;
        case VAR59:
            VAR11 = VAR60;
            VAR12 = VAR61;
            VAR13 = VAR62;
            goto VAR55;
        case VAR63:
            VAR11 = VAR60;
            VAR12 = VAR64;
            VAR13 = VAR65;
            goto VAR55;
        VAR55:
            VAR9 = 2;
            VAR10 = 2;
            if (FUN3(VAR18->VAR27[1])->VAR29 == VAR30)
            {
                if (FUN3(VAR18->VAR27[0])->VAR29 == VAR30)
                {
                    goto VAR32;
                }
                VAR18->VAR19 = VAR19 = VAR11;
                VAR18->VAR27[1] = VAR18->VAR27[2];
                VAR18->VAR27[2] = VAR18->VAR27[3];
            }
            else if (FUN3(VAR18->VAR27[0])->VAR29 == VAR30 && VAR13)
            {
                VAR18->VAR19 = VAR19 = VAR12;
                VAR18->VAR27[0] = VAR18->VAR27[1];
                VAR18->VAR27[1] = VAR18->VAR27[2];
                VAR18->VAR27[2] = VAR18->VAR27[3];
            }
            else
            {
                goto VAR50;
            }
            VAR10 = 1;
            goto VAR50;
        default:
            VAR9 = VAR21->VAR9;
            VAR10 = VAR21->VAR10;
            if (!(VAR21->VAR66 & VAR67) && VAR10 != 0)
            {
                for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                {
                    if (FUN3(VAR18->VAR27[VAR8])->VAR29 != VAR30)
                    {
                        goto VAR50;
                    }
                }
            VAR32:
                FUN4(VAR2, VAR18);
            }
            else
            {
            VAR50:
                for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16->VAR29 & VAR30)
                    {
                        VAR14 |= VAR33 << VAR8;
                    }
                    if (VAR16->VAR29 & VAR34)
                    {
                        VAR14 |= VAR35 << VAR8;
                    }
                    VAR16->VAR29 = VAR30;
                }
                if (VAR21->VAR66 & VAR68)
                {
                    FUN5(VAR2);
                }
                else if (VAR21->VAR66 & VAR67)
                {
                    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
                    {
                        VAR2->VAR38[VAR8].VAR29 |= VAR34;
                    }
                }
                for (VAR8 = VAR10; VAR8 < VAR10 + VAR9; VAR8++)
                {
                    VAR16 = FUN3(VAR18->VAR27[VAR8]);
                    if (VAR16->VAR29 & VAR30)
                    {
                        VAR14 |= VAR33 << VAR8;
                    }
                }
                for (VAR8 = VAR10; VAR8 < VAR10 + VAR9; VAR8++)
                {
                    FUN3(VAR18->VAR27[VAR8])->VAR29 &= ~VAR30;
                }
            }
            break;
        }
        VAR18->VAR69 = VAR14;
    }
}