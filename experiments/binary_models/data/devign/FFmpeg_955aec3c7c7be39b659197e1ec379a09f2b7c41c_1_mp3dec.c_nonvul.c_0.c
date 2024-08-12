static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    uint32_t VAR6, VAR7;
    MPADecodeHeader VAR8;
    int VAR9 = 0;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13;
    FUN2(VAR2->VAR14, VAR15, 0);
    VAR6 = FUN3(VAR2->VAR14);
    VAR13 = FUN4(&VAR8, VAR6);
    if (VAR13 < 0)
        return VAR13;
    else if (VAR13 == 0)
        VAR9 = VAR8.VAR16;
    if (VAR8.VAR17 != 3)
        return -1;
    VAR7 = VAR8.VAR18 ? 576 : 1152;
    VAR11->VAR19 = 0;
    VAR11->VAR20 = 0;
    FUN5(VAR2, VAR4, &VAR8, VAR7);
    FUN6(VAR2, VAR4, VAR5);
    if (!VAR11->VAR19 && !VAR11->VAR20)
        return -1;
    FUN7(VAR2->VAR14, VAR5 + VAR9, VAR21);
    if (VAR11->VAR19)
        VAR4->VAR22 = FUN8(VAR11->VAR19, (VAR23){VAR7, VAR8.VAR24}, VAR4->VAR25);
    if (VAR11->VAR20 && VAR11->VAR19 && !VAR11->VAR26)
        VAR4->VAR27->VAR28 = FUN9(VAR11->VAR20, 8 * VAR8.VAR24, VAR11->VAR19 * (VAR29)VAR7);
    return 0;
}