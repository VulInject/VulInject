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
        case 0x160:
            VAR2->VAR8 += 2;
            VAR6 = FUN7(VAR2, VAR2->VAR9[3], VAR2->VAR9[4], VAR2->VAR9[5], VAR2->VAR9[6], VAR2->VAR9[7], VAR2->VAR9[0], VAR2->VAR9[1], 0, 0);
            if (VAR6 == -VAR10)
            {
                VAR2->VAR8 -= 2;
            }
            else if (VAR6 != -VAR11)
            {
                VAR2->VAR9[0] = VAR6;
            }
            break;
        case VAR12:
            break;
        case VAR13:
        {
            int VAR14;
            VAR14 = FUN8(VAR4, VAR15);
            if (VAR14)
            {
                VAR7.VAR16 = VAR14;
                VAR7.VAR17 = 0;
                VAR7.VAR18 = VAR19;
                FUN9(VAR2, VAR7.VAR16, &VAR7);
            }
        }
        break;
        case 0xa0:
        case 0xc0:
            VAR7.VAR16 = VAR20;
            VAR7.VAR17 = 0;
            VAR7.VAR18 = VAR21;
            VAR7.VAR22.VAR23.VAR24 = VAR2->VAR25;
            FUN9(VAR2, VAR7.VAR16, &VAR7);
            break;
        default:
            FUN10("", VAR5);
            FUN11(VAR4, VAR26, fprintf, 0);
            FUN12(VAR27);
        }
        FUN13(VAR2);
    }
}