static void FUN1(VAR1 *VAR2, int32_t VAR3, int32_t VAR4, int32_t VAR5, VAR6 *VAR7)
{
    VAR1 *VAR8 = VAR2;
    uint32_t VAR9, VAR10, VAR11, VAR12;
    uint64_t VAR13;
    uint32_t VAR14;
    v16u8 VAR15, VAR16;
    v16i8 VAR17 = {0};
    v16i8 VAR18 = {0};
    v16i8 VAR19 = {0};
    v16i8 VAR20 = {0};
    v16i8 VAR21 = {0};
    v16i8 VAR22 = {0};
    v16i8 VAR23 = {0};
    v16i8 VAR24 = {0};
    v16i8 VAR25, VAR26, VAR27, VAR28;
    v8i16 VAR29, VAR30, VAR31, VAR32;
    v16u8 VAR33, VAR34, VAR35, VAR36, VAR37;
    v16u8 VAR38, VAR39, VAR40;
    v16u8 VAR41, VAR42;
    v8i16 VAR43, VAR44, VAR45;
    v16u8 VAR46, VAR47, VAR48 = {0};
    v8i16 VAR49, VAR50, VAR51, VAR52;
    v8u16 VAR53, VAR54;
    v8i16 VAR55, VAR56, VAR57, VAR58;
    v16u8 VAR59, VAR60, VAR61, VAR62;
    v4i32 VAR63, VAR64;
    v16i8 VAR65 = {0};
    VAR15 = (VAR66)FUN2(VAR4);
    VAR16 = (VAR66)FUN2(VAR5);
    if (VAR7[0] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        VAR13 = FUN3(VAR8 - 3);
        VAR17 = (VAR67)FUN4((VAR68)VAR17, 0, VAR13);
        VAR13 = FUN3(VAR8 - 3 + VAR3);
        VAR18 = (VAR67)FUN4((VAR68)VAR18, 0, VAR13);
        VAR8 += (2 * VAR3);
    }
    if (VAR7[1] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        VAR13 = FUN3(VAR8 - 3);
        VAR19 = (VAR67)FUN4((VAR68)VAR19, 0, VAR13);
        VAR13 = FUN3(VAR8 - 3 + VAR3);
        VAR20 = (VAR67)FUN4((VAR68)VAR20, 0, VAR13);
        VAR8 += (2 * VAR3);
    }
    if (VAR7[2] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        VAR13 = FUN3(VAR8 - 3);
        VAR21 = (VAR67)FUN4((VAR68)VAR21, 0, VAR13);
        VAR13 = FUN3(VAR8 - 3 + VAR3);
        VAR22 = (VAR67)FUN4((VAR68)VAR22, 0, VAR13);
        VAR8 += (2 * VAR3);
    }
    if (VAR7[3] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        VAR13 = FUN3(VAR8 - 3);
        VAR23 = (VAR67)FUN4((VAR68)VAR23, 0, VAR13);
        VAR13 = FUN3(VAR8 - 3 + VAR3);
        VAR24 = (VAR67)FUN4((VAR68)VAR24, 0, VAR13);
        VAR8 += (2 * VAR3);
    }
    FUN5(VAR18, VAR17, VAR20, VAR19, VAR22, VAR21, VAR24, VAR23, VAR25, VAR26, VAR27, VAR28);
    FUN6(VAR26, VAR25, VAR28, VAR27, VAR29, VAR31);
    FUN7(VAR26, VAR25, VAR28, VAR27, VAR30, VAR32);
    VAR25 = (VAR67)FUN8((VAR69)VAR31, (VAR69)VAR29);
    VAR26 = FUN9(VAR65, (VAR67)VAR25, 8);
    VAR27 = (VAR67)FUN10((VAR69)VAR31, (VAR69)VAR29);
    VAR28 = FUN9(VAR65, (VAR67)VAR27, 8);
    VAR29 = (VAR70)FUN8((VAR69)VAR32, (VAR69)VAR30);
    VAR30 = (VAR70)FUN9(VAR65, (VAR67)VAR29, 8);
    VAR33 = FUN11((VAR66)VAR27, (VAR66)VAR28);
    VAR34 = FUN11((VAR66)VAR26, (VAR66)VAR27);
    VAR35 = FUN11((VAR66)VAR29, (VAR66)VAR28);
    VAR36 = FUN11((VAR66)VAR25, (VAR66)VAR27);
    VAR37 = FUN11((VAR66)VAR30, (VAR66)VAR28);
    VAR39 = (VAR33 < VAR15);
    VAR40 = (VAR34 < VAR16);
    VAR38 = VAR39 & VAR40;
    VAR40 = (VAR35 < VAR16);
    VAR38 = VAR40 & VAR38;
    VAR41 = (VAR36 < VAR16);
    VAR42 = (VAR37 < VAR16);
    VAR49 = (VAR70)FUN12((VAR67)VAR28, (VAR67)VAR27);
    VAR50 = (VAR70)FUN13((VAR66)VAR49, (VAR66)VAR49);
    VAR50 = FUN14(VAR50, 1);
    FUN15(VAR65, VAR25, VAR65, VAR26, VAR55, VAR56);
    VAR55 += VAR50;
    VAR55 >>= 1;
    VAR55 -= VAR56;
    FUN15(VAR65, VAR30, VAR65, VAR29, VAR57, VAR58);
    VAR57 += VAR50;
    VAR57 >>= 1;
    VAR57 -= VAR58;
    VAR14 = FUN16(VAR7);
    VAR48 = (VAR66)FUN17((VAR69)VAR48, 0, VAR14);
    VAR48 = (VAR66)FUN12((VAR67)VAR48, (VAR67)VAR48);
    VAR46 = VAR48;
    VAR47 = VAR48;
    VAR44 = (VAR70)FUN12(VAR65, (VAR67)VAR48);
    VAR43 = VAR44;
    VAR55 = FUN18(VAR55, -VAR44, VAR44);
    VAR57 = FUN18(VAR57, -VAR44, VAR44);
    VAR55 += VAR56;
    VAR57 += VAR58;
    FUN19(VAR55, VAR55, VAR57, VAR57, VAR59, VAR60);
    VAR46 = (VAR65 < VAR46);
    VAR47 = VAR46;
    VAR46 = VAR41 & VAR46;
    VAR47 = VAR42 & VAR47;
    VAR46 = VAR38 & VAR46;
    VAR47 = VAR38 & VAR47;
    VAR59 = FUN20((VAR66)VAR26, VAR59, VAR46);
    VAR60 = FUN20((VAR66)VAR29, VAR60, VAR47);
    VAR51 = FUN21((VAR66)VAR49, (VAR66)VAR49);
    VAR51 <<= 2;
    VAR52 = VAR56 - VAR58;
    VAR51 += VAR52;
    VAR51 = FUN14(VAR51, 3);
    VAR45 = VAR43 + 1;
    VAR41 = (VAR66)FUN12((VAR67)VAR41, (VAR67)VAR41);
    VAR43 = (VAR70)FUN20((VAR66)VAR43, (VAR66)VAR45, VAR41);
    VAR45 = VAR43 + 1;
    VAR42 = (VAR66)FUN12((VAR67)VAR42, (VAR67)VAR42);
    VAR43 = (VAR70)FUN20((VAR66)VAR43, (VAR66)VAR45, VAR42);
    VAR51 = FUN18(VAR51, -VAR43, VAR43);
    FUN22(VAR65, VAR27, VAR65, VAR28, VAR53, VAR54);
    VAR53 += VAR51;
    VAR54 -= VAR51;
    VAR53 = (VAR71)FUN23(VAR53);
    VAR54 = (VAR71)FUN23(VAR54);
    FUN19(VAR53, VAR53, VAR54, VAR54, VAR61, VAR62);
    VAR61 = FUN20((VAR66)VAR27, VAR61, VAR38);
    VAR62 = FUN20((VAR66)VAR28, VAR62, VAR38);
    FUN24(VAR61, VAR59, VAR60, VAR62, VAR59, VAR60);
    FUN25(VAR60, VAR59, VAR63, VAR64);
    VAR8 = VAR2;
    VAR9 = FUN26(VAR63, 0);
    VAR10 = FUN26(VAR63, 1);
    VAR11 = FUN26(VAR63, 2);
    VAR12 = FUN26(VAR63, 3);
    if (VAR7[0] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        FUN27(VAR9, (VAR8 - 2));
        VAR8 += VAR3;
        FUN27(VAR10, (VAR8 - 2));
        VAR8 += VAR3;
    }
    if (VAR7[1] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        FUN27(VAR11, (VAR8 - 2));
        VAR8 += VAR3;
        FUN27(VAR12, (VAR8 - 2));
        VAR8 += VAR3;
    }
    VAR9 = FUN26(VAR64, 0);
    VAR10 = FUN26(VAR64, 1);
    VAR11 = FUN26(VAR64, 2);
    VAR12 = FUN26(VAR64, 3);
    if (VAR7[2] < 0)
    {
        VAR8 += (2 * VAR3);
    }
    else
    {
        FUN27(VAR9, (VAR8 - 2));
        VAR8 += VAR3;
        FUN27(VAR10, (VAR8 - 2));
        VAR8 += VAR3;
    }
    if (VAR7[3] >= 0)
    {
        FUN27(VAR11, (VAR8 - 2));
        VAR8 += VAR3;
        FUN27(VAR12, (VAR8 - 2));
    }
}