static void FUN1(VAR1 *restrict VAR2, const VAR3 *VAR4, const VAR3 *VAR5, int VAR6)
{
    int VAR7;
    vec_u8 VAR8 = FUN2(0, VAR4);
    vec_u8 VAR9 = FUN2(0, VAR5);
    const vec_u8 VAR10 = (const VAR11)FUN3(0);
    vec_s16 VAR12, VAR13;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        vec_u8 VAR14 = FUN4(0, VAR4);
        vec_u8 VAR15 = FUN4(15, VAR4);
        vec_u8 VAR16 = FUN5(VAR14, VAR15, VAR8);
        VAR12 = (VAR17)FUN6(VAR10, VAR16);
        VAR14 = FUN4(0, VAR5);
        VAR15 = FUN4(15, VAR5);
        VAR16 = FUN5(VAR14, VAR15, VAR9);
        VAR13 = (VAR17)FUN6(VAR10, VAR16);
        VAR12 = FUN7(VAR12, VAR13);
        FUN8(VAR12, 0, (VAR17 *)VAR2);
        VAR4 += VAR6;
        VAR5 += VAR6;
        VAR2 += 8;
        VAR14 = FUN4(0, VAR4);
        VAR15 = FUN4(15, VAR4);
        VAR16 = FUN5(VAR14, VAR15, VAR8);
        VAR12 = (VAR17)FUN6(VAR10, VAR16);
        VAR14 = FUN4(0, VAR5);
        VAR15 = FUN4(15, VAR5);
        VAR16 = FUN5(VAR14, VAR15, VAR9);
        VAR13 = (VAR17)FUN6(VAR10, VAR16);
        VAR12 = FUN7(VAR12, VAR13);
        FUN8(VAR12, 0, (VAR17 *)VAR2);
        VAR4 += VAR6;
        VAR5 += VAR6;
        VAR2 += 8;
    }
}