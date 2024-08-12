void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    FUN2(VAR8, 1);
    FUN3(signed int, VAR9[4]) = {((8 - VAR6) * (8 - VAR7)), ((VAR6) * (8 - VAR7)), ((8 - VAR6) * (VAR7)), ((VAR6) * (VAR7))};
    register int VAR10;
    vec_u8 VAR11;
    const vec_s32 VAR12 = FUN4(0, VAR9);
    const vec_s16 VAR13 = FUN5((VAR14)VAR12, 1);
    const vec_s16 VAR15 = FUN5((VAR14)VAR12, 3);
    const vec_s16 VAR16 = FUN5((VAR14)VAR12, 5);
    const vec_s16 VAR17 = FUN5((VAR14)VAR12, 7);
    VAR18;
    const vec_s16 VAR19 = FUN6(FUN7(1), FUN8(5));
    const vec_u16 VAR20 = FUN8(6);
    register int VAR21 = (((unsigned long)VAR3) % 16) <= 7 ? 0 : 1;
    register int VAR22 = (((unsigned long)VAR3) % 16) == 15 ? 1 : 0;
    vec_u8 VAR23, VAR24, VAR25, VAR26;
    vec_u8 VAR27, VAR28;
    vec_s16 VAR29, VAR30;
    vec_u8 VAR31, VAR32, VAR33;
    vec_s16 VAR34, VAR35, VAR36;
    vec_u8 VAR37, VAR38, VAR39, VAR40;
    FUN9(VAR8, 1);
    if (((unsigned long)VAR2) % 16 == 0)
    {
        VAR11 = (VAR41){0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
    }
    else
    {
        VAR11 = (VAR41){0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F};
    }
    VAR23 = FUN4(0, VAR3);
    if (VAR21)
        VAR24 = FUN4(16, VAR3);
    VAR25 = FUN10(0, VAR3);
    VAR26 = FUN10(1, VAR3);
    VAR27 = FUN11(VAR23, VAR24, VAR25);
    if (VAR22)
        VAR28 = VAR24;
    else
        VAR28 = FUN11(VAR23, VAR24, VAR26);
    VAR29 = (VAR14)FUN12(VAR42, (VAR41)VAR27);
    VAR30 = (VAR14)FUN12(VAR42, (VAR41)VAR28);
    if (VAR9[3])
    {
        if (!VAR21)
        {
            for (VAR10 = 0; VAR10 < VAR5; VAR10++)
            {
                VAR31 = FUN4(VAR4 + 0, VAR3);
                VAR32 = FUN11(VAR31, VAR31, VAR25);
                VAR33 = FUN11(VAR31, VAR31, VAR26);
                VAR43
            }
        }
        else
        {
            vec_u8 VAR44;
            for (VAR10 = 0; VAR10 < VAR5; VAR10++)
            {
                VAR31 = FUN4(VAR4 + 0, VAR3);
                VAR44 = FUN4(VAR4 + 16, VAR3);
                VAR32 = FUN11(VAR31, VAR44, VAR25);
                if (VAR22)
                    VAR33 = VAR44;
                else
                    VAR33 = FUN11(VAR31, VAR44, VAR26);
                VAR43
            }
        }
    }
    else
    {
        const vec_s16 VAR45 = FUN13(VAR15, VAR16);
        if (VAR9[2])
        {
            if (!VAR21)
            {
                for (VAR10 = 0; VAR10 < VAR5; VAR10++)
                {
                    VAR31 = FUN4(VAR4 + 0, VAR3);
                    VAR28 = FUN11(VAR31, VAR31, VAR25);
                    CHROMA_MC8_ALTIVEC_CORE_SIMPLE VAR27 = VAR28;
                }
            }
            else
            {
                vec_u8 VAR44;
                for (VAR10 = 0; VAR10 < VAR5; VAR10++)
                {
                    VAR31 = FUN4(VAR4 + 0, VAR3);
                    VAR44 = FUN4(VAR4 + 15, VAR3);
                    VAR28 = FUN11(VAR31, VAR44, VAR25);
                    CHROMA_MC8_ALTIVEC_CORE_SIMPLE VAR27 = VAR28;
                }
            }
        }
        else
        {
            if (!VAR21)
            {
                for (VAR10 = 0; VAR10 < VAR5; VAR10++)
                {
                    VAR31 = FUN4(0, VAR3);
                    VAR27 = FUN11(VAR31, VAR31, VAR25);
                    VAR28 = FUN11(VAR31, VAR31, VAR26);
                    VAR46
                }
            }
            else
            {
                vec_u8 VAR44;
                for (VAR10 = 0; VAR10 < VAR5; VAR10++)
                {
                    VAR31 = FUN4(0, VAR3);
                    VAR44 = FUN4(15, VAR3);
                    VAR27 = FUN11(VAR31, VAR44, VAR25);
                    if (VAR22)
                        VAR28 = VAR44;
                    else
                        VAR28 = FUN11(VAR31, VAR44, VAR26);
                    VAR46
                }
            }
        }
    }
    FUN14(VAR8, 1);
}