static void FUN1(VAR1 *VAR2, int32_t VAR3)
{
    uint64_t VAR4;
    v16i8 VAR5 = {0, 0, 0, 0, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0};
    v16u8 VAR6, VAR7;
    v8u16 VAR8;
    v4u32 VAR9;
    VAR6 = FUN2(VAR2 - VAR3);
    VAR8 = FUN3(VAR6, VAR6);
    VAR9 = FUN4(VAR8, VAR8);
    VAR9 = (VAR10)FUN5((VAR11)VAR9, 2);
    VAR7 = (VAR12)FUN6(VAR5, (VAR13)VAR9, (VAR13)VAR9);
    VAR4 = FUN7((VAR14)VAR7, 0);
    FUN8(VAR4, VAR4, VAR4, VAR4, VAR2, VAR3);
    VAR2 += (4 * VAR3);
    FUN8(VAR4, VAR4, VAR4, VAR4, VAR2, VAR3);
}