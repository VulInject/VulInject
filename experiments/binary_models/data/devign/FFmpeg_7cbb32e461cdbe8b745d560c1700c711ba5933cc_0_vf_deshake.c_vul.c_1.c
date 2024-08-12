static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12;
    int VAR13;
    int VAR14 = VAR15;
    int VAR16, VAR17; VAR5 + ( VAR18 ) * VAR8 + ( VAR19 ) , VAR8 , VAR2 -> VAR20 ) if ( VAR2 -> VAR21 == VAR22 )
    {
        for (VAR12 = -VAR2->VAR23; VAR12 <= VAR2->VAR23; VAR12++)
        {
            for (VAR11 = -VAR2->VAR24; VAR11 <= VAR2->VAR24; VAR11++)
            {
                VAR13 = FUN2(VAR6 - VAR11, VAR7 - VAR12);
                if (VAR13 < VAR14)
                {
                    VAR14 = VAR13;
                    VAR10->VAR11 = VAR11;
                    VAR10->VAR12 = VAR12;
                }
            }
        }
    }
    else if (VAR2->VAR21 == VAR25)
    {
        for (VAR12 = -VAR2->VAR23 + 1; VAR12 < VAR2->VAR23 - 2; VAR12 += 2)
        {
            for (VAR11 = -VAR2->VAR24 + 1; VAR11 < VAR2->VAR24 - 2; VAR11 += 2)
            {
                VAR13 = FUN2(VAR6 - VAR11, VAR7 - VAR12);
                if (VAR13 < VAR14)
                {
                    VAR14 = VAR13;
                    VAR10->VAR11 = VAR11;
                    VAR10->VAR12 = VAR12;
                }
            }
        }
        VAR16 = VAR10->VAR11;
        VAR17 = VAR10->VAR12;
        for (VAR12 = VAR17 - 1; VAR12 <= VAR17 + 1; VAR12++)
        {
            for (VAR11 = VAR16 - 1; VAR11 <= VAR16 + 1; VAR11++)
            {
                if (VAR11 == VAR16 && VAR12 == VAR17)
                    continue;
                VAR13 = FUN2(VAR6 - VAR11, VAR7 - VAR12);
                if (VAR13 < VAR14)
                {
                    VAR14 = VAR13;
                    VAR10->VAR11 = VAR11;
                    VAR10->VAR12 = VAR12;
                }
            }
        }
    }
    if (VAR14 > 512)
    {
        VAR10->VAR11 = -1;
        VAR10->VAR12 = -1;
    }
    FUN3();
}