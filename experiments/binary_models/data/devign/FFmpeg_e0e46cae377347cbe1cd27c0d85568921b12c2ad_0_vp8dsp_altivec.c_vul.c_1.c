void FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    FUN2(VAR7 - 1);
    vec_u8 VAR10, VAR11, VAR12, VAR13, VAR14;
    vec_u8 VAR15, VAR16, VAR17, VAR18;
    vec_u8 VAR19, VAR20, VAR21, VAR22, VAR23;
    vec_s16 VAR24, VAR25;
    vec_s32 VAR26, VAR27;
    vec_u8 VAR28 = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6, 4, 5, 6, 7};
    vec_u8 VAR29 = {4, 9, 0, 5, 5, 10, 1, 6, 6, 11, 2, 7, 7, 12, 3, 8};
    vec_s32 VAR30 = FUN3(FUN4(1), FUN5(6));
    vec_u16 VAR31 = FUN6(7);
    VAR10 = FUN7(-2, VAR4);
    VAR11 = FUN7(8 - 2, VAR4);
    VAR12 = FUN8(VAR10, VAR10, VAR28);
    VAR13 = FUN8(VAR11, VAR11, VAR28);
    VAR28 = FUN9(VAR28, FUN10(4));
    VAR17 = FUN8(VAR10, VAR10, VAR28);
    VAR18 = FUN8(VAR11, VAR11, VAR28);
    VAR15 = FUN8(VAR10, VAR10, VAR29);
    VAR16 = FUN8(VAR11, VAR11, VAR29);
    while (VAR6-- > 0)
    {
        FUN11(VAR24, 0);
        if (VAR8 == 16)
        {
            FUN11(VAR25, 8);
            VAR14 = FUN12(VAR24, VAR25);
            FUN13(VAR14, 0, VAR2);
        }
        else
        {
            VAR14 = FUN12(VAR24, VAR24);
            FUN14((VAR32)VAR14, 0, (VAR33 *)VAR2);
            if (VAR8 == 8)
                FUN14((VAR32)VAR14, 4, (VAR33 *)VAR2);
        }
        VAR4 += VAR5;
        VAR2 += VAR3;
    }
}