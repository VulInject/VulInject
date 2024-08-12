static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11, VAR10 *VAR12, VAR10 *VAR13, int VAR14, int VAR15, VAR16 *VAR17, h264_chroma_mc_func VAR18)
{
    VAR19 *const VAR20 = &VAR2->VAR20;
    const int VAR21 = VAR2->VAR22[VAR9][VAR23[VAR5]][0] + VAR14 * 8;
    int VAR24 = VAR2->VAR22[VAR9][VAR23[VAR5]][1] + VAR15 * 8;
    const int VAR25 = (VAR21 & 3) + ((VAR24 & 3) << 2);
    VAR10 *VAR26 = VAR4->VAR27[0] + (VAR21 >> 2) + (VAR24 >> 2) * VAR2->VAR28;
    VAR10 *VAR29, *VAR30;
    int VAR31 = VAR2->VAR32;
    int VAR33 = VAR2->VAR34;
    int VAR35 = 0;
    const int VAR36 = VAR21 >> 2;
    const int VAR37 = VAR24 >> 2;
    const int VAR38 = 16 * VAR20->VAR39;
    const int VAR40 = 16 * VAR20->VAR41 >> VAR42;
    if (VAR21 & 7)
        VAR31 -= 3;
    if (VAR24 & 7)
        VAR33 -= 3;
    if (VAR36 < 0 - VAR31 || VAR37 < 0 - VAR33 || VAR36 + 16 > VAR38 + VAR31 || VAR37 + 16 > VAR40 + VAR33)
    {
        FUN2(VAR20->VAR43, VAR26 - 2 - 2 * VAR2->VAR28, VAR2->VAR28, 16 + 5, 16 + 5, VAR36 - 2, VAR37 - 2, VAR38, VAR40);
        VAR26 = VAR20->VAR43 + 2 + 2 * VAR2->VAR28;
        VAR35 = 1;
    }
    VAR17[VAR25](VAR11, VAR26, VAR2->VAR28);
    if (!VAR6)
    {
        VAR17[VAR25](VAR11 + VAR8, VAR26 + VAR8, VAR2->VAR28);
    }
    if (VAR44 && VAR20->VAR45 & VAR46)
        return;
    if (VAR42)
    {
        VAR24 += 2 * ((VAR20->VAR47 & 1) - (VAR4->VAR48 - 1));
        VAR35 |= (VAR24 >> 3) < 0 || (VAR24 >> 3) + 8 >= (VAR40 >> 1);
    }
    VAR29 = VAR4->VAR27[1] + (VAR21 >> 3) + (VAR24 >> 3) * VAR2->VAR49;
    VAR30 = VAR4->VAR27[2] + (VAR21 >> 3) + (VAR24 >> 3) * VAR2->VAR49;
    if (VAR35)
    {
        FUN2(VAR20->VAR43, VAR29, VAR2->VAR49, 9, 9, (VAR21 >> 3), (VAR24 >> 3), VAR38 >> 1, VAR40 >> 1);
        VAR29 = VAR20->VAR43;
    }
    FUN3(VAR12, VAR29, VAR2->VAR49, VAR7, VAR21 & 7, VAR24 & 7);
    if (VAR35)
    {
        FUN2(VAR20->VAR43, VAR30, VAR2->VAR49, 9, 9, (VAR21 >> 3), (VAR24 >> 3), VAR38 >> 1, VAR40 >> 1);
        VAR30 = VAR20->VAR43;
    }
    FUN3(VAR13, VAR30, VAR2->VAR49, VAR7, VAR21 & 7, VAR24 & 7);
}