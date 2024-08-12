static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, VAR3 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR13 = FUN2(VAR2, VAR6);
    if (VAR13 == 0xfffff)
    {
        FUN3(VAR2->VAR14, VAR15, "");
        return VAR16;
    }
    VAR13 = VAR13 * VAR8[0] + VAR2->VAR17[VAR5];
    VAR2->VAR17[VAR5] = VAR13;
    VAR4[0] = VAR13;
    VAR10 = 0;
    {
        FUN4(VAR18, &VAR2->VAR19);
        do
        {
            FUN5(VAR18, &VAR2->VAR19);
            FUN6(VAR9, VAR18, &VAR2->VAR19, VAR2->VAR20[1][VAR7].VAR21, 9, 2);
            VAR10 += ((unsigned)VAR9) >> 4;
            VAR9 &= 0xf;
            if (VAR9)
            {
                if (VAR9 > VAR22 - 16)
                    FUN5(VAR18, &VAR2->VAR19);
                {
                    int VAR23 = FUN7(VAR18, &VAR2->VAR19);
                    int VAR24 = (~VAR23) >> 31;
                    VAR12 = (FUN8(VAR24 ^ VAR23, VAR9) ^ VAR24) - VAR24;
                }
                FUN9(VAR18, &VAR2->VAR19, VAR9);
                if (VAR10 > 63)
                {
                    FUN3(VAR2->VAR14, VAR15, "", VAR10);
                    return VAR16;
                }
                VAR11 = VAR2->VAR25.VAR26[VAR10];
                VAR4[VAR11] = VAR12 * VAR8[VAR11];
            }
        } while (VAR10 < 63);
        FUN10(VAR18, &VAR2->VAR19);
    }
    return 0;