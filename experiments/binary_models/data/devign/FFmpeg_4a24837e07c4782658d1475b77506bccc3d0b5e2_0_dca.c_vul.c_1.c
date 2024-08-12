static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12 = VAR3;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16;
    VAR14->VAR17 = FUN2(VAR6, VAR7, VAR14->VAR18, VAR19);
    if (VAR14->VAR17 == -1)
    {
        FUN3(VAR2, VAR20, "");
        return -1;
    }
    FUN4(&VAR14->VAR21, VAR14->VAR18, VAR14->VAR17 * 8);
    if (FUN5(VAR14) < 0)
    {
        *VAR4 = 0;
        return VAR7;
    }
    VAR2->VAR22 = VAR14->VAR22;
    VAR2->VAR23 = VAR14->VAR23;
    VAR16 = VAR14->VAR24 + !!VAR14->VAR25;
    if (VAR2->VAR26 == 2 && VAR14->VAR24 > 2)
    {
        VAR16 = 2;
        VAR14->VAR27 = VAR28;
    }
    VAR2->VAR16 = VAR16;
    if (*VAR4 < (VAR14->VAR29 / 8) * 256 * sizeof(VAR11) * VAR16)
        return -1;
    *VAR4 = 0;
    for (VAR8 = 0; VAR8 < (VAR14->VAR29 / 8); VAR8++)
    {
        FUN6(VAR14);
        VAR14->VAR30.FUN7(VAR14->VAR31, VAR14->VAR12, 256 * VAR16);
        for (VAR9 = 0; VAR9 < 256; VAR9++)
        {
            for (VAR10 = 0; VAR10 < VAR16; VAR10++)
                VAR12[VAR10] = VAR14->VAR31[VAR9 + VAR10 * 256];
            VAR12 += VAR16;
        }
        *VAR4 += 256 * sizeof(VAR11) * VAR16;
    }
    return VAR7;
}