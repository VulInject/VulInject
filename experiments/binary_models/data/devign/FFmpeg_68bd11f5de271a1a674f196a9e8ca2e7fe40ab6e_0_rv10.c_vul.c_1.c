static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    DCTELEM VAR15[6][64];
    VAR16 *VAR17 = VAR3;
    FUN2("", VAR2->VAR18, VAR7);
    if (VAR7 == 0)
    {
        *VAR4 = 0;
        return 0;
    }
    FUN3(&VAR9->VAR19, VAR6, VAR7);
    VAR12 = FUN4(VAR9);
    if (VAR12 < 0)
    {
        FUN2("");
        return -1;
    }
    if (VAR9->VAR20 >= VAR9->VAR21 || VAR9->VAR22 >= VAR9->VAR23)
    {
        FUN2("", VAR9->VAR20, VAR9->VAR22);
        return -1;
    }
    VAR13 = VAR9->VAR22 * VAR9->VAR21 + VAR9->VAR20;
    VAR14 = VAR9->VAR21 * VAR9->VAR23 - VAR13;
    if (VAR12 > VAR14)
    {
        FUN2("");
        return -1;
    }
    if (VAR9->VAR20 == 0 && VAR9->VAR22 == 0)
    {
        FUN5(VAR9, VAR2);
    }
    FUN2("", VAR9->VAR24);
    VAR9->VAR25 = 8;
    VAR9->VAR26 = 8;
    VAR9->VAR27[0] = 0;
    VAR9->VAR27[1] = 0;
    VAR9->VAR27[2] = 0;
    VAR9->VAR28[0] = VAR9->VAR28[1] = VAR9->VAR28[2] = VAR9->VAR28[3] = VAR9->VAR21 * 2 + 2;
    VAR9->VAR28[4] = VAR9->VAR28[5] = VAR9->VAR21 + 2;
    VAR9->VAR29[0] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 1) - 1 + VAR9->VAR20 * 2;
    VAR9->VAR29[1] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 1) + VAR9->VAR20 * 2;
    VAR9->VAR29[2] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 2) - 1 + VAR9->VAR20 * 2;
    VAR9->VAR29[3] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 2) + VAR9->VAR20 * 2;
    VAR9->VAR29[4] = VAR9->VAR28[4] * (VAR9->VAR22 + 1) + VAR9->VAR28[0] * (VAR9->VAR23 * 2 + 2) + VAR9->VAR20;
    VAR9->VAR29[5] = VAR9->VAR28[4] * (VAR9->VAR22 + 1 + VAR9->VAR23 + 2) + VAR9->VAR28[0] * (VAR9->VAR23 * 2 + 2) + VAR9->VAR20;
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
    {
        VAR9->VAR29[0] += 2;
        VAR9->VAR29[1] += 2;
        VAR9->VAR29[2] += 2;
        VAR9->VAR29[3] += 2;
        VAR9->VAR29[4]++;
        VAR9->VAR29[5]++;
        FUN2("", VAR9->VAR20, VAR9->VAR22);
        memset(VAR15, 0, sizeof(VAR15));
        VAR9->VAR30 = VAR31;
        VAR9->VAR32 = VAR33;
        if (FUN6(VAR9, VAR15) < 0)
        {
            FUN2("");
            return -1;
        }
        FUN7(VAR9, VAR15);
        if (++VAR9->VAR20 == VAR9->VAR21)
        {
            VAR9->VAR20 = 0;
            VAR9->VAR22++;
            VAR9->VAR29[0] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 1) - 1;
            VAR9->VAR29[1] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 1);
            VAR9->VAR29[2] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 2) - 1;
            VAR9->VAR29[3] = VAR9->VAR28[0] * (VAR9->VAR22 * 2 + 2);
            VAR9->VAR29[4] = VAR9->VAR28[4] * (VAR9->VAR22 + 1) + VAR9->VAR28[0] * (VAR9->VAR23 * 2 + 2);
            VAR9->VAR29[5] = VAR9->VAR28[4] * (VAR9->VAR22 + 1 + VAR9->VAR23 + 2) + VAR9->VAR28[0] * (VAR9->VAR23 * 2 + 2);
        }
    }
    if (VAR9->VAR20 == 0 && VAR9->VAR22 == VAR9->VAR23)
    {
        FUN8(VAR9);
        VAR17->VAR3[0] = VAR9->VAR34[0];
        VAR17->VAR3[1] = VAR9->VAR34[1];
        VAR17->VAR3[2] = VAR9->VAR34[2];
        VAR17->VAR35[0] = VAR9->VAR35;
        VAR17->VAR35[1] = VAR9->VAR36;
        VAR17->VAR35[2] = VAR9->VAR36;
        VAR2->VAR37 = VAR9->VAR24;
        *VAR4 = sizeof(VAR16);
    }
    else
    {
        *VAR4 = 0;
    }
    return VAR7;
}