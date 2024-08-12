void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5, VAR6;
    target_siginfo_t VAR7;
    while (1)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case 0xaa:
        {
            VAR7.VAR8 = VAR9;
            VAR7.VAR10 = 0;
            VAR7.VAR11 = VAR12;
            VAR7.VAR13.VAR14.VAR15 = VAR2->VAR16[VAR17];
            FUN7(VAR2, VAR7.VAR8, &VAR7);
        }
        break;
        case VAR18:
            break;
        case VAR19:
            VAR6 = FUN8(VAR2, VAR2->VAR20[9], VAR2->VAR20[10], VAR2->VAR20[11], VAR2->VAR20[12], VAR2->VAR20[13], VAR2->VAR16[7], VAR2->VAR16[11], 0, 0);
            if (VAR6 == -VAR21)
            {
                VAR2->VAR22 -= 2;
            }
            else if (VAR6 != -VAR23)
            {
                VAR2->VAR20[10] = VAR6;
            }
            break;
        case VAR24:
        {
            int VAR25;
            VAR25 = FUN9(VAR4, VAR26);
            if (VAR25)
            {
                VAR7.VAR8 = VAR25;
                VAR7.VAR10 = 0;
                VAR7.VAR11 = VAR27;
                FUN7(VAR2, VAR7.VAR8, &VAR7);
            }
        }
        break;
        default:
            FUN10("", VAR5);
            FUN11(VAR4, VAR28, fprintf, 0);
            FUN12(VAR29);
        }
        FUN13(VAR2);
    }
}