void FUN1(VAR1 *VAR2, const VAR1 *VAR3, ptrdiff_t VAR4)
{
    int32_t VAR5;
    int16_t VAR6 = 0xfb01;
    int16_t VAR7 = 0x1414;
    int16_t VAR8 = 0x1fb;
    v16u8 VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    v16i8 VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
    v16i8 VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR32;
    v16i8 VAR33, VAR34, VAR35, VAR36, VAR37, VAR38, VAR39;
    v16i8 VAR40, VAR41, VAR42, VAR43, VAR44;
    v8i16 VAR45, VAR46, VAR47, VAR48, VAR49, VAR50, VAR51, VAR52;
    VAR42 = (VAR53)FUN2(VAR6);
    VAR43 = (VAR53)FUN2(VAR7);
    VAR44 = (VAR53)FUN2(VAR8);
    VAR3 -= (VAR4 * 2);
    FUN3(VAR3, VAR4, VAR17, VAR18, VAR19, VAR20, VAR21);
    VAR3 += (5 * VAR4);
    FUN4(VAR17, VAR18, VAR19, VAR20, VAR21);
    FUN5(VAR18, VAR17, VAR19, VAR18, VAR20, VAR19, VAR21, VAR20, VAR26, VAR30, VAR27, VAR31);
    FUN6(VAR18, VAR17, VAR19, VAR18, VAR20, VAR19, VAR21, VAR20, VAR34, VAR38, VAR35, VAR39);
    for (VAR5 = 4; VAR5--;)
    {
        FUN7(VAR3, VAR4, VAR22, VAR23, VAR24, VAR25);
        VAR3 += (4 * VAR4);
        FUN8(VAR22, VAR23, VAR24, VAR25);
        FUN5(VAR22, VAR21, VAR23, VAR22, VAR24, VAR23, VAR25, VAR24, VAR28, VAR32, VAR29, VAR33);
        FUN6(VAR22, VAR21, VAR23, VAR22, VAR24, VAR23, VAR25, VAR24, VAR36, VAR40, VAR37, VAR41);
        VAR45 = FUN9(VAR26, VAR27, VAR28, VAR42, VAR43, VAR44);
        VAR46 = FUN9(VAR30, VAR31, VAR32, VAR42, VAR43, VAR44);
        VAR47 = FUN9(VAR27, VAR28, VAR29, VAR42, VAR43, VAR44);
        VAR48 = FUN9(VAR31, VAR32, VAR33, VAR42, VAR43, VAR44);
        VAR49 = FUN9(VAR34, VAR35, VAR36, VAR42, VAR43, VAR44);
        VAR50 = FUN9(VAR38, VAR39, VAR40, VAR42, VAR43, VAR44);
        VAR51 = FUN9(VAR35, VAR36, VAR37, VAR42, VAR43, VAR44);
        VAR52 = FUN9(VAR39, VAR40, VAR41, VAR42, VAR43, VAR44);
        FUN10(VAR45, VAR46, VAR47, VAR48, 5);
        FUN11(VAR45, VAR46, VAR47, VAR48, 7);
        FUN10(VAR49, VAR50, VAR51, VAR52, 5);
        FUN11(VAR49, VAR50, VAR51, VAR52, 7);
        FUN12(VAR2, VAR4, VAR13, VAR14, VAR15, VAR16);
        FUN13(VAR49, VAR45, VAR50, VAR46, VAR51, VAR47, VAR52, VAR48, VAR9, VAR10, VAR11, VAR12);
        FUN14(VAR9, VAR10, VAR11, VAR12);
        FUN15(VAR9, VAR13, VAR10, VAR14, VAR9, VAR10);
        FUN15(VAR11, VAR15, VAR12, VAR16, VAR11, VAR12);
        FUN16(VAR9, VAR10, VAR11, VAR12, VAR2, VAR4);
        VAR2 += (4 * VAR4);
        VAR26 = VAR28;
        VAR27 = VAR29;
        VAR30 = VAR32;
        VAR31 = VAR33;
        VAR34 = VAR36;
        VAR35 = VAR37;
        VAR38 = VAR40;
        VAR39 = VAR41;
        VAR21 = VAR25;
    }
}