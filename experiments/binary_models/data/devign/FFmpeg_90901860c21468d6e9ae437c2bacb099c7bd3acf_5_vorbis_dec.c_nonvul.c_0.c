static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint_fast8_t VAR5, VAR6;
    if ((FUN2(VAR4, 8) != '') || (FUN2(VAR4, 8) != '') || (FUN2(VAR4, 8) != '') || (FUN2(VAR4, 8) != '') || (FUN2(VAR4, 8) != '') || (FUN2(VAR4, 8) != ''))
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return 1;
    }
    VAR2->VAR9 = FUN4(VAR4, 32);
    VAR2->VAR10 = FUN2(VAR4, 8);
    VAR2->VAR11 = FUN4(VAR4, 32);
    VAR2->VAR12 = FUN4(VAR4, 32);
    VAR2->VAR13 = FUN4(VAR4, 32);
    VAR2->VAR14 = FUN4(VAR4, 32);
    VAR5 = FUN2(VAR4, 4);
    VAR6 = FUN2(VAR4, 4);
    VAR2->VAR15[0] = (1 << VAR5);
    VAR2->VAR15[1] = (1 << VAR6);
    if (VAR5 > 13 || VAR5 < 6 || VAR6 > 13 || VAR6 < 6 || VAR6 < VAR5)
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return 3;
    }
    if (VAR2->VAR15[1] / 2 * VAR2->VAR10 * 2 > VAR16)
    {
        FUN3(VAR2->VAR7, VAR8, ""
                                             "");
        return 4;
    }
    VAR2->VAR17[0] = VAR18[VAR5 - 6];
    VAR2->VAR17[1] = VAR18[VAR6 - 6];
    if (VAR2->VAR19)
    {
        int VAR20, VAR21;
        for (VAR21 = 0; VAR21 < 2; VAR21++)
        {
            float *VAR17 = FUN5(VAR2->VAR15[VAR21] / 2 * sizeof(float));
            for (VAR20 = 0; VAR20 < VAR2->VAR15[VAR21] / 2; VAR20++)
                VAR17[VAR20] = VAR2->VAR17[VAR21][VAR20] * (1 << 15);
            VAR2->VAR17[VAR21] = VAR17;
        }
    }
    if ((FUN6(VAR4)) == 0)
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return 2;
    }
    VAR2->VAR22 = FUN5((VAR2->VAR15[1] / 2) * VAR2->VAR10 * sizeof(float));
    VAR2->VAR23 = FUN5((VAR2->VAR15[1] / 2) * VAR2->VAR10 * sizeof(float));
    VAR2->VAR24 = FUN5((VAR2->VAR15[1] / 2) * VAR2->VAR10 * sizeof(float));
    VAR2->VAR25 = FUN5((VAR2->VAR15[1] / 2) * VAR2->VAR10 * sizeof(float));
    VAR2->VAR26 = FUN5(VAR2->VAR15[1] * sizeof(float));
    VAR2->VAR27 = FUN5(VAR2->VAR15[1] * sizeof(float));
    VAR2->VAR28 = 0;
    FUN7(&VAR2->VAR29[0], VAR5, 1);
    FUN7(&VAR2->VAR29[1], VAR6, 1);
    FUN8("", VAR2->VAR9, VAR2->VAR10, VAR2->VAR11, VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR2->VAR15[0], VAR2->VAR15[1]);
    return 0;
}