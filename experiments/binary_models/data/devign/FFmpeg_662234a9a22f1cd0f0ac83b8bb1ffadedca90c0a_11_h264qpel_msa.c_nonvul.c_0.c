void FUN1(VAR1 *VAR2, const VAR1 *VAR3, ptrdiff_t VAR4)
{
    const int16_t VAR5 = 0xfb01;
    const int16_t VAR6 = 0x1414;
    const int16_t VAR7 = 0x1fb;
    v16u8 VAR8, VAR9, VAR10, VAR11;
    v16i8 VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    v16i8 VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    v16i8 VAR31, VAR32, VAR33, VAR34, VAR35, VAR36;
    v16i8 VAR37, VAR38, VAR39;
    v8i16 VAR40, VAR41, VAR42, VAR43, VAR44, VAR45, VAR46, VAR47;
    VAR37 = (VAR48)FUN2(VAR5);
    VAR38 = (VAR48)FUN2(VAR6);
    VAR39 = (VAR48)FUN2(VAR7);
    VAR3 -= (VAR4 * 2);
    FUN3(VAR3, VAR4, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19);
    VAR3 += (8 * VAR4);
    FUN4(VAR3, VAR4, VAR20, VAR21, VAR22, VAR23, VAR24);
    FUN5(VAR13, VAR12, VAR14, VAR13, VAR15, VAR14, VAR16, VAR15, VAR25, VAR26, VAR27, VAR28);
    FUN5(VAR17, VAR16, VAR18, VAR17, VAR19, VAR18, VAR20, VAR19, VAR29, VAR30, VAR31, VAR32);
    FUN5(VAR21, VAR20, VAR22, VAR21, VAR23, VAR22, VAR24, VAR23, VAR33, VAR34, VAR35, VAR36);
    FUN6(VAR25, VAR26, VAR27, VAR28);
    FUN6(VAR29, VAR30, VAR31, VAR32);
    FUN6(VAR33, VAR34, VAR35, VAR36);
    VAR40 = FUN7(VAR25, VAR27, VAR29, VAR37, VAR38, VAR39);
    VAR41 = FUN7(VAR26, VAR28, VAR30, VAR37, VAR38, VAR39);
    VAR42 = FUN7(VAR27, VAR29, VAR31, VAR37, VAR38, VAR39);
    VAR43 = FUN7(VAR28, VAR30, VAR32, VAR37, VAR38, VAR39);
    VAR44 = FUN7(VAR29, VAR31, VAR33, VAR37, VAR38, VAR39);
    VAR45 = FUN7(VAR30, VAR32, VAR34, VAR37, VAR38, VAR39);
    VAR46 = FUN7(VAR31, VAR33, VAR35, VAR37, VAR38, VAR39);
    VAR47 = FUN7(VAR32, VAR34, VAR36, VAR37, VAR38, VAR39);
    FUN8(VAR40, VAR41, VAR42, VAR43, 5);
    FUN8(VAR44, VAR45, VAR46, VAR47, 5);
    FUN9(VAR40, VAR41, VAR42, VAR43, 7);
    FUN9(VAR44, VAR45, VAR46, VAR47, 7);
    VAR8 = FUN10(VAR40, VAR41);
    VAR9 = FUN10(VAR42, VAR43);
    VAR10 = FUN10(VAR44, VAR45);
    VAR11 = FUN10(VAR46, VAR47);
    FUN11(VAR8, VAR9, VAR10, VAR11, VAR2, VAR4);
}