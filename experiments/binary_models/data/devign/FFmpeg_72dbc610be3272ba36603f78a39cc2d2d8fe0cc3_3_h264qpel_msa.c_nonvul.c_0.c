void FUN1(VAR1 *VAR2, const VAR1 *VAR3, ptrdiff_t VAR4)
{
    uint32_t VAR5, VAR6, VAR7, VAR8;
    int16_t VAR9 = 0xfb01;
    int16_t VAR10 = 0x1414;
    int16_t VAR11 = 0x1fb;
    v16u8 VAR12, VAR13 = {0};
    v16i8 VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    v16i8 VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29;
    v16i8 VAR30, VAR31, VAR32, VAR33, VAR34, VAR35, VAR36, VAR37;
    v8i16 VAR38, VAR39;
    VAR35 = (VAR40)FUN2(VAR9);
    VAR36 = (VAR40)FUN2(VAR10);
    VAR37 = (VAR40)FUN2(VAR11);
    VAR3 -= (VAR4 * 2);
    FUN3(VAR3, VAR4, VAR14, VAR15, VAR16, VAR17, VAR18);
    VAR3 += (5 * VAR4);
    FUN4(VAR15, VAR14, VAR16, VAR15, VAR17, VAR16, VAR18, VAR17, VAR23, VAR27, VAR24, VAR28);
    FUN5(VAR27, VAR23, VAR28, VAR24, VAR31, VAR32);
    FUN6(VAR31, VAR32);
    FUN7(VAR3, VAR4, VAR19, VAR20, VAR21, VAR22);
    FUN4(VAR19, VAR18, VAR20, VAR19, VAR21, VAR20, VAR22, VAR21, VAR25, VAR29, VAR26, VAR30);
    FUN5(VAR29, VAR25, VAR30, VAR26, VAR33, VAR34);
    FUN6(VAR33, VAR34);
    VAR38 = FUN8(VAR31, VAR32, VAR33, VAR35, VAR36, VAR37);
    VAR39 = FUN8(VAR32, VAR33, VAR34, VAR35, VAR36, VAR37);
    FUN9(VAR38, VAR39, 5);
    FUN10(VAR38, VAR39, 7);
    FUN11(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
    FUN12(VAR5, VAR6, VAR7, VAR8, VAR13);
    VAR12 = FUN13(VAR38, VAR39);
    VAR13 = FUN14(VAR12, VAR13);
    FUN15(VAR13, VAR13, 0, 1, 2, 3, VAR2, VAR4);
}