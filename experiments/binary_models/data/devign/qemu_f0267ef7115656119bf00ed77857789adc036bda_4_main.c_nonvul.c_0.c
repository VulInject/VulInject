void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    unsigned int VAR6, VAR7;
    target_siginfo_t VAR8;
    uint32_t VAR9;
    abi_ulong VAR10;
    for (;;)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case VAR11:
        {
            VAR12 *VAR13 = VAR4->VAR14;
            uint32_t VAR15;
            int VAR16;
            FUN7(VAR15, VAR2->VAR17[15], VAR2);
            VAR16 = FUN8(VAR15, &VAR13->VAR18, VAR2);
            if (VAR16 == 0)
            {
                VAR8.VAR19 = VAR20;
                VAR8.VAR21 = 0;
                VAR8.VAR22 = VAR23;
                VAR8.VAR24.VAR25.VAR26 = VAR2->VAR17[15];
                FUN9(VAR2, VAR8.VAR19, &VAR8);
            }
            else if (VAR16 < 0)
            {
                int VAR27 = 0;
                if (-VAR16 & VAR28)
                    VAR27 |= VAR29;
                if (-VAR16 & VAR30)
                    VAR27 |= VAR31;
                if (-VAR16 & VAR32)
                    VAR27 |= VAR33;
                if (-VAR16 & VAR34)
                    VAR27 |= VAR35;
                if (-VAR16 & VAR36)
                    VAR27 |= VAR37;
                FPSR VAR38 = VAR13->VAR18.VAR38;
                if (VAR38 & (VAR27 << 16))
                {
                    VAR8.VAR19 = VAR39;
                    VAR8.VAR21 = 0;
                    if (VAR27 & VAR37)
                        VAR8.VAR22 = VAR40;
                    if (VAR27 & VAR35)
                        VAR8.VAR22 = VAR41;
                    if (VAR27 & VAR33)
                        VAR8.VAR22 = VAR42;
                    if (VAR27 & VAR31)
                        VAR8.VAR22 = VAR43;
                    if (VAR27 & VAR29)
                        VAR8.VAR22 = VAR44;
                    VAR8.VAR24.VAR25.VAR26 = VAR2->VAR17[15];
                    FUN9(VAR2, VAR8.VAR19, &VAR8);
                }
                else
                {
                    VAR2->VAR17[15] += 4;
                }
                if ((!(VAR38 & VAR45)) && (VAR27 & VAR37))
                    VAR38 |= VAR37;
                if ((!(VAR38 & VAR46)) && (VAR27 & VAR35))
                    VAR38 |= VAR35;
                if ((!(VAR38 & VAR47)) && (VAR27 & VAR33))
                    VAR38 |= VAR33;
                if ((!(VAR38 & VAR48)) && (VAR27 & VAR31))
                    VAR38 |= VAR31;
                if ((!(VAR38 & VAR49)) && (VAR27 & VAR29))
                    VAR38 |= VAR29;
                VAR13->VAR18.VAR38 = VAR38;
            }
            else
            {
                VAR2->VAR17[15] += 4;
            }
        }
        break;
        case VAR50:
        case VAR51:
        {
            VAR2->VAR52 = 1;
            if (VAR5 == VAR51)
            {
                if (VAR2->VAR53)
                {
                    FUN10(VAR7, VAR2->VAR17[15], VAR2);
                    VAR6 = VAR7 & 0xff;
                    VAR2->VAR17[15] += 2;
                }
                else
                {
                    FUN7(VAR7, VAR2->VAR17[15], VAR2);
                    VAR6 = (VAR7 & 0xf) | ((VAR7 >> 4) & 0xff0);
                    VAR2->VAR17[15] += 4;
                }
            }
            else
            {
                if (VAR2->VAR53)
                {
                    FUN10(VAR7, VAR2->VAR17[15] - 2, VAR2);
                    VAR6 = VAR7 & 0xff;
                }
                else
                {
                    FUN7(VAR7, VAR2->VAR17[15] - 4, VAR2);
                    VAR6 = VAR7 & 0xffffff;
                }
            }
            if (VAR6 == VAR54)
            {
            }
            else if (VAR6 == VAR55 || VAR6 == VAR56)
            {
                VAR2->VAR17[0] = FUN11(VAR2);
            }
            else if (VAR6 == 0 || VAR6 >= VAR57 || VAR2->VAR53)
            {
                if (VAR2->VAR53 || VAR6 == 0)
                {
                    VAR6 = VAR2->VAR17[7];
                }
                else
                {
                    VAR6 -= VAR57;
                    VAR2->VAR52 = 0;
                }
                if (VAR6 > VAR58)
                {
                    switch (VAR6)
                    {
                    case VAR54:
                        break;
                    case VAR59:
                        FUN12(VAR2, VAR2->VAR17[0]);
                        VAR2->VAR17[0] = 0;
                        break;
                    case VAR60:
                        VAR2->VAR17[15] -= VAR2->VAR53 ? 2 : 4;
                        goto VAR61;
                    default:
                        FUN13("", VAR6);
                        VAR2->VAR17[0] = -VAR62;
                        break;
                    }
                }
                else
                {
                    VAR10 = FUN14(VAR2, VAR6, VAR2->VAR17[0], VAR2->VAR17[1], VAR2->VAR17[2], VAR2->VAR17[3], VAR2->VAR17[4], VAR2->VAR17[5], 0, 0);
                    if (VAR10 == -VAR63)
                    {
                        VAR2->VAR17[15] -= VAR2->VAR53 ? 2 : 4;
                    }
                    else if (VAR10 != -VAR64)
                    {
                        VAR2->VAR17[0] = VAR10;
                    }
                }
            }
            else
            {
                goto VAR65;
            }
        }
        break;
        case VAR66:
            break;
        case VAR67:
            if (!FUN15(VAR2))
            {
                break;
            }
        case VAR68:
        case VAR69:
            VAR9 = VAR2->VAR70.VAR71;
            {
                VAR8.VAR19 = VAR72;
                VAR8.VAR21 = 0;
                VAR8.VAR22 = VAR73;
                VAR8.VAR24.VAR25.VAR26 = VAR9;
                FUN9(VAR2, VAR8.VAR19, &VAR8);
            }
            break;
        case VAR74:
        VAR61:
        {
            int VAR75;
            VAR75 = FUN16(VAR4, VAR76);
            if (VAR75)
            {
                VAR8.VAR19 = VAR75;
                VAR8.VAR21 = 0;
                VAR8.VAR22 = VAR77;
                FUN9(VAR2, VAR8.VAR19, &VAR8);
            }
        }
        break;
        case VAR78:
            if (FUN17(VAR2))
                goto VAR65;
            break;
        case VAR79:
            break;
        default:
        VAR65:
            FUN18(VAR2, "", VAR5);
            FUN19();
        }
        FUN20(VAR2);
    }
}