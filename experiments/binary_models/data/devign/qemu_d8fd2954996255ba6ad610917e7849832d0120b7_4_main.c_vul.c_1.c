void FUN1(VAR1 *VAR2)
{
    int VAR3;
    unsigned int VAR4, VAR5;
    target_siginfo_t VAR6;
    uint32_t VAR7;
    for (;;)
    {
        FUN2(VAR2);
        VAR3 = FUN3(VAR2);
        FUN4(VAR2);
        switch (VAR3)
        {
        case VAR8:
        {
            VAR9 *VAR10 = VAR2->VAR11;
            uint32_t VAR12;
            int VAR13;
            FUN5(VAR12, VAR2->VAR14[15]);
            VAR13 = FUN6(VAR12, &VAR10->VAR15, VAR2);
            if (VAR13 == 0)
            {
                VAR6.VAR16 = VAR17;
                VAR6.VAR18 = 0;
                VAR6.VAR19 = VAR20;
                VAR6.VAR21.VAR22.VAR23 = VAR2->VAR14[15];
                FUN7(VAR2, VAR6.VAR16, &VAR6);
            }
            else if (VAR13 < 0)
            {
                int VAR24 = 0;
                if (-VAR13 & VAR25)
                    VAR24 |= VAR26;
                if (-VAR13 & VAR27)
                    VAR24 |= VAR28;
                if (-VAR13 & VAR29)
                    VAR24 |= VAR30;
                if (-VAR13 & VAR31)
                    VAR24 |= VAR32;
                if (-VAR13 & VAR33)
                    VAR24 |= VAR34;
                FPSR VAR35 = VAR10->VAR15.VAR35;
                if (VAR35 & (VAR24 << 16))
                {
                    VAR6.VAR16 = VAR36;
                    VAR6.VAR18 = 0;
                    if (VAR24 & VAR34)
                        VAR6.VAR19 = VAR37;
                    if (VAR24 & VAR32)
                        VAR6.VAR19 = VAR38;
                    if (VAR24 & VAR30)
                        VAR6.VAR19 = VAR39;
                    if (VAR24 & VAR28)
                        VAR6.VAR19 = VAR40;
                    if (VAR24 & VAR26)
                        VAR6.VAR19 = VAR41;
                    VAR6.VAR21.VAR22.VAR23 = VAR2->VAR14[15];
                    FUN7(VAR2, VAR6.VAR16, &VAR6);
                }
                else
                {
                    VAR2->VAR14[15] += 4;
                }
                if ((!(VAR35 & VAR42)) && (VAR24 & VAR34))
                    VAR35 |= VAR34;
                if ((!(VAR35 & VAR43)) && (VAR24 & VAR32))
                    VAR35 |= VAR32;
                if ((!(VAR35 & VAR44)) && (VAR24 & VAR30))
                    VAR35 |= VAR30;
                if ((!(VAR35 & VAR45)) && (VAR24 & VAR28))
                    VAR35 |= VAR28;
                if ((!(VAR35 & VAR46)) && (VAR24 & VAR26))
                    VAR35 |= VAR26;
                VAR10->VAR15.VAR35 = VAR35;
            }
            else
            {
                VAR2->VAR14[15] += 4;
            }
        }
        break;
        case VAR47:
        case VAR48:
        {
            VAR2->VAR49 = 1;
            if (VAR3 == VAR48)
            {
                if (VAR2->VAR50)
                {
                    FUN8(VAR5, VAR2->VAR14[15]);
                    VAR4 = VAR5 & 0xff;
                    VAR2->VAR14[15] += 2;
                }
                else
                {
                    FUN5(VAR5, VAR2->VAR14[15]);
                    VAR4 = (VAR5 & 0xf) | ((VAR5 >> 4) & 0xff0);
                    VAR2->VAR14[15] += 4;
                }
            }
            else
            {
                if (VAR2->VAR50)
                {
                    FUN8(VAR5, VAR2->VAR14[15] - 2);
                    VAR4 = VAR5 & 0xff;
                }
                else
                {
                    FUN5(VAR5, VAR2->VAR14[15] - 4);
                    VAR4 = VAR5 & 0xffffff;
                }
            }
            if (VAR4 == VAR51)
            {
            }
            else if (VAR4 == VAR52 || VAR4 == VAR53)
            {
                VAR2->VAR14[0] = FUN9(VAR2);
            }
            else if (VAR4 == 0 || VAR4 >= VAR54 || (VAR2->VAR50 && VAR4 == VAR55))
            {
                if (VAR2->VAR50 || VAR4 == 0)
                {
                    VAR4 = VAR2->VAR14[7];
                }
                else
                {
                    VAR4 -= VAR54;
                    VAR2->VAR49 = 0;
                }
                if (VAR4 > VAR56)
                {
                    switch (VAR4)
                    {
                    case VAR51:
                        break;
                    case VAR57:
                        FUN10(VAR2, VAR2->VAR14[0]);
                        VAR2->VAR14[0] = 0;
                        break;
                    default:
                        FUN11("", VAR4);
                        VAR2->VAR14[0] = -VAR58;
                        break;
                    }
                }
                else
                {
                    VAR2->VAR14[0] = FUN12(VAR2, VAR4, VAR2->VAR14[0], VAR2->VAR14[1], VAR2->VAR14[2], VAR2->VAR14[3], VAR2->VAR14[4], VAR2->VAR14[5], 0, 0);
                }
            }
            else
            {
                goto VAR59;
            }
        }
        break;
        case VAR60:
            break;
        case VAR61:
            VAR7 = VAR2->VAR62.VAR63;
            goto VAR64;
        case VAR65:
            VAR7 = VAR2->VAR62.VAR66;
        VAR64:
        {
            VAR6.VAR16 = VAR67;
            VAR6.VAR18 = 0;
            VAR6.VAR19 = VAR68;
            VAR6.VAR21.VAR22.VAR23 = VAR7;
            FUN7(VAR2, VAR6.VAR16, &VAR6);
        }
        break;
        case VAR69:
        {
            int VAR70;
            VAR70 = FUN13(VAR2, VAR71);
            if (VAR70)
            {
                VAR6.VAR16 = VAR70;
                VAR6.VAR18 = 0;
                VAR6.VAR19 = VAR72;
                FUN7(VAR2, VAR6.VAR16, &VAR6);
            }
        }
        break;
        case VAR73:
            if (FUN14(VAR2))
                goto VAR59;
            break;
        case VAR74:
            if (FUN15(VAR2))
            {
                VAR7 = VAR2->VAR62.VAR66;
                goto VAR64;
            }
            break;
        default:
        VAR59:
            fprintf(VAR75, "", VAR3);
            FUN16(VAR2, VAR75, fprintf, 0);
            FUN17();
        }
        FUN18(VAR2);
    }
}