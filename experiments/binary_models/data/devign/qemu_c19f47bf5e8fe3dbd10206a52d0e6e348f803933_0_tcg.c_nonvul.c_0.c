static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    int VAR6, VAR7, VAR8;
    VAR8 = VAR2->VAR9;
    VAR2->VAR10 = FUN2(VAR8 * sizeof(VAR11));
    VAR2->VAR12 = FUN2(VAR8 * sizeof(VAR3));
    VAR4 = FUN2(VAR2->VAR13);
    VAR5 = FUN2(VAR2->VAR13);
    FUN3(VAR2, VAR4, VAR5);
    for (VAR6 = VAR2->VAR14; VAR6 >= 0; VAR6 = VAR7)
    {
        int VAR15, VAR16, VAR17;
        TCGOpcode VAR18, VAR19;
        bool VAR20;
        uint16_t VAR21;
        uint8_t VAR22;
        TCGArg VAR23;
        VAR24 *const VAR25 = &VAR2->VAR26[VAR6];
        VAR27 *const VAR28 = &VAR2->VAR29[VAR25->VAR28];
        TCGOpcode VAR30 = VAR25->VAR30;
        const VAR31 *VAR32 = &VAR33[VAR30];
        VAR7 = VAR25->VAR34;
        switch (VAR30)
        {
        case VAR35:
        {
            int VAR36;
            VAR17 = VAR25->VAR37;
            VAR16 = VAR25->VAR38;
            VAR36 = VAR28[VAR17 + VAR16 + 1];
            if (VAR36 & VAR39)
            {
                for (VAR15 = 0; VAR15 < VAR17; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (!VAR4[VAR23] || VAR5[VAR23])
                    {
                        goto VAR40;
                    }
                }
                goto VAR41;
            }
            else
            {
            VAR40:
                VAR21 = 0;
                VAR22 = 0;
                for (VAR15 = 0; VAR15 < VAR17; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (VAR4[VAR23])
                    {
                        VAR21 |= (1 << VAR15);
                    }
                    if (VAR5[VAR23])
                    {
                        VAR22 |= (1 << VAR15);
                    }
                    VAR4[VAR23] = 1;
                    VAR5[VAR23] = 0;
                }
                if (!(VAR36 & VAR42))
                {
                    memset(VAR5, 1, VAR2->VAR43);
                }
                if (!(VAR36 & (VAR44 | VAR42)))
                {
                    memset(VAR4, 1, VAR2->VAR43);
                }
                for (VAR15 = VAR17; VAR15 < VAR16 + VAR17; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (VAR23 != VAR45)
                    {
                        if (VAR4[VAR23])
                        {
                            VAR21 |= (1 << VAR15);
                        }
                    }
                }
                for (VAR15 = VAR17; VAR15 < VAR17 + VAR16; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    VAR4[VAR23] = 0;
                }
                VAR2->VAR10[VAR6] = VAR21;
                VAR2->VAR12[VAR6] = VAR22;
            }
        }
        break;
        case VAR46:
            break;
        case VAR47:
            VAR4[VAR28[0]] = 1;
            VAR5[VAR28[0]] = 0;
            break;
        case VAR48:
            VAR18 = VAR49;
            goto VAR50;
        case VAR51:
            VAR18 = VAR52;
            goto VAR50;
        case VAR53:
            VAR18 = VAR54;
            goto VAR50;
        case VAR55:
            VAR18 = VAR56;
        VAR50:
            VAR16 = 4;
            VAR17 = 2;
            if (VAR4[VAR28[1]] && !VAR5[VAR28[1]])
            {
                if (VAR4[VAR28[0]] && !VAR5[VAR28[0]])
                {
                    goto VAR41;
                }
                VAR25->VAR30 = VAR30 = VAR18;
                VAR28[1] = VAR28[2];
                VAR28[2] = VAR28[4];
                VAR16 = 2;
                VAR17 = 1;
            }
            goto VAR57;
        case VAR58:
            VAR18 = VAR59;
            VAR19 = VAR60;
            VAR20 = VAR61;
            goto VAR62;
        case VAR63:
            VAR18 = VAR59;
            VAR19 = VAR64;
            VAR20 = VAR65;
            goto VAR62;
        case VAR66:
            VAR18 = VAR67;
            VAR19 = VAR68;
            VAR20 = VAR69;
            goto VAR62;
        case VAR70:
            VAR18 = VAR67;
            VAR19 = VAR71;
            VAR20 = VAR72;
            goto VAR62;
        VAR62:
            VAR16 = 2;
            VAR17 = 2;
            if (VAR4[VAR28[1]] && !VAR5[VAR28[1]])
            {
                if (VAR4[VAR28[0]] && !VAR5[VAR28[0]])
                {
                    goto VAR41;
                }
                VAR25->VAR30 = VAR30 = VAR18;
                VAR28[1] = VAR28[2];
                VAR28[2] = VAR28[3];
            }
            else if (VAR20 && VAR4[VAR28[0]] && !VAR5[VAR28[0]])
            {
                VAR25->VAR30 = VAR30 = VAR19;
                VAR28[0] = VAR28[1];
                VAR28[1] = VAR28[2];
                VAR28[2] = VAR28[3];
            }
            else
            {
                goto VAR57;
            }
            VAR17 = 1;
            goto VAR57;
        default:
            VAR16 = VAR32->VAR16;
            VAR17 = VAR32->VAR17;
            if (!(VAR32->VAR73 & VAR74) && VAR17 != 0)
            {
                for (VAR15 = 0; VAR15 < VAR17; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (!VAR4[VAR23] || VAR5[VAR23])
                    {
                        goto VAR57;
                    }
                }
            VAR41:
                FUN4(VAR2, VAR25);
            }
            else
            {
            VAR57:
                VAR21 = 0;
                VAR22 = 0;
                for (VAR15 = 0; VAR15 < VAR17; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (VAR4[VAR23])
                    {
                        VAR21 |= (1 << VAR15);
                    }
                    if (VAR5[VAR23])
                    {
                        VAR22 |= (1 << VAR15);
                    }
                    VAR4[VAR23] = 1;
                    VAR5[VAR23] = 0;
                }
                if (VAR32->VAR73 & VAR75)
                {
                    FUN5(VAR2, VAR4, VAR5);
                }
                else if (VAR32->VAR73 & VAR74)
                {
                    memset(VAR5, 1, VAR2->VAR43);
                }
                for (VAR15 = VAR17; VAR15 < VAR17 + VAR16; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    if (VAR4[VAR23])
                    {
                        VAR21 |= (1 << VAR15);
                    }
                }
                for (VAR15 = VAR17; VAR15 < VAR17 + VAR16; VAR15++)
                {
                    VAR23 = VAR28[VAR15];
                    VAR4[VAR23] = 0;
                }
                VAR2->VAR10[VAR6] = VAR21;
                VAR2->VAR12[VAR6] = VAR22;
            }
            break;
        }
    }
}