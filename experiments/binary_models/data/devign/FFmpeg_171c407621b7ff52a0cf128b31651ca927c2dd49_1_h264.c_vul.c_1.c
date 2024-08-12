static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11, VAR10 *VAR12, VAR10 *VAR13, int VAR14, int VAR15, VAR16 *VAR17, h264_chroma_mc_func VAR18)
{
    VAR19 *const VAR20 = &VAR2->VAR20;
    const int VAR21 = VAR2->VAR22[VAR9][VAR23[VAR5]][0] + VAR14 * 8;
    const int VAR24 = VAR2->VAR22[VAR9][VAR23[VAR5]][1] + VAR15 * 8;
    const int VAR25 = (VAR21 & 3) + ((VAR24 & 3) << 2);
    VAR10 *VAR26 = VAR4->VAR27[0] + (VAR21 >> 2) + (VAR24 >> 2) * VAR20->VAR28;
    VAR10 *VAR29 = VAR4->VAR27[1] + (VAR21 >> 3) + (VAR24 >> 3) * VAR20->VAR30;
    VAR10 *VAR31 = VAR4->VAR27[2] + (VAR21 >> 3) + (VAR24 >> 3) * VAR20->VAR30;
    int VAR32 = (VAR20->VAR33 & VAR34) ? 0 : 16;
    int VAR35 = VAR32;
    int VAR36 = 0;
    const int VAR37 = VAR21 >> 2;
    const int VAR38 = VAR24 >> 2;
    const int VAR39 = 16 * VAR20->VAR40;
    const int VAR41 = 16 * VAR20->VAR42;
    assert(VAR4->VAR27[0]);
    if (VAR21 & 7)
        VAR32 -= 3;
    if (VAR24 & 7)
        VAR35 -= 3;
    if (VAR37 < 0 - VAR32 || VAR38 < 0 - VAR35 || VAR37 + 16 > VAR39 + VAR32 || VAR38 + 16 > VAR41 + VAR35)
    {
        FUN2(VAR20->VAR43, VAR26 - 2 - 2 * VAR20->VAR28, VAR20->VAR28, 16 + 5, 16 + 5, VAR37 - 2, VAR38 - 2, VAR39, VAR41);
        VAR26 = VAR20->VAR43 + 2 + 2 * VAR20->VAR28;
        VAR36 = 1;
    }
    VAR17[VAR25](VAR11, VAR26, VAR20->VAR28);
    if (!VAR6)
    {
        VAR17[VAR25](VAR11 + VAR8, VAR26 + VAR8, VAR20->VAR28);
    }
    if (VAR20->VAR33 & VAR44)
        return;
    if (VAR36)
    {
        FUN2(VAR20->VAR43, VAR29, VAR20->VAR30, 9, 9, (VAR21 >> 3), (VAR24 >> 3), VAR39 >> 1, VAR41 >> 1);
        VAR29 = VAR20->VAR43;
    }
    FUN3(VAR12, VAR29, VAR20->VAR30, VAR7, VAR21 & 7, VAR24 & 7);
    if (VAR36)
    {
        FUN2(VAR20->VAR43, VAR31, VAR20->VAR30, 9, 9, (VAR21 >> 3), (VAR24 >> 3), VAR39 >> 1, VAR41 >> 1);
        VAR31 = VAR20->VAR43;
    }
    FUN3(VAR13, VAR31, VAR20->VAR30, VAR7, VAR21 & 7, VAR24 & 7);
}