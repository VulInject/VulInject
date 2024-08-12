void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    FUN2(signed int, VAR8[4]) = {((8 - VAR6) * (8 - VAR7)), ((VAR6) * (8 - VAR7)), ((8 - VAR6) * (VAR7)), ((VAR6) * (VAR7))};
    register int VAR9;
    vec_u8 VAR10;
    const vec_s32 VAR11 = FUN3(0, VAR8);
    const vec_s16 VAR12 = FUN4((VAR13)VAR11, 1);
    const vec_s16 VAR14 = FUN4((VAR13)VAR11, 3);
    const vec_s16 VAR15 = FUN4((VAR13)VAR11, 5);
    const vec_s16 VAR16 = FUN4((VAR13)VAR11, 7);
    VAR17;
    const vec_s16 VAR18 = FUN5(FUN6(FUN7(1), FUN8(5)), FUN7(4));
    const vec_u16 VAR19 = FUN8(6);
    register int VAR20 = (((unsigned long)VAR3) % 16) <= 7 ? 0 : 1;
    register int VAR21 = (((unsigned long)VAR3) % 16) == 15 ? 1 : 0;
    vec_u8 VAR22, VAR23, VAR24, VAR25;
    vec_u8 VAR26, VAR27;
    vec_s16 VAR28, VAR29;
    vec_u8 VAR30, VAR31, VAR32;
    vec_s16 VAR33, VAR34, VAR35;
    vec_u8 VAR36, VAR37, VAR38;
    if (((unsigned long)VAR2) % 16 == 0)
    {
        VAR10 = (VAR39){0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
    }
    else
    {
        VAR10 = (VAR39){0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F};
    }
    VAR22 = FUN3(0, VAR3);
    if (VAR20)
        VAR23 = FUN3(16, VAR3);
    VAR24 = FUN9(0, VAR3);
    VAR25 = FUN9(1, VAR3);
    VAR26 = FUN10(VAR22, VAR23, VAR24);
    if (VAR21)
        VAR27 = VAR23;
    else
        VAR27 = FUN10(VAR22, VAR23, VAR25);
    VAR28 = (VAR13)FUN11(VAR40, (VAR39)VAR26);
    VAR29 = (VAR13)FUN11(VAR40, (VAR39)VAR27);
    if (!VAR20)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR30 = FUN3(VAR4 + 0, VAR3);
            VAR31 = FUN10(VAR30, VAR30, VAR24);
            VAR32 = FUN10(VAR30, VAR30, VAR25);
            VAR33 = (VAR13)FUN11(VAR40, (VAR39)VAR31);
            VAR34 = (VAR13)FUN11(VAR40, (VAR39)VAR32);
            VAR35 = FUN12(VAR12, VAR28, FUN7(0));
            VAR35 = FUN12(VAR14, VAR29, VAR35);
            VAR35 = FUN12(VAR15, VAR33, VAR35);
            VAR35 = FUN12(VAR16, VAR34, VAR35);
            VAR35 = FUN13(VAR18, VAR35);
            VAR35 = FUN14(VAR35, VAR19);
            VAR36 = FUN3(0, VAR2);
            VAR37 = (VAR39)FUN15(VAR35, VAR35);
            VAR38 = FUN10(VAR36, VAR37, VAR10);
            FUN16(VAR38, 0, VAR2);
            VAR28 = VAR33;
            VAR29 = VAR34;
            VAR2 += VAR4;
            VAR3 += VAR4;
        }
    }
    else
    {
        vec_u8 VAR41;
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR30 = FUN3(VAR4 + 0, VAR3);
            VAR41 = FUN3(VAR4 + 16, VAR3);
            VAR31 = FUN10(VAR30, VAR41, VAR24);
            if (VAR21)
                VAR32 = VAR41;
            else
                VAR32 = FUN10(VAR30, VAR41, VAR25);
            VAR33 = (VAR13)FUN11(VAR40, (VAR39)VAR31);
            VAR34 = (VAR13)FUN11(VAR40, (VAR39)VAR32);
            VAR35 = FUN12(VAR12, VAR28, FUN7(0));
            VAR35 = FUN12(VAR14, VAR29, VAR35);
            VAR35 = FUN12(VAR15, VAR33, VAR35);
            VAR35 = FUN12(VAR16, VAR34, VAR35);
            VAR35 = FUN13(VAR18, VAR35);
            VAR35 = FUN17(VAR35, VAR19);
            VAR36 = FUN3(0, VAR2);
            VAR37 = (VAR39)FUN18(VAR35, VAR35);
            VAR38 = FUN10(VAR36, VAR37, VAR10);
            FUN16(VAR38, 0, VAR2);
            VAR28 = VAR33;
            VAR29 = VAR34;
            VAR2 += VAR4;
            VAR3 += VAR4;
        }
    }
}