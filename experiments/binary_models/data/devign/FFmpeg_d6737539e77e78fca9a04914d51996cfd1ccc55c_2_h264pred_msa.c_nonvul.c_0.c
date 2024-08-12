static void FUN1(VAR1 *VAR2, int32_t VAR3)
{
    uint8_t VAR4;
    int32_t VAR5, VAR6, VAR7, VAR8;
    uint64_t VAR9, VAR10;
    v16i8 VAR11 = {7, 8, 6, 9, 5, 10, 4, 11, 3, 12, 2, 13, 1, 14, 0, 15};
    v8i16 VAR12 = {1, 2, 3, 4, 5, 6, 7, 8};
    v4i32 VAR13 = {0, 1, 2, 3};
    v16u8 VAR14 = {0};
    v16u8 VAR15, VAR16;
    v8i16 VAR17, VAR18, VAR19, VAR20;
    v4i32 VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    v4i32 VAR31, VAR32, VAR33, VAR34;
    VAR9 = FUN2(VAR2 - (VAR3 + 1));
    VAR10 = FUN2(VAR2 - (VAR3 + 1) + 9);
    FUN3(VAR9, VAR10, VAR14);
    VAR14 = (VAR35)FUN4(VAR11, (VAR36)VAR14, (VAR36)VAR14);
    VAR17 = FUN5(VAR14, VAR14);
    VAR17 *= VAR12;
    VAR29 = FUN6(VAR17, VAR17);
    VAR30 = (VAR37)FUN7(VAR29, VAR29);
    VAR5 = FUN8(VAR30, 0) + FUN8(VAR30, 2);
    VAR6 = (VAR2[8 * VAR3 - 1] - VAR2[6 * VAR3 - 1]) + 2 * (VAR2[9 * VAR3 - 1] - VAR2[5 * VAR3 - 1]) + 3 * (VAR2[10 * VAR3 - 1] - VAR2[4 * VAR3 - 1]) + 4 * (VAR2[11 * VAR3 - 1] - VAR2[3 * VAR3 - 1]) + 5 * (VAR2[12 * VAR3 - 1] - VAR2[2 * VAR3 - 1]) + 6 * (VAR2[13 * VAR3 - 1] - VAR2[VAR3 - 1]) + 7 * (VAR2[14 * VAR3 - 1] - VAR2[-1]) + 8 * (VAR2[15 * VAR3 - 1] - VAR2[-1 * VAR3 - 1]);
    VAR5 *= 5;
    VAR6 *= 5;
    VAR5 = (VAR5 + 32) >> 6;
    VAR6 = (VAR6 + 32) >> 6;
    VAR8 = 7 * (VAR5 + VAR6);
    VAR7 = 16 * (VAR2[15 * VAR3 - 1] + VAR2[-VAR3 + 15] + 1);
    VAR7 -= VAR8;
    VAR29 = FUN9(VAR5);
    VAR25 = FUN9(VAR7);
    VAR26 = FUN9(VAR6);
    VAR27 = VAR29 * 4;
    VAR28 = VAR29 * VAR13;
    for (VAR4 = 8; VAR4--;)
    {
        VAR21 = VAR28;
        VAR31 = VAR28;
        VAR21 += VAR25;
        VAR25 += VAR26;
        VAR31 += VAR25;
        VAR22 = VAR21 + VAR27;
        VAR32 = VAR31 + VAR27;
        VAR23 = VAR22 + VAR27;
        VAR33 = VAR32 + VAR27;
        VAR24 = VAR23 + VAR27;
        VAR34 = VAR33 + VAR27;
        FUN10(VAR21, VAR22, VAR23, VAR24, 5);
        FUN10(VAR31, VAR32, VAR33, VAR34, 5);
        FUN11(VAR22, VAR21, VAR24, VAR23, VAR17, VAR18);
        FUN11(VAR32, VAR31, VAR34, VAR33, VAR19, VAR20);
        FUN12(VAR17, VAR18);
        FUN12(VAR19, VAR20);
        FUN13(VAR18, VAR17, VAR20, VAR19, VAR15, VAR16);
        FUN14(VAR15, VAR16, VAR2, VAR3);
        VAR2 += 2 * VAR3;
        VAR25 += VAR26;
    }
}