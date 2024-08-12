void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    target_siginfo_t VAR5;
    int VAR6;
    abi_long VAR7;
    unsigned int VAR8;
    for (;;)
    {
        FUN4(VAR4);
        VAR6 = FUN5(VAR2);
        FUN6(VAR4);
        switch (VAR6)
        {
        case VAR9:
            VAR2->VAR10.VAR11 += 4;
            VAR8 = VAR2->VAR10.VAR12[2] - 4000;
            if (VAR8 >= sizeof(VAR13))
            {
                VAR7 = -VAR14;
            }
            else
            {
                int VAR15;
                abi_ulong VAR16;
                abi_ulong VAR17 = 0, VAR18 = 0, VAR19 = 0, VAR20 = 0;
                VAR15 = VAR13[VAR8];
                VAR16 = VAR2->VAR10.VAR12[29];
                switch (VAR15)
                {
                case 8:
                    if ((VAR7 = FUN7(VAR20, VAR16 + 28)) != 0)
                    {
                        goto VAR21;
                    }
                case 7:
                    if ((VAR7 = FUN7(VAR19, VAR16 + 24)) != 0)
                    {
                        goto VAR21;
                    }
                case 6:
                    if ((VAR7 = FUN7(VAR18, VAR16 + 20)) != 0)
                    {
                        goto VAR21;
                    }
                case 5:
                    if ((VAR7 = FUN7(VAR17, VAR16 + 16)) != 0)
                    {
                        goto VAR21;
                    }
                default:
                    break;
                }
                VAR7 = FUN8(VAR2, VAR2->VAR10.VAR12[2], VAR2->VAR10.VAR12[4], VAR2->VAR10.VAR12[5], VAR2->VAR10.VAR12[6], VAR2->VAR10.VAR12[7], VAR17, VAR18, VAR19, VAR20);
            }
        VAR21:
            VAR7 = FUN8(VAR2, VAR2->VAR10.VAR12[2], VAR2->VAR10.VAR12[4], VAR2->VAR10.VAR12[5], VAR2->VAR10.VAR12[6], VAR2->VAR10.VAR12[7], VAR2->VAR10.VAR12[8], VAR2->VAR10.VAR12[9], VAR2->VAR10.VAR12[10], VAR2->VAR10.VAR12[11]);
            if (VAR7 == -VAR22)
            {
                break;
            }
            if ((VAR23)VAR7 >= (VAR23)-1133)
            {
                VAR2->VAR10.VAR12[7] = 1;
                VAR7 = -VAR7;
            }
            else
            {
                VAR2->VAR10.VAR12[7] = 0;
            }
            VAR2->VAR10.VAR12[2] = VAR7;
            break;
        case VAR24:
        case VAR25:
        case VAR26:
        case VAR27:
            VAR5.VAR28 = VAR29;
            VAR5.VAR30 = 0;
            VAR5.VAR31 = VAR32;
            VAR5.VAR33.VAR34.VAR35 = VAR2->VAR36;
            FUN9(VAR2, VAR5.VAR28, &VAR5);
            break;
        case VAR37:
        case VAR38:
            VAR5.VAR28 = VAR39;
            VAR5.VAR30 = 0;
            VAR5.VAR31 = 0;
            FUN9(VAR2, VAR5.VAR28, &VAR5);
            break;
        case VAR40:
            break;
        case VAR41:
        {
            int VAR42;
            VAR42 = FUN10(VAR4, VAR43);
            if (VAR42)
            {
                VAR5.VAR28 = VAR42;
                VAR5.VAR30 = 0;
                VAR5.VAR31 = VAR44;
                FUN9(VAR2, VAR5.VAR28, &VAR5);
            }
        }
        break;
        case VAR45:
            if (FUN11(VAR2))
            {
                VAR5.VAR28 = VAR29;
                VAR5.VAR30 = 0;
                VAR5.VAR31 = VAR32;
                VAR5.VAR33.VAR34.VAR35 = VAR2->VAR10.VAR11;
                FUN9(VAR2, VAR5.VAR28, &VAR5);
            }
            break;
        case VAR46:
            VAR5.VAR28 = VAR39;
            VAR5.VAR30 = 0;
            VAR5.VAR31 = VAR47;
            FUN9(VAR2, VAR5.VAR28, &VAR5);
            break;
        case VAR48:
        {
            abi_ulong VAR49;
            unsigned int VAR50;
            if (VAR2->VAR51 & VAR52)
            {
                if (VAR2->VAR53 & VAR54)
                {
                    VAR7 = FUN12(VAR49, VAR2->VAR10.VAR11);
                    if (VAR7 != 0)
                    {
                        goto VAR55;
                    }
                    if ((VAR49 >> 10) == 0x11)
                    {
                        VAR50 = VAR49 & 0xf;
                    }
                    else
                    {
                        abi_ulong VAR56;
                        VAR7 = FUN12(VAR56, VAR2->VAR10.VAR11 + 2);
                        if (VAR7 != 0)
                        {
                            goto VAR55;
                        }
                        VAR49 = (VAR49 << 16) | VAR56;
                        VAR50 = ((VAR49 >> 6) & ((1 << 20) - 1));
                        if (VAR50 >= (1 << 10))
                        {
                            VAR50 >>= 10;
                        }
                    }
                }
                else
                {
                    VAR7 = FUN12(VAR49, VAR2->VAR10.VAR11);
                    if (VAR7 != 0)
                    {
                        goto VAR55;
                    }
                    VAR50 = (VAR49 >> 6) & 0x3f;
                }
            }
            else
            {
                VAR7 = FUN7(VAR49, VAR2->VAR10.VAR11);
                if (VAR7 != 0)
                {
                    goto VAR55;
                }
                VAR50 = ((VAR49 >> 6) & ((1 << 20) - 1));
                if (VAR50 >= (1 << 10))
                {
                    VAR50 >>= 10;
                }
            }
            if (FUN13(VAR2, &VAR5, VAR50) != 0)
            {
                goto VAR55;
            }
        }
        break;
        case VAR57:
        {
            abi_ulong VAR49;
            unsigned int VAR50 = 0;
            if (VAR2->VAR51 & VAR52)
            {
                abi_ulong VAR58[2];
                VAR7 = FUN12(VAR58[0], VAR2->VAR10.VAR11) || FUN12(VAR58[1], VAR2->VAR10.VAR11 + 2);
                VAR49 = (VAR58[0] << 16) | VAR58[1];
            }
            else
            {
                VAR7 = FUN7(VAR49, VAR2->VAR10.VAR11);
            }
            if (VAR7 != 0)
            {
                goto VAR55;
            }
            if (!(VAR49 & 0xFC000000))
            {
                if (VAR2->VAR51 & VAR52)
                {
                    VAR50 = ((VAR49 >> 12) & ((1 << 4) - 1));
                }
                else
                {
                    VAR50 = ((VAR49 >> 6) & ((1 << 10) - 1));
                }
            }
            if (FUN13(VAR2, &VAR5, VAR50) != 0)
            {
                goto VAR55;
            }
        }
        break;
        default:
        VAR55:
            fprintf(VAR59, "", VAR6);
            FUN14(VAR4, VAR59, fprintf, 0);
            FUN15();
        }
        FUN16(VAR2);
    }
}