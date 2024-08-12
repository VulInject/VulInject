static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR12;
    SiprParameters VAR13;
    const VAR14 *VAR15 = &VAR16[VAR8->VAR17];
    GetBitContext VAR18;
    float *VAR12 = VAR3;
    int VAR19 = VAR8->VAR17 == VAR20 ? VAR21 : VAR22;
    int VAR23, VAR24;
    VAR8->VAR2 = VAR2;
    if (VAR6->VAR25 < (VAR15->VAR26 >> 3))
    {
        FUN2(VAR2, VAR27, "", VAR6->VAR25);
        *VAR4 = 0;
        return -1;
    }
    VAR24 = VAR15->VAR28 * VAR19 * VAR15->VAR29 * FUN3(VAR2->VAR30);
    if (*VAR4 < VAR24)
    {
        FUN2(VAR2, VAR27, "", *VAR4);
        *VAR4 = 0;
        return -1;
    }
    FUN4(&VAR18, VAR11, VAR15->VAR26);
    for (VAR23 = 0; VAR23 < VAR15->VAR28; VAR23++)
    {
        FUN5(&VAR13, &VAR18, VAR15);
        if (VAR8->VAR17 == VAR20)
            FUN6(VAR8, &VAR13, VAR12);
        else
            FUN7(VAR8, &VAR13, VAR12);
        VAR12 += VAR19 * VAR15->VAR29;
    }
    *VAR4 = VAR24;
    return VAR15->VAR26 >> 3;
}