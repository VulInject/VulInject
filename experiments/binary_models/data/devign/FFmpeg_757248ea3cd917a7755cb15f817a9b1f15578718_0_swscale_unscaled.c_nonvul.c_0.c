static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const VAR3 *VAR10 = VAR4[0];
    VAR3 *VAR11 = VAR8[0];
    VAR3 *VAR12 = VAR8[1];
    VAR3 *VAR13 = VAR8[2];
    int VAR14;
    void (*copy)(const VAR3 *VAR4, int VAR15, VAR3 *VAR11, VAR3 *VAR12, VAR3 *VAR13, int VAR16, int VAR17, VAR18 *VAR19);
    void (*VAR20)(const VAR3 *VAR4, int VAR15, VAR3 *VAR11, VAR3 *VAR12, VAR3 *VAR13, int VAR16, int VAR17, VAR18 *VAR19);
    switch (VAR2->VAR21)
    {
    case VAR22:
        copy = VAR23##VAR24##VAR25;
        VAR20 = VAR23##VAR24##VAR26;
        break;
        FUN2(VAR27, VAR28)
        FUN2(VAR29, VAR30) FUN2(VAR31, VAR32) FUN2(VAR33, VAR34) FUN2(VAR35, VAR36) FUN2(VAR37, VAR38) FUN2(VAR39, VAR40) FUN2(VAR41, VAR42) FUN2(VAR43, VAR44) FUN2(VAR45, VAR46) FUN2(VAR47, VAR48) FUN2(VAR49, VAR50) default : return 0;
    }
    FUN3(VAR7 > 1);
    copy(VAR10, VAR5[0], VAR11, VAR12, VAR13, VAR9[0], VAR2->VAR51, VAR2->VAR52);
    VAR10 += 2 * VAR5[0];
    VAR11 += 2 * VAR9[0];
    VAR12 += VAR9[1];
    VAR13 += VAR9[1];
    for (VAR14 = 2; VAR14 < VAR7 - 2; VAR14 += 2)
    {
        FUN4(VAR10, VAR5[0], VAR11, VAR12, VAR13, VAR9[0], VAR2->VAR51, VAR2->VAR52);
        VAR10 += 2 * VAR5[0];
        VAR11 += 2 * VAR9[0];
        VAR12 += VAR9[1];
        VAR13 += VAR9[1];
    }
    if (VAR14 + 1 == VAR7)
    {
        copy(VAR10, -VAR5[0], VAR11, VAR12, VAR13, -VAR9[0], VAR2->VAR51, VAR2->VAR52);
    }
    else if (VAR14 < VAR7)
        copy(VAR10, VAR5[0], VAR11, VAR12, VAR13, VAR9[0], VAR2->VAR51, VAR2->VAR52);
    return VAR7;
}