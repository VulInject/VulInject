static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    static const uint8_t VAR13[VAR14] = {6, 5, 5, 4, 4, 3, 3, 3, 3, 2};
    unsigned int VAR15[VAR16];
    uint16_t VAR17[VAR16][VAR14];
    unsigned int VAR18[VAR14];
    int VAR19, VAR20;
    int VAR21;
    VAR22 *VAR23;
    unsigned int VAR24;
    VAR25 *VAR26 = VAR2->VAR27;
    GetBitContext VAR28;
    if (VAR11 < VAR29)
    {
        FUN2(VAR2, VAR30, "", VAR11);
        *VAR4 = 0;
        return VAR31;
    }
    VAR8->VAR32 = VAR16 * VAR33;
    if ((VAR21 = FUN3(VAR2, VAR8, 0)) < 0)
    {
        FUN2(VAR2, VAR30, "");
        return VAR21;
    }
    VAR23 = (VAR22 *)VAR8->VAR3[0];
    FUN4(&VAR28, VAR10, VAR29 * 8);
    for (VAR19 = 0; VAR19 < VAR14; VAR19++)
        VAR18[VAR19] = VAR34[VAR19][FUN5(&VAR28, VAR13[VAR19])];
    FUN6(VAR26->VAR35[0], VAR18);
    VAR26->VAR36[0] = FUN7(VAR18);
    VAR24 = VAR37[FUN5(&VAR28, 5)];
    VAR15[0] = FUN8(VAR26, VAR17[0], 1, 1, VAR26->VAR38);
    VAR15[1] = FUN8(VAR26, VAR17[1], 2, VAR24 <= VAR26->VAR38, FUN9(VAR24 * VAR26->VAR38) >> 12);
    VAR15[2] = FUN8(VAR26, VAR17[2], 3, 0, VAR24);
    VAR15[3] = FUN10(VAR26->VAR36[0], VAR24);
    FUN11(VAR17[3], VAR26->VAR35[0]);
    for (VAR19 = 0; VAR19 < VAR16; VAR19++)
    {
        FUN12(VAR26, VAR17[VAR19], VAR15[VAR19], &VAR28);
        for (VAR20 = 0; VAR20 < VAR33; VAR20++)
            *VAR23++ = FUN13(VAR26->VAR39[VAR20 + 10] << 2);
    }
    VAR26->VAR38 = VAR24;
    VAR26->VAR36[1] = VAR26->VAR36[0];
    FUN14(unsigned int *, VAR26->VAR35[0], VAR26->VAR35[1]);
    *VAR4 = 1;
    return VAR29;
}