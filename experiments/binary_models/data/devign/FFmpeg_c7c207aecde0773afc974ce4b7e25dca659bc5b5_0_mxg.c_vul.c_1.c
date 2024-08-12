static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned int VAR6;
    VAR7 *VAR8, *VAR9, *VAR10, VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    while (!FUN2(VAR2->VAR15) && !VAR2->VAR15->VAR16)
    {
        if (VAR13->VAR17 <= VAR18)
        {
            VAR5 = FUN3(VAR2, VAR19 + VAR18);
            if (VAR5 < 0)
                return VAR5;
        }
        VAR9 = VAR13->VAR20 + VAR13->VAR17;
        if (VAR13->VAR17 > VAR18)
        {
            VAR10 = VAR9 - VAR18;
            VAR8 = FUN4(VAR13->VAR20, VAR10);
        }
        else
        {
            VAR10 = VAR9;
            VAR8 = FUN4(VAR13->VAR20, VAR10);
            if (VAR8 >= VAR10 - 1 || *(VAR8 + 1) != VAR21)
                break;
        }
        if (VAR8 != VAR10)
        {
            VAR11 = *(VAR8 + 1);
            VAR13->VAR20 = VAR8 + 2;
            VAR13->VAR17 = VAR9 - VAR13->VAR20;
            if (VAR11 == VAR22)
            {
                VAR13->VAR23 = VAR8;
            }
            else if (VAR11 == VAR21)
            {
                if (!VAR13->VAR23)
                {
                    FUN5(VAR2, VAR24, "");
                    continue;
                }
                VAR4->VAR25 = VAR4->VAR26 = VAR13->VAR26;
                VAR4->VAR27 = 0;
                FF_DISABLE_DEPRECATION_WARNINGS VAR4->VAR28 = NULL;
                FF_ENABLE_DEPRECATION_WARNINGS VAR4->VAR29 = NULL;
                VAR4->VAR6 = VAR13->VAR20 - VAR13->VAR23;
                VAR4->VAR30 = VAR13->VAR23;
                if (VAR13->VAR23 - VAR13->VAR31 > VAR13->VAR17)
                {
                    if (VAR13->VAR17 > 0)
                    {
                        memcpy(VAR13->VAR31, VAR13->VAR20, VAR13->VAR17);
                    }
                    VAR13->VAR20 = VAR13->VAR31;
                }
                VAR13->VAR23 = 0;
                return VAR4->VAR6;
            }
            else if ((VAR32 <= VAR11 && VAR11 <= VAR33) || (VAR34 <= VAR11 && VAR11 <= VAR35))
            {
                VAR6 = FUN6(VAR13->VAR20);
                if (VAR6 < 2)
                    return FUN7(VAR36);
                if (VAR13->VAR17 < VAR6)
                {
                    VAR5 = FUN3(VAR2, VAR6);
                    if (VAR5 < 0)
                        return VAR5;
                    VAR8 = VAR13->VAR20 - 2;
                    VAR13->VAR17 = 0;
                }
                else
                {
                    VAR13->VAR17 -= VAR6;
                }
                VAR13->VAR20 += VAR6;
                if (VAR11 == VAR37 && VAR6 >= 16)
                {
                    VAR4->VAR25 = VAR4->VAR26 = FUN8(VAR8 + 8);
                    VAR4->VAR27 = 1;
                    FF_DISABLE_DEPRECATION_WARNINGS VAR4->VAR28 = NULL;
                    FF_ENABLE_DEPRECATION_WARNINGS VAR4->VAR29 = NULL;
                    VAR4->VAR6 = VAR6 - 14;
                    VAR4->VAR30 = VAR8 + 16;
                    if (VAR8 - VAR13->VAR31 > VAR13->VAR17)
                    {
                        if (VAR13->VAR17 > 0)
                        {
                            memcpy(VAR13->VAR31, VAR13->VAR20, VAR13->VAR17);
                        }
                        VAR13->VAR20 = VAR13->VAR31;
                    }
                    return VAR4->VAR6;
                }
                else if (VAR11 == VAR35 && VAR6 >= 18 && !FUN9(VAR8 + 4, "", 3))
                {
                    VAR13->VAR26 = FUN8(VAR8 + 12);
                }
            }
        }
        else
        {
            VAR13->VAR20 = VAR10;
            VAR13->VAR17 = VAR18;
        }
    }
    return VAR38;
}