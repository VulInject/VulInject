static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int VAR5, VAR6, VAR7;
    for (VAR5 = 0; VAR5 < VAR2->VAR8; VAR5++)
    {
        VAR4 = VAR2->VAR9[VAR5];
        if (VAR4->VAR10 == VAR11 && VAR4->VAR12->VAR13 == 1)
            break;
    }
    if (VAR5 == VAR2->VAR8)
        return;
    for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
    {
        VAR3 *VAR15 = VAR2->VAR16[VAR5];
        int VAR17, VAR18 = VAR19, VAR20 = VAR21;
        if (VAR15->VAR10 != VAR11 || VAR15->VAR22->VAR13 < 2)
            continue;
        for (VAR6 = 0; VAR6 < VAR15->VAR22->VAR13; VAR6++)
        {
            uint64_t VAR23 = VAR4->VAR12->VAR24[0];
            uint64_t VAR25 = VAR15->VAR22->VAR24[VAR6];
            int VAR26 = FUN2(VAR23);
            int VAR27 = FUN2(VAR25);
            int VAR28 = VAR27 - VAR26;
            int VAR29, VAR30;
            int VAR31 = 0;
            for (VAR7 = 0; VAR7 < FUN3(VAR32); VAR7++)
            {
                uint64_t VAR33 = VAR32[VAR7][0];
                uint64_t VAR34 = VAR32[VAR7][1];
                if ((VAR23 & VAR33) && (!(VAR25 & VAR33)) && (VAR25 & VAR34) && (!(VAR23 & VAR34)))
                {
                    VAR23 &= ~VAR33;
                    VAR25 &= ~VAR34;
                    VAR31 += 10 * FUN2(VAR34) - 2;
                }
            }
            if ((VAR23 & VAR35) && (VAR25 & VAR35))
                VAR31 += 10;
            VAR23 &= ~VAR35;
            VAR25 &= ~VAR35;
            VAR29 = FUN2(VAR23 & VAR25);
            VAR30 = FUN2(VAR25 & (~VAR23));
            VAR31 += 10 * VAR29 - 5 * VAR30;
            if (VAR31 > VAR18 || (VAR28 < VAR20 && VAR31 == VAR18))
            {
                VAR18 = VAR31;
                VAR17 = VAR6;
                VAR20 = VAR28;
            }
        }
        FUN4(VAR36, VAR15->VAR22->VAR24[0], VAR15->VAR22->VAR24[VAR17]);
    }
}