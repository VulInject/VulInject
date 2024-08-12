void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5, VAR6, VAR7;
    target_siginfo_t VAR8;
    target_ulong VAR9;
    abi_long VAR10;
    while (1)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case VAR11:
            break;
        case VAR12:
            VAR6 = VAR2->VAR13;
            if (!VAR6)
            {
                VAR6 = VAR2->VAR14[1];
            }
            VAR2->VAR15.VAR9 += VAR2->VAR16;
            VAR10 = FUN7(VAR2, VAR6, VAR2->VAR14[2], VAR2->VAR14[3], VAR2->VAR14[4], VAR2->VAR14[5], VAR2->VAR14[6], VAR2->VAR14[7], 0, 0);
            if (VAR10 == -VAR17)
            {
                VAR2->VAR15.VAR9 -= VAR2->VAR16;
            }
            else if (VAR10 != -VAR18)
            {
                VAR2->VAR14[2] = VAR10;
            }
            break;
        case VAR19:
            VAR7 = FUN8(VAR4, VAR20);
            if (VAR7)
            {
                VAR6 = VAR21;
                goto VAR22;
            }
            break;
        case VAR23:
            VAR6 = VAR2->VAR24;
            switch (VAR6)
            {
            case VAR25:
            case VAR26:
                VAR7 = VAR27;
                VAR6 = VAR28;
                goto VAR22;
            case VAR29:
            case VAR30:
                VAR7 = VAR31;
                VAR6 = VAR32;
                VAR9 = VAR2->VAR33;
                goto VAR34;
            case VAR35:
            case VAR36:
            case VAR37:
            case VAR38:
            VAR39:
                VAR7 = VAR27;
                VAR6 = VAR40;
                goto VAR22;
            case VAR41:
                VAR7 = VAR42;
                VAR6 = VAR43;
                goto VAR22;
            case VAR44:
                VAR7 = VAR42;
                VAR6 = VAR45;
                goto VAR22;
            case VAR46:
                VAR6 = (VAR2->VAR47 >> 8) & 0xff;
                if (VAR6 == 0xff)
                {
                    goto VAR39;
                }
                else
                {
                    if (VAR6 & 0x80)
                    {
                        VAR6 = VAR48;
                    }
                    else if (VAR6 & 0x40)
                    {
                        VAR6 = VAR49;
                    }
                    else if (VAR6 & 0x20)
                    {
                        VAR6 = VAR50;
                    }
                    else if (VAR6 & 0x10)
                    {
                        VAR6 = VAR51;
                    }
                    else if (VAR6 & 0x08)
                    {
                        VAR6 = VAR52;
                    }
                    else
                    {
                        goto VAR39;
                    }
                    VAR7 = VAR42;
                    goto VAR22;
                }
            default:
                fprintf(VAR53, "", VAR6);
                FUN9(VAR4, VAR53, fprintf, 0);
                FUN10(VAR54);
            }
            break;
        VAR22:
            VAR9 = VAR2->VAR15.VAR9;
        VAR34:
            VAR8.VAR55 = VAR7;
            VAR8.VAR56 = 0;
            VAR8.VAR57 = VAR6;
            VAR8.VAR58.VAR59.VAR60 = VAR9;
            FUN11(VAR2, VAR8.VAR55, &VAR8);
            break;
        default:
            fprintf(VAR53, "", VAR5);
            FUN9(VAR4, VAR53, fprintf, 0);
            FUN10(VAR54);
        }
        FUN12(VAR2);
    }
}