static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4)
{
    VAR2->VAR3 += VAR3;
    if (VAR2->VAR5 && VAR2->VAR6 != NULL)
    {
        VAR7 *VAR8 = VAR2->VAR8;
        VAR9 *VAR10;
        int VAR11;
        int VAR12, VAR13;
        int VAR14 = 0;
        if (VAR2->VAR15.VAR16 && !VAR2->VAR17 && !VAR2->VAR18)
            return 0;
        if (!VAR2->VAR3 && !VAR2->VAR17 && !VAR2->VAR18)
            return 0;
        VAR10 = FUN2(VAR2);
        VAR12 = FUN3(VAR8->VAR19);
        VAR13 = FUN4(VAR8->VAR19);
        VAR11 = 0;
        for (;;)
        {
            int VAR20, VAR21;
            unsigned long VAR22;
            unsigned long VAR16 = FUN5((unsigned long *)&VAR2->VAR23, VAR12 * FUN6(VAR2), VAR11 * FUN6(VAR2));
            if (VAR16 == VAR12 * FUN6(VAR2))
            {
                break;
            }
            VAR11 = VAR16 / FUN6(VAR2);
            VAR20 = VAR16 % FUN6(VAR2);
            VAR22 = FUN7((unsigned long *)&VAR2->VAR23[VAR11], FUN6(VAR2), VAR20);
            FUN8(VAR2->VAR23[VAR11], VAR20, VAR22 - VAR20);
            VAR21 = FUN9(VAR2, VAR11, VAR20, VAR22, VAR12);
            VAR22 = FUN10(VAR22, VAR13 / VAR24);
            if (VAR22 > VAR20)
            {
                VAR14 += FUN11(VAR10, VAR20 * VAR24, VAR11, (VAR22 - VAR20) * VAR24, VAR21);
            }
            if (!VAR20 && VAR22 == VAR13 / VAR24)
            {
                VAR11 += VAR21;
                if (VAR11 == VAR12)
                {
                    break;
                }
            }
        }
        FUN12(VAR10);
        if (VAR4)
        {
            FUN13(VAR2);
        }
        VAR2->VAR18 = 0;
        VAR2->VAR3 = 0;
        return VAR14;
    }
    if (VAR2->VAR25)
    {
        FUN14(VAR2);
    }
    else if (VAR4)
    {
        FUN13(VAR2);
    }
    return 0;
}