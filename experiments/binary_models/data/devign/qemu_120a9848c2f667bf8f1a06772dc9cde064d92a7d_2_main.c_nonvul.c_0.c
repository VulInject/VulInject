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
        switch (VAR5)
        {
        case VAR11:
        {
            if (VAR9->VAR12)
            {
                uint16_t VAR13;
                FUN7(VAR13, VAR2->VAR14 + 2);
                VAR2->VAR14 += 4;
                FUN8(VAR2, VAR13);
            }
            else
            {
                goto VAR15;
            }
        }
        break;
        case VAR16:
            VAR2->VAR14 += 4;
            FUN9(VAR2, VAR2->VAR17[0]);
            break;
        case VAR18:
        case VAR19:
        case VAR20:
        VAR15:
            VAR7.VAR21 = VAR22;
            VAR7.VAR23 = 0;
            VAR7.VAR24 = VAR25;
            VAR7.VAR26.VAR27.VAR28 = VAR2->VAR14;
            FUN10(VAR2, VAR7.VAR21, &VAR7);
            break;
        case VAR29:
        {
            VAR9->VAR12 = 0;
            VAR6 = VAR2->VAR17[0];
            VAR2->VAR14 += 2;
            VAR2->VAR17[0] = FUN11(VAR2, VAR6, VAR2->VAR17[1], VAR2->VAR17[2], VAR2->VAR17[3], VAR2->VAR17[4], VAR2->VAR17[5], VAR2->VAR30[0], 0, 0);
        }
        break;
        case VAR31:
            break;
        case VAR32:
        {
            VAR7.VAR21 = VAR33;
            VAR7.VAR23 = 0;
            VAR7.VAR24 = VAR34;
            VAR7.VAR26.VAR27.VAR28 = VAR2->VAR35.VAR36;
            FUN10(VAR2, VAR7.VAR21, &VAR7);
        }
        break;
        case VAR37:
        {
            int VAR38;
            VAR38 = FUN12(VAR4, VAR39);
            if (VAR38)
            {
                VAR7.VAR21 = VAR38;
                VAR7.VAR23 = 0;
                VAR7.VAR24 = VAR40;
                FUN10(VAR2, VAR7.VAR21, &VAR7);
            }
        }
        break;
        default:
            FUN13(VAR2, "", VAR5);
            FUN14();
        }
        FUN15(VAR2);
    }
}