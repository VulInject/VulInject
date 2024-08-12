static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6, bool VAR7, VHDXImageType VAR8, VAR9 *VAR10)
{
    int VAR11 = 0;
    uint32_t VAR12 = 0;
    void *VAR13 = NULL;
    uint64_t VAR14;
    uint32_t VAR15;
    VAR16 *VAR17 = NULL;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR20 *VAR22;
    assert(VAR10 != NULL);
    VAR17 = FUN2(sizeof(VAR16));
    VAR17->VAR23 = (VAR24) * (VAR9)VAR5 / (VAR9)VAR4;
    VAR17->VAR25 = VAR4 / VAR5;
    VAR17->VAR26 = VAR3;
    VAR17->VAR4 = VAR4;
    VAR17->VAR27 = VAR5;
    FUN3(VAR17);
    FUN4(VAR17);
    VAR13 = FUN2(VAR28);
    VAR19 = VAR13;
    VAR12 += sizeof(VAR18);
    VAR21 = VAR13 + VAR12;
    VAR12 += sizeof(VAR20);
    VAR22 = VAR13 + VAR12;
    VAR19->VAR29 = VAR30;
    VAR19->VAR31 = 2;
    VAR21->VAR32 = VAR33;
    VAR21->VAR34 = FUN5(VAR17->VAR35 * sizeof(VAR36), VAR37);
    VAR21->VAR38 = FUN5(VAR39 + VAR6, VAR37);
    VAR17->VAR40 = VAR21->VAR38;
    VAR22->VAR32 = VAR41;
    VAR22->VAR38 = FUN5(VAR21->VAR38 + VAR21->VAR34, VAR37);
    VAR22->VAR34 = 1 * VAR37;
    *VAR10 = VAR22->VAR38;
    VAR14 = VAR21->VAR38;
    VAR15 = VAR21->VAR34;
    FUN6(VAR19);
    FUN7(VAR21);
    FUN7(VAR22);
    FUN8(VAR13, VAR28, FUN9(VAR18, VAR42));
    VAR11 = FUN10(VAR2, VAR17, VAR3, VAR8, VAR7, VAR14, VAR15);
    if (VAR11 < 0)
    {
        goto VAR43;
    }
    VAR11 = FUN11(VAR2, VAR44, VAR13, VAR28);
    if (VAR11 < 0)
    {
        goto VAR43;
    }
    VAR11 = FUN11(VAR2, VAR45, VAR13, VAR28);
    if (VAR11 < 0)
    {
        goto VAR43;
    }
VAR43:
    FUN12(VAR17);
    FUN12(VAR13);
    return VAR11;
}