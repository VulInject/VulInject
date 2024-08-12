static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4)
{
    if (VAR2->VAR5 && VAR2->VAR6 != -1)
    {
        VAR7 *VAR8 = VAR2->VAR8;
        VAR9 *VAR10;
        int VAR11;
        int VAR12, VAR13;
        int VAR14 = 0;
        if (VAR2->VAR15.VAR16 && !VAR2->VAR17 && !VAR2->VAR18)
            return 0;
        if (!VAR3 && !VAR2->VAR17 && !VAR2->VAR18)
            return 0;
        VAR10 = FUN2(VAR2);
        VAR12 = FUN3(FUN4(VAR8->VAR19), VAR2->VAR20);
        VAR13 = FUN3(FUN5(VAR8->VAR19), VAR2->VAR21);
        VAR11 = 0;
        for (;;)
        {
            int VAR22, VAR23;
            unsigned long VAR24;
            unsigned long VAR16 = FUN6((unsigned long *)&VAR2->VAR25, VAR12 * FUN7(VAR2), VAR11 * FUN7(VAR2));
            if (VAR16 == VAR12 * FUN7(VAR2))
            {
                break;
            }
            VAR11 = VAR16 / FUN7(VAR2);
            VAR22 = VAR16 % FUN7(VAR2);
            VAR24 = FUN8((unsigned long *)&VAR2->VAR25[VAR11], FUN7(VAR2), VAR22);
            FUN9(VAR2->VAR25[VAR11], VAR22, VAR24 - VAR22);
            VAR23 = FUN10(VAR2, VAR11, VAR22, VAR24, VAR12);
            VAR24 = FUN3(VAR24, VAR13 / VAR26);
            if (VAR24 > VAR22)
            {
                VAR14 += FUN11(VAR10, VAR22 * VAR26, VAR11, (VAR24 - VAR22) * VAR26, VAR23);
            }
        }
        FUN12(VAR10);
        VAR2->VAR18 = 0;
        return VAR14;
    }
    if (VAR2->VAR6 == -1)
    {
        FUN13(VAR2);
    }
    else if (VAR4)
    {
        FUN14(VAR2);
    }
    return 0;
}