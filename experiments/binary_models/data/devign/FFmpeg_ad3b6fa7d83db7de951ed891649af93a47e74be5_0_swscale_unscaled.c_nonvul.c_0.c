static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    VAR3 *VAR10 = VAR8[0];
    const VAR3 *VAR11 = VAR4[0];
    int VAR12;
    void (*copy)(const VAR3 *VAR4, int VAR13, VAR3 *VAR8, int VAR14, int VAR15);
    void (*VAR16)(const VAR3 *VAR4, int VAR13, VAR3 *VAR8, int VAR14, int VAR15);
    switch (VAR2->VAR17)
    {
    case VAR18:
        copy = VAR19##VAR20##VAR21;
        VAR16 = VAR19##VAR20##VAR22;
        break;
        FUN2(VAR23, VAR24)
        FUN2(VAR25, VAR26) FUN2(VAR27, VAR28) FUN2(VAR29, VAR30) FUN2(VAR31, VAR32) FUN2(VAR33, VAR34) FUN2(VAR35, VAR36) FUN2(VAR37, VAR38) FUN2(VAR39, VAR40) FUN2(VAR41, VAR42) FUN2(VAR43, VAR44) FUN2(VAR45, VAR46) default : return 0;
    }
    FUN3(VAR7 > 1);
    copy(VAR11, VAR5[0], VAR10, VAR9[0], VAR2->VAR47);
    VAR11 += 2 * VAR5[0];
    VAR10 += 2 * VAR9[0];
    for (VAR12 = 2; VAR12 < VAR7 - 2; VAR12 += 2)
    {
        FUN4(VAR11, VAR5[0], VAR10, VAR9[0], VAR2->VAR47);
        VAR11 += 2 * VAR5[0];
        VAR10 += 2 * VAR9[0];
    }
    if (VAR12 + 1 == VAR7)
    {
        copy(VAR11, -VAR5[0], VAR10, -VAR9[0], VAR2->VAR47);
    }
    else if (VAR12 < VAR7)
        copy(VAR11, VAR5[0], VAR10, VAR9[0], VAR2->VAR47);
    return VAR7;
}