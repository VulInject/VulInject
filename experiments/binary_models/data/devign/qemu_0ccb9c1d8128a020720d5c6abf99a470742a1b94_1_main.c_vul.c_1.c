void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    unsigned int VAR6;
    target_siginfo_t VAR7;
    VAR8 *VAR9 = VAR4->VAR10;
    for (;;)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        FUN7(VAR4);
        switch (VAR5)
        {
        case VAR11:
        {
            if (VAR9->VAR12)
            {
                uint16_t VAR13;
                FUN8(VAR13, VAR2->VAR14 + 2);
                VAR2->VAR14 += 4;
                FUN9(VAR2, VAR13);
            }
            else
            {
                goto VAR15;
            }
        }
        case VAR16:
            VAR2->VAR14 += 4;
            FUN10(VAR2, VAR2->VAR17[0]);
        case VAR18:
        case VAR19:
        case VAR20:
        VAR15:
            VAR7.VAR21 = VAR22;
            VAR7.VAR23 = VAR24;
        case VAR25:
        {
            abi_long VAR26;
            VAR9->VAR12 = 0;
            VAR6 = VAR2->VAR17[0];
            VAR2->VAR14 += 2;
            VAR26 = FUN11(VAR2, VAR6, VAR2->VAR17[1], VAR2->VAR17[2], VAR2->VAR17[3], VAR2->VAR17[4], VAR2->VAR17[5], VAR2->VAR27[0], 0, 0);
            if (VAR26 == -VAR28)
            {
                VAR2->VAR14 -= 2;
            }
            else if (VAR26 != -VAR29)
            {
                VAR2->VAR17[0] = VAR26;
            }
        }
        case VAR30:
        case VAR31:
        {
            VAR7.VAR21 = VAR32;
            VAR7.VAR23 = VAR33;
            VAR7.VAR34.VAR35.VAR36 = VAR2->VAR37.VAR38;
        }
        case VAR39:
        {
            int VAR40;
            VAR40 = FUN12(VAR4, VAR41);
            if (VAR40)
            {
                VAR7.VAR21 = VAR40;
                VAR7.VAR23 = VAR42;
            }
        }
        case VAR43:
            FUN13(VAR4);
        default:
            FUN14(VAR2, "", VAR5);
            FUN15();
        }
        FUN16(VAR2);
    }