static inline int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    uint32_t VAR7, VAR8, VAR9;
    VAR7 = VAR3 / VAR5->VAR10;
    VAR8 = VAR3 % VAR5->VAR10;
    if ((VAR7 > VAR5->VAR11) || (VAR5->VAR12[VAR7] == 0))
        return -1;
    VAR9 = (VAR5->VAR12[VAR7] + VAR8) * 512;
    if (FUN2(VAR5->VAR13, VAR9, VAR14) != VAR9)
        return -1;
    return 0;
}