static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR4->VAR13;
    VAR14 *VAR15, *VAR16;
    VAR17 *VAR18;
    VAR17 *VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    int VAR27;
    FUN2(VAR12);
    FUN3(VAR15, &VAR12->VAR28, VAR29, VAR16)
    {
        if (FUN4(VAR15, VAR30))
        {
            VAR15->VAR31 = 1;
            FUN5(VAR15, 1);
        }
    }
    VAR23 = FUN6(VAR12);
    VAR18 = FUN7(VAR12, VAR5, VAR6);
    VAR19 = FUN7(VAR12, VAR7, VAR8);
    VAR22 = VAR8;
    VAR24 = 1;
    if (VAR8 > VAR6)
    {
        VAR18 += VAR23 * (VAR10 - 1);
        VAR19 += VAR23 * (VAR10 - 1);
        VAR23 = -VAR23;
        VAR22 = VAR8 + VAR10 - 1;
        VAR24 = -1;
    }
    VAR25 = VAR9 - (16 - (VAR7 % 16));
    if (VAR25 < 0)
        VAR25 = VAR9;
    else
        VAR25 = VAR9 - (VAR25 % 16);
    for (VAR20 = 0; VAR20 < VAR10; VAR20++)
    {
        for (VAR21 = 0; VAR21 <= VAR25; VAR21 += VAR26, VAR18 += VAR27, VAR19 += VAR27)
        {
            if (VAR21 == VAR25)
            {
                if ((VAR26 = VAR9 - VAR25) == 0)
                    break;
            }
            else if (!VAR21)
            {
                VAR26 = (16 - (VAR7 % 16));
                VAR26 = FUN8(VAR26, VAR25);
            }
            else
            {
                VAR26 = 16;
            }
            VAR27 = VAR26 * VAR32;
            if (memcmp(VAR18, VAR19, VAR27) == 0)
                continue;
            memmove(VAR19, VAR18, VAR27);
            FUN9(VAR15, &VAR12->VAR28, VAR29)
            {
                if (!FUN4(VAR15, VAR30))
                {
                    FUN10(((VAR21 + VAR7) / 16), VAR15->VAR33[VAR22]);
                }
            }
        }
        VAR18 += VAR23 - VAR9 * VAR32;
        VAR19 += VAR23 - VAR9 * VAR32;
        VAR22 += VAR24;
    }
    FUN9(VAR15, &VAR12->VAR28, VAR29)
    {
        if (FUN4(VAR15, VAR30))
        {
            FUN11(VAR15, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10);
        }
    }
}