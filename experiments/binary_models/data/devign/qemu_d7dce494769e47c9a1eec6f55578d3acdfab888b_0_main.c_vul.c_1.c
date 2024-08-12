void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    target_siginfo_t VAR5;
    while (1)
    {
        VAR3 = FUN2(VAR2);
        switch (VAR3)
        {
        case 0xaa:
        {
            VAR5.VAR6 = VAR7;
            VAR5.VAR8 = 0;
            VAR5.VAR9 = VAR10;
            VAR5.VAR11.VAR12.VAR13 = 0;
            FUN3(VAR2, VAR5.VAR6, &VAR5);
        }
        break;
        case VAR14:
            break;
        case VAR15:
            VAR2->VAR16[14] += 4;
            VAR4 = FUN4(VAR2, VAR2->VAR16[12], VAR2->VAR16[5], VAR2->VAR16[6], VAR2->VAR16[7], VAR2->VAR16[8], VAR2->VAR16[9], VAR2->VAR16[10], 0, 0);
            VAR2->VAR16[3] = VAR4;
            VAR2->VAR17[VAR18] = VAR2->VAR16[14];
            break;
        case VAR19:
            VAR2->VAR16[17] = VAR2->VAR17[VAR18] + 4;
            if (VAR2->VAR20 & VAR21)
            {
                VAR2->VAR17[VAR22] |= 1 << 12;
                VAR2->VAR17[VAR18] -= 4;
            }
            VAR2->VAR20 &= ~(VAR23 | VAR21);
            switch (VAR2->VAR17[VAR22] & 31)
            {
            case VAR24:
                VAR5.VAR6 = VAR25;
                VAR5.VAR8 = 0;
                VAR5.VAR9 = VAR26;
                VAR5.VAR11.VAR12.VAR13 = 0;
                FUN3(VAR2, VAR5.VAR6, &VAR5);
                break;
            case VAR27:
                VAR5.VAR6 = VAR25;
                VAR5.VAR8 = 0;
                if (VAR2->VAR17[VAR28] & VAR29)
                {
                    VAR5.VAR9 = VAR30;
                }
                if (VAR2->VAR17[VAR28] & VAR31)
                {
                    VAR5.VAR9 = VAR26;
                }
                VAR5.VAR11.VAR12.VAR13 = 0;
                FUN3(VAR2, VAR5.VAR6, &VAR5);
                break;
            default:
                FUN5("", VAR2->VAR17[VAR22] & VAR32);
                FUN6(VAR2, VAR33, fprintf, 0);
                FUN7(1);
                break;
            }
            break;
        case VAR34:
        {
            int VAR35;
            VAR35 = FUN8(VAR2, VAR36);
            if (VAR35)
            {
                VAR5.VAR6 = VAR35;
                VAR5.VAR8 = 0;
                VAR5.VAR9 = VAR37;
                FUN3(VAR2, VAR5.VAR6, &VAR5);
            }
        }
        break;
        default:
            FUN5("", VAR3);
            FUN6(VAR2, VAR33, fprintf, 0);
            FUN7(1);
        }
        FUN9(VAR2);
    }
}