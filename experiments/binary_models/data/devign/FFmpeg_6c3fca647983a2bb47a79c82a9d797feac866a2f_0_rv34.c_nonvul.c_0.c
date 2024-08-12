static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = &VAR6->VAR8;
    int VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    DCTELEM VAR14[64];
    int VAR15;
    int VAR16;
    int VAR17 = VAR6->VAR18 + VAR6->VAR19 * VAR6->VAR20;
    memset(VAR2->VAR21, 0, sizeof(VAR2->VAR21));
    FUN2(VAR2->VAR21 + 5, 2, 2, 4, 1, 4);
    VAR16 = (VAR6->VAR18 - VAR6->VAR22) + (VAR6->VAR19 - VAR6->VAR23) * VAR6->VAR24;
    if (VAR6->VAR18 && VAR16)
        VAR2->VAR21[4] = VAR2->VAR21[8] = VAR6->VAR25->VAR26[VAR17 - 1];
    if (VAR16 >= VAR6->VAR24)
        VAR2->VAR21[1] = VAR2->VAR21[2] = VAR6->VAR25->VAR26[VAR17 - VAR6->VAR20];
    if (((VAR6->VAR18 + 1) < VAR6->VAR24) && VAR16 >= VAR6->VAR24 - 1)
        VAR2->VAR21[3] = VAR6->VAR25->VAR26[VAR17 - VAR6->VAR20 + 1];
    if (VAR6->VAR18 && VAR16 > VAR6->VAR24)
        VAR2->VAR21[0] = VAR6->VAR25->VAR26[VAR17 - VAR6->VAR20 - 1];
    VAR6->VAR27 = VAR2->VAR28.VAR29;
    VAR9 = VAR10 = FUN3(VAR2, VAR4);
    VAR2->VAR30[VAR6->VAR18 + VAR6->VAR19 * VAR6->VAR20] = VAR9;
    VAR2->VAR31[VAR6->VAR18 + VAR6->VAR19 * VAR6->VAR20] = VAR9 >> 16;
    if (VAR6->VAR32 == VAR33)
        VAR2->VAR34[VAR17] = 0xFFFF;
    else
        VAR2->VAR34[VAR17] = FUN4(VAR2) | VAR2->VAR30[VAR17];
    VAR6->VAR25->VAR35[VAR6->VAR18 + VAR6->VAR19 * VAR6->VAR20] = VAR6->VAR27;
    if (VAR9 == -1)
        return -1;
    VAR15 = VAR2->VAR36 == VAR37 ? VAR2->VAR38[VAR6->VAR27] : VAR2->VAR39[VAR6->VAR27];
    if (VAR2->VAR40)
    {
        memset(VAR14, 0, sizeof(VAR14));
        FUN5(VAR14, VAR8, VAR2->VAR41, 3, 0);
        FUN6(VAR14, VAR42[VAR15], VAR42[VAR6->VAR27]);
        FUN7(VAR14);
    }
    for (VAR11 = 0; VAR11 < 16; VAR11++, VAR9 >>= 1)
    {
        if (!VAR2->VAR40 && !(VAR9 & 1))
            continue;
        VAR12 = ((VAR11 & 2) >> 1) + ((VAR11 & 8) >> 2);
        VAR13 = ((VAR11 & 1) << 2) + ((VAR11 & 4) << 3);
        if (VAR9 & 1)
            FUN5(VAR6->VAR43[VAR12] + VAR13, VAR8, VAR2->VAR41, VAR2->VAR44, 0);
        FUN8(VAR6->VAR43[VAR12] + VAR13, VAR42[VAR6->VAR27], VAR42[VAR6->VAR27]);
        if (VAR2->VAR40)
            VAR6->VAR43[VAR12][VAR13] = VAR14[(VAR11 & 3) | ((VAR11 & 0xC) << 1)];
        FUN9(VAR6->VAR43[VAR12] + VAR13);
    }
    if (VAR2->VAR36 == VAR37)
        VAR2->VAR41 = FUN10(VAR2->VAR28.VAR29, VAR2->VAR28.VAR45, 1);
    for (; VAR11 < 24; VAR11++, VAR9 >>= 1)
    {
        if (!(VAR9 & 1))
            continue;
        VAR12 = ((VAR11 & 4) >> 2) + 4;
        VAR13 = ((VAR11 & 1) << 2) + ((VAR11 & 2) << 4);
        FUN5(VAR6->VAR43[VAR12] + VAR13, VAR8, VAR2->VAR41, VAR2->VAR46, 1);
        FUN8(VAR6->VAR43[VAR12] + VAR13, VAR42[VAR47[1][VAR6->VAR27]], VAR42[VAR47[0][VAR6->VAR27]]);
        FUN9(VAR6->VAR43[VAR12] + VAR13);
    }
    if (FUN11(VAR6->VAR25->VAR26[VAR6->VAR18 + VAR6->VAR19 * VAR6->VAR20]))
        FUN12(VAR2, VAR4, VAR10, VAR2->VAR40);
    else
        FUN13(VAR2, VAR10);
    return 0;
}