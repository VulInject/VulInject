void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    unsigned int VAR6, VAR7;
    target_siginfo_t VAR8;
    for (;;)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case VAR9:
        {
            FUN7(VAR7, VAR2->VAR10[31] - 4);
            VAR6 = VAR7 & 0xffffff;
            if (VAR6 >= VAR11)
            {
                VAR6 -= VAR11;
                if (VAR6 == VAR12)
                {
                    FUN8(VAR2, VAR2->VAR10[0]);
                    VAR2->VAR10[0] = 0;
                }
                else
                {
                    VAR2->VAR10[0] = FUN9(VAR2, VAR6, VAR2->VAR10[0], VAR2->VAR10[1], VAR2->VAR10[2], VAR2->VAR10[3], VAR2->VAR10[4], VAR2->VAR10[5], 0, 0);
                }
            }
            else
            {
                goto VAR13;
            }
        }
        break;
        case VAR14:
        case VAR15:
            VAR8.VAR16 = VAR17;
            VAR8.VAR18 = 0;
            VAR8.VAR19 = VAR20;
            VAR8.VAR21.VAR22.VAR23 = VAR2->VAR24.VAR25;
            FUN10(VAR2, VAR8.VAR16, &VAR8);
            break;
        case VAR26:
            break;
        case VAR27:
        {
            int VAR28;
            VAR28 = FUN11(VAR4, VAR29);
            if (VAR28)
            {
                VAR8.VAR16 = VAR28;
                VAR8.VAR18 = 0;
                VAR8.VAR19 = VAR30;
                FUN10(VAR2, VAR8.VAR16, &VAR8);
            }
        }
        break;
        default:
            goto VAR13;
        }
        FUN12(VAR2);
    }
VAR13:
    FUN13(VAR2, "", VAR5);
    FUN14();
}