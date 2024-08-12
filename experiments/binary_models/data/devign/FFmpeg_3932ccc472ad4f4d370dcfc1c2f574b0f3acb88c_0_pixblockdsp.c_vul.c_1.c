static void FUN1(VAR1 *restrict VAR2, const VAR3 *VAR4, ptrdiff_t VAR5)
{
    int VAR6;
    vec_u8 VAR7 = FUN2(0, VAR4);
    const vec_u8 VAR8 = (const VAR9)FUN3(0);
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        vec_u8 VAR10 = FUN4(0, VAR4);
        vec_u8 VAR11 = FUN4(7, VAR4);
        vec_u8 VAR12 = FUN5(VAR10, VAR11, VAR7);
        vec_s16 VAR13 = (VAR14)FUN6(VAR8, VAR12);
        FUN7(VAR13, VAR6 * 16, (VAR14 *)VAR2);
        VAR4 += VAR5;
    }
}