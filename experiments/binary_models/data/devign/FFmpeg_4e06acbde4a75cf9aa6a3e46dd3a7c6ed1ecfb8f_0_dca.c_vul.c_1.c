static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR3;
    VAR14 *VAR15 = VAR2->VAR16;
    int VAR17;
    VAR15->VAR18 = FUN2(VAR8, VAR9, VAR15->VAR19, VAR20);
    if (VAR15->VAR18 == -1)
    {
        FUN3(VAR2, VAR21, "");
    }
    FUN4(&VAR15->VAR22, VAR15->VAR19, VAR15->VAR18 * 8);
    if (FUN5(VAR15) < 0)
    {
        *VAR4 = 0;
        return VAR9;
    }
    VAR2->VAR23 = VAR15->VAR23;
    VAR2->VAR24 = VAR15->VAR24;
    VAR17 = VAR15->VAR25 + !!VAR15->VAR26;
    if (VAR15->VAR27 < 16)
    {
        VAR2->VAR28 = VAR29[VAR15->VAR27];
        if (VAR15->VAR26)
        {
            VAR2->VAR28 |= VAR30;
            VAR15->VAR31 = VAR32[VAR15->VAR27];
        }
        else
            VAR15->VAR31 = VAR33[VAR15->VAR27];
        if (VAR2->VAR34 == 2 && VAR15->VAR25 > 2)
        {
            VAR17 = 2;
            VAR15->VAR35 = VAR36;
            VAR2->VAR28 = VAR37;
        }
    }
    else
    {
        FUN3(VAR2, VAR21, "", VAR15->VAR27);
    }
    if (!VAR2->VAR17)
        VAR2->VAR17 = VAR17;
    if (*VAR4 < (VAR15->VAR38 / 8) * 256 * sizeof(VAR12) * VAR17)
        *VAR4 = 256 / 8 * VAR15->VAR38 * sizeof(VAR12) * VAR17;
    for (VAR11 = 0; VAR11 < (VAR15->VAR38 / 8); VAR11++)
    {
        FUN6(VAR15);
        VAR15->VAR39.FUN7(VAR13, VAR15->VAR40, 256, VAR17);
        VAR13 += 256 * VAR17;
    }
    return VAR9;