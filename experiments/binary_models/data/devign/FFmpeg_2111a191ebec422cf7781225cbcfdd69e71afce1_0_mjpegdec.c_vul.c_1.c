static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR14 = FUN2(VAR2, VAR6);
    if (VAR14 == 0xffff)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return -1;
    }
    VAR14 = VAR14 * VAR9[0] + VAR2->VAR17[VAR5];
    VAR2->VAR17[VAR5] = VAR14;
    VAR4[0] = VAR14;
    VAR11 = 0;
    {
        FUN4(VAR18, &VAR2->VAR19)
        for (;;)
        {
            FUN5(VAR18, &VAR2->VAR19);
            FUN6(VAR10, VAR18, &VAR2->VAR19, VAR2->VAR20[1][VAR7].VAR21, 9, 2)
            if (VAR10 == 0x10) break;
            VAR11 += ((unsigned)VAR10) >> 4;
            VAR10 &= 0xf;
            if (VAR10)
            {
                if (VAR10 > VAR22 - 16)
                {
                    FUN5(VAR18, &VAR2->VAR19)
                }
                {
                    int VAR23 = FUN7(VAR18, &VAR2->VAR19);
                    int VAR24 = (~VAR23) >> 31;
                    VAR13 = (FUN8(VAR24 ^ VAR23, VAR10) ^ VAR24) - VAR24;
                }
                FUN9(VAR18, &VAR2->VAR19, VAR10)
                if (VAR11 >= 63)
                {
                    if (VAR11 == 63)
                    {
                        VAR12 = VAR2->VAR25.VAR26[63];
                        VAR4[VAR12] = VAR13 * VAR9[VAR12];
                        break;
                    }
                    FUN3(VAR2->VAR15, VAR16, "", VAR11);
                    return -1;
                }
                VAR12 = VAR2->VAR25.VAR26[VAR11];
                VAR4[VAR12] = VAR13 * VAR9[VAR12];
            }
        }
        FUN10(VAR18, &VAR2->VAR19)
    }
    return 0;
}