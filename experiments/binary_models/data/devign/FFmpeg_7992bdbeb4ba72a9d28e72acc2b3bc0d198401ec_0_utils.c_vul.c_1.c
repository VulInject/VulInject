static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3, VAR4, VAR5, VAR6, VAR7;
    int64_t VAR8, VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR3 = VAR16;
    VAR5 = VAR16;
    VAR6 = VAR17;
    VAR8 = VAR17;
    for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
    {
        VAR13 = VAR2->VAR19[VAR11];
        if (VAR13->VAR3 != VAR20 && VAR13->VAR21.VAR22)
        {
            VAR4 = FUN2(VAR13->VAR3, VAR13->VAR21, VAR23);
            if (VAR13->VAR24->VAR25 == VAR26 || VAR13->VAR24->VAR25 == VAR27)
            {
                if (VAR4 < VAR5)
                    VAR5 = VAR4;
            }
            else
                VAR3 = FUN3(VAR3, VAR4);
            VAR7 = VAR20;
            if (VAR13->VAR8 != VAR20)
            {
                VAR7 = VAR4 + FUN2(VAR13->VAR8, VAR13->VAR21, VAR23);
                VAR6 = FUN4(VAR6, VAR7);
            }
            for (VAR15 = NULL; (VAR15 = FUN5(VAR2, VAR15, VAR11));)
            {
                if (VAR15->VAR3 == VAR20 || VAR15->VAR3 > VAR4)
                    VAR15->VAR3 = VAR4;
                if (VAR15->VAR6 < VAR7)
                    VAR15->VAR6 = VAR7;
            }
        }
        if (VAR13->VAR8 != VAR20)
        {
            VAR9 = FUN2(VAR13->VAR8, VAR13->VAR21, VAR23);
            VAR8 = FUN4(VAR8, VAR9);
        }
    }
    if (VAR3 == VAR16 || (VAR3 > VAR5 && VAR3 - VAR5 < VAR28))
        VAR3 = VAR5;
    else if (VAR3 > VAR5)
        FUN6(VAR2, VAR29, "", VAR5 / (float)VAR28);
    if (VAR3 != VAR16)
    {
        VAR2->VAR3 = VAR3;
        if (VAR6 != VAR17)
        {
            if (VAR2->VAR30)
            {
                for (VAR11 = 0; VAR11 < VAR2->VAR30; VAR11++)
                {
                    VAR15 = VAR2->VAR31[VAR11];
                    if (VAR15->VAR3 != VAR20 && VAR15->VAR6 > VAR15->VAR3)
                        VAR8 = FUN4(VAR8, VAR15->VAR6 - VAR15->VAR3);
                }
            }
            else
                VAR8 = FUN4(VAR8, VAR6 - VAR3);
        }
    }
    if (VAR8 != VAR17 && VAR8 > 0 && VAR2->VAR8 == VAR20)
    {
        VAR2->VAR8 = VAR8;
    }
    if (VAR2->VAR32 && (VAR10 = FUN7(VAR2->VAR32)) > 0 && VAR2->VAR8 != VAR20)
    {
        VAR2->VAR33 = (double)VAR10 * 8.0 * VAR28 / (double)VAR2->VAR8;
    }
}