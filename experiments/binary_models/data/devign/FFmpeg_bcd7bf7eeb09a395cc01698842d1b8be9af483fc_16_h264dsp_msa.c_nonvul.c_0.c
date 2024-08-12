static void FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5, uint8_t VAR6, uint8_t VAR7, uint8_t VAR8, uint8_t VAR9, uint8_t VAR10, uint8_t VAR11, uint8_t VAR12, uint32_t VAR13)
{
    v16u8 VAR14, VAR15;
    v16u8 VAR16, VAR17, VAR18, VAR19;
    v16u8 VAR20, VAR21, VAR22, VAR23;
    v8i16 VAR24 = {0};
    v8i16 VAR25, VAR26, VAR27 = {0};
    v8i16 VAR28 = {0};
    v8i16 VAR29, VAR30, VAR31 = {0};
    v16u8 VAR32, VAR33, VAR34, VAR35, VAR36, VAR37;
    v8i16 VAR38, VAR39, VAR40, VAR41, VAR42, VAR43;
    v8i16 VAR44, VAR45, VAR46, VAR47, VAR48, VAR49;
    v16i8 VAR50 = {0};
    v16u8 VAR51;
    v16u8 VAR52 = {0};
    v16i8 VAR53 = {0};
    VAR51 = (VAR54)FUN2(VAR3);
    VAR52 = (VAR54)FUN3((VAR55)VAR52, 0, (VAR55)VAR51);
    VAR51 = (VAR54)FUN2(VAR4);
    VAR52 = (VAR54)FUN3((VAR55)VAR52, 1, (VAR55)VAR51);
    VAR51 = (VAR54)FUN2(VAR5);
    VAR52 = (VAR54)FUN3((VAR55)VAR52, 2, (VAR55)VAR51);
    VAR51 = (VAR54)FUN2(VAR6);
    VAR52 = (VAR54)FUN3((VAR55)VAR52, 3, (VAR55)VAR51);
    if (!FUN4(VAR52))
    {
        VAR51 = (VAR54)FUN2(VAR7);
        VAR53 = (VAR56)FUN3((VAR55)VAR53, 0, (VAR55)VAR51);
        VAR51 = (VAR54)FUN2(VAR8);
        VAR53 = (VAR56)FUN3((VAR55)VAR53, 1, (VAR55)VAR51);
        VAR51 = (VAR54)FUN2(VAR9);
        VAR53 = (VAR56)FUN3((VAR55)VAR53, 2, (VAR55)VAR51);
        VAR51 = (VAR54)FUN2(VAR10);
        VAR53 = (VAR56)FUN3((VAR55)VAR53, 3, (VAR55)VAR51);
        VAR16 = (VAR54)FUN2(VAR11);
        VAR17 = (VAR54)FUN2(VAR12);
        FUN5(VAR2 - (3 * VAR13), VAR13, VAR32, VAR33, VAR34, VAR35, VAR36);
        {
            v16u8 VAR57, VAR58, VAR59;
            v16u8 VAR60, VAR61;
            VAR61 = ((VAR54)VAR50 < VAR52);
            VAR57 = FUN6(VAR34, VAR35);
            VAR58 = FUN6(VAR33, VAR34);
            VAR59 = FUN6(VAR36, VAR35);
            VAR60 = (VAR57 < VAR16);
            VAR19 = (VAR58 < VAR17);
            VAR18 = VAR19 & VAR60;
            VAR19 = (VAR59 < VAR17);
            VAR18 = VAR19 & VAR18;
            VAR18 = VAR18 & VAR61;
        }
        if (!FUN4(VAR18))
        {
            v16i8 VAR62, VAR63;
            v8i16 VAR64, VAR65, VAR66, VAR67;
            VAR37 = FUN7(VAR2 + (2 * VAR13));
            VAR63 = VAR50 - VAR53;
            VAR62 = FUN8(VAR63, 0);
            FUN9(VAR62, VAR63, VAR64, VAR65);
            FUN10(VAR53, VAR67, VAR66);
            FUN10(VAR33, VAR39, VAR45);
            FUN10(VAR34, VAR40, VAR46);
            FUN10(VAR35, VAR41, VAR47);
            VAR14 = FUN6(VAR32, VAR34);
            VAR19 = (VAR14 < VAR17);
            VAR19 = VAR19 & VAR18;
            {
                v8u16 VAR68, VAR69;
                VAR68 = (VAR70)FUN11((VAR56)VAR19, VAR50, 8);
                if (!FUN4((VAR54)VAR68))
                {
                    VAR38 = (VAR71)FUN12(VAR50, (VAR56)VAR32);
                    FUN13(VAR40, VAR41, VAR39, VAR38, VAR64, VAR67, VAR24);
                }
                VAR69 = (VAR70)FUN11(VAR50, (VAR56)VAR19, 8);
                if (!FUN4((VAR54)VAR69))
                {
                    VAR44 = (VAR71)FUN14(VAR50, (VAR56)VAR32);
                    FUN13(VAR46, VAR47, VAR45, VAR44, VAR65, VAR66, VAR28);
                }
            }
            if (!FUN4(VAR19))
            {
                VAR20 = (VAR54)FUN15((VAR56)VAR28, (VAR56)VAR24);
                VAR33 = FUN16(VAR33, VAR20, VAR19);
                FUN17(VAR33, VAR2 - (2 * VAR13));
                VAR19 = FUN18(VAR19, 1);
                VAR53 = VAR53 + (VAR56)VAR19;
            }
            VAR15 = FUN6(VAR37, VAR35);
            VAR19 = (VAR15 < VAR17);
            VAR19 = VAR19 & VAR18;
            {
                v8u16 VAR68, VAR69;
                VAR68 = (VAR70)FUN11((VAR56)VAR19, VAR50, 8);
                VAR42 = (VAR71)FUN12(VAR50, (VAR56)VAR36);
                if (!FUN4((VAR54)VAR68))
                {
                    VAR43 = (VAR71)FUN12(VAR50, (VAR56)VAR37);
                    FUN13(VAR40, VAR41, VAR42, VAR43, VAR64, VAR67, VAR27);
                }
                VAR69 = (VAR70)FUN11(VAR50, (VAR56)VAR19, 8);
                VAR48 = (VAR71)FUN14(VAR50, (VAR56)VAR36);
                if (!FUN4((VAR54)VAR69))
                {
                    VAR49 = (VAR71)FUN14(VAR50, (VAR56)VAR37);
                    FUN13(VAR46, VAR47, VAR48, VAR49, VAR65, VAR66, VAR31);
                }
            }
            if (!FUN4(VAR19))
            {
                VAR23 = (VAR54)FUN15((VAR56)VAR31, (VAR56)VAR27);
                VAR36 = FUN16(VAR36, VAR23, VAR19);
                FUN17(VAR36, VAR2 + VAR13);
                VAR19 = FUN18(VAR19, 1);
                VAR53 = VAR53 + (VAR56)VAR19;
            }
            {
                v16i8 VAR72, VAR73;
                v8i16 VAR74, VAR75;
                v8i16 VAR76, VAR77;
                VAR72 = VAR50 - VAR53;
                VAR73 = FUN8(VAR72, 0);
                FUN19(VAR50, VAR53, VAR73, VAR72, VAR74, VAR77);
                FUN20(VAR41, VAR40, VAR39, VAR42, VAR77, VAR74, VAR25, VAR26);
                VAR75 = (VAR71)FUN14(VAR50, VAR53);
                VAR76 = (VAR71)FUN14(VAR73, VAR72);
                FUN20(VAR47, VAR46, VAR45, VAR48, VAR76, VAR75, VAR29, VAR30);
            }
            FUN21(VAR29, VAR25, VAR30, VAR26, VAR21, VAR22);
            VAR34 = FUN16(VAR34, VAR21, VAR18);
            VAR35 = FUN16(VAR35, VAR22, VAR18);
            FUN17(VAR34, (VAR2 - VAR13));
            FUN17(VAR35, VAR2);
        }
    }
}