void FUN1(VAR1 *VAR2, const VAR1 *VAR3, ptrdiff_t VAR4)
{
    v16u8 VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    v16u8 VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    FUN2(VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);
    VAR3 += (8 * VAR4);
    FUN2(VAR2, VAR4, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20);
    FUN3(VAR5, VAR13, VAR6, VAR14, VAR7, VAR15, VAR8, VAR16, VAR13, VAR14, VAR15, VAR16);
    FUN3(VAR9, VAR17, VAR10, VAR18, VAR11, VAR19, VAR12, VAR20, VAR17, VAR18, VAR19, VAR20);
    FUN4(VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR2, VAR4);
    VAR2 += (8 * VAR4);
    FUN2(VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);
    FUN2(VAR2, VAR4, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20);
    FUN3(VAR5, VAR13, VAR6, VAR14, VAR7, VAR15, VAR8, VAR16, VAR13, VAR14, VAR15, VAR16);
    FUN3(VAR9, VAR17, VAR10, VAR18, VAR11, VAR19, VAR12, VAR20, VAR17, VAR18, VAR19, VAR20);
    FUN4(VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR2, VAR4);
}