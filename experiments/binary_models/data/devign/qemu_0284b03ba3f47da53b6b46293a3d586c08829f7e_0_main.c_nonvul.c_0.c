void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    abi_ulong VAR6;
    abi_ulong VAR7;
    target_siginfo_t VAR8;
    for (;;)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case 0x80:
            VAR7 = FUN7(VAR2, VAR2->VAR9[VAR10], VAR2->VAR9[VAR11], VAR2->VAR9[VAR12], VAR2->VAR9[VAR13], VAR2->VAR9[VAR14], VAR2->VAR9[VAR15], VAR2->VAR9[VAR16], 0, 0);
            if (VAR7 == -VAR17)
            {
                VAR2->VAR18 -= 2;
            }
            else if (VAR7 != -VAR19)
            {
                VAR2->VAR9[VAR10] = VAR7;
            }
            break;
        case VAR20:
            VAR7 = FUN7(VAR2, VAR2->VAR9[VAR10], VAR2->VAR9[VAR15], VAR2->VAR9[VAR14], VAR2->VAR9[VAR13], VAR2->VAR9[10], VAR2->VAR9[8], VAR2->VAR9[9], 0, 0);
            if (VAR7 == -VAR17)
            {
                VAR2->VAR18 -= 2;
            }
            else if (VAR7 != -VAR19)
            {
                VAR2->VAR9[VAR10] = VAR7;
            }
            break;
        case VAR21:
        case VAR22:
            VAR8.VAR23 = VAR24;
            VAR8.VAR25 = 0;
            VAR8.VAR26 = VAR27;
            VAR8.VAR28.VAR29.VAR30 = 0;
            FUN8(VAR2, VAR8.VAR23, &VAR8);
            break;
        case VAR31:
            if (VAR2->VAR32 & VAR33)
            {
                FUN9(VAR2);
            }
            else
            {
                VAR8.VAR23 = VAR34;
                VAR8.VAR25 = 0;
                VAR8.VAR26 = VAR27;
                VAR8.VAR28.VAR29.VAR30 = 0;
                FUN8(VAR2, VAR8.VAR23, &VAR8);
            }
            break;
        case VAR35:
            VAR8.VAR23 = VAR34;
            VAR8.VAR25 = 0;
            if (!(VAR2->VAR36 & 1))
                VAR8.VAR26 = VAR37;
            else
                VAR8.VAR26 = VAR38;
            VAR8.VAR28.VAR29.VAR30 = VAR2->VAR39[2];
            FUN8(VAR2, VAR8.VAR23, &VAR8);
            break;
        case VAR40:
            if (VAR2->VAR32 & VAR33)
            {
                FUN10(VAR2, VAR5);
            }
            else
            {
                VAR8.VAR23 = VAR41;
                VAR8.VAR25 = 0;
                VAR8.VAR26 = VAR42;
                VAR8.VAR28.VAR29.VAR30 = VAR2->VAR18;
                FUN8(VAR2, VAR8.VAR23, &VAR8);
            }
            break;
        case VAR43:
        case VAR44:
            if (VAR2->VAR32 & VAR33)
            {
                FUN10(VAR2, VAR5);
            }
            else
            {
                VAR8.VAR23 = VAR45;
                VAR8.VAR25 = 0;
                if (VAR5 == VAR43)
                {
                    VAR8.VAR26 = VAR46;
                    VAR8.VAR28.VAR29.VAR30 = VAR2->VAR18;
                }
                else
                {
                    VAR8.VAR26 = VAR27;
                    VAR8.VAR28.VAR29.VAR30 = 0;
                }
                FUN8(VAR2, VAR8.VAR23, &VAR8);
            }
            break;
        case VAR47:
        case VAR48:
            if (VAR2->VAR32 & VAR33)
            {
                FUN10(VAR2, VAR5);
            }
            else
            {
                VAR8.VAR23 = VAR34;
                VAR8.VAR25 = 0;
                VAR8.VAR26 = VAR27;
                VAR8.VAR28.VAR29.VAR30 = 0;
                FUN8(VAR2, VAR8.VAR23, &VAR8);
            }
            break;
        case VAR49:
            VAR8.VAR23 = VAR50;
            VAR8.VAR25 = 0;
            VAR8.VAR26 = VAR51;
            VAR8.VAR28.VAR29.VAR30 = VAR2->VAR18;
            FUN8(VAR2, VAR8.VAR23, &VAR8);
            break;
        case VAR52:
            break;
        case VAR53:
        {
            int VAR54;
            VAR54 = FUN11(VAR4, VAR45);
            if (VAR54)
            {
                VAR8.VAR23 = VAR54;
                VAR8.VAR25 = 0;
                VAR8.VAR26 = VAR46;
                FUN8(VAR2, VAR8.VAR23, &VAR8);
            }
        }
        break;
        default:
            VAR6 = VAR2->VAR55[VAR56].VAR57 + VAR2->VAR18;
            FUN12(VAR2, "", (long)VAR6, VAR5);
            FUN13();
        }
        FUN14(VAR2);
    }
}