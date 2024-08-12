static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR14 = FUN2(VAR2, VAR6);
    if (VAR14 == 0xfffff)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return VAR17;
    }
    VAR14 = VAR14 * VAR9[0] + VAR2->VAR18[VAR5];
    VAR14 = FUN4(VAR14, 32767);
    VAR2->VAR18[VAR5] = VAR14;
    VAR4[0] = VAR14;
    VAR11 = 0;
    {
        FUN5(VAR19, &VAR2->VAR20);
        do
        {
            FUN6(VAR19, &VAR2->VAR20);
            FUN7(VAR10, VAR19, &VAR2->VAR20, VAR2->VAR21[1][VAR7].VAR22, 9, 2);
            VAR11 += ((unsigned)VAR10) >> 4;
            VAR10 &= 0xf;
            if (VAR10)
            {
                if (VAR10 > VAR23 - 16)
                    FUN6(VAR19, &VAR2->VAR20);
                {
                    int VAR24 = FUN8(VAR19, &VAR2->VAR20);
                    int VAR25 = (~VAR24) >> 31;
                    VAR13 = (FUN9(VAR25 ^ VAR24, VAR10) ^ VAR25) - VAR25;
                }
                FUN10(VAR19, &VAR2->VAR20, VAR10);
                if (VAR11 > 63)
                {
                    FUN3(VAR2->VAR15, VAR16, "", VAR11);
                    return VAR17;
                }
                VAR12 = VAR2->VAR26.VAR27[VAR11];
                VAR4[VAR12] = VAR13 * VAR9[VAR11];
            }
        } while (VAR11 < 63);
        FUN11(VAR19, &VAR2->VAR20);
    }
    return 0;
}