static inline int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int64_t VAR7 = VAR3 * 512;
    int64_t VAR8, VAR9, VAR10, VAR11;
    char VAR12;
    VAR8 = VAR7 / VAR5->VAR13;
    VAR9 = (VAR7 % VAR5->VAR13) / 512;
    if (VAR5->VAR14[VAR8] == 0xffffffff)
    {
        return -1;
    }
    VAR10 = VAR5->VAR15 + (512 * VAR5->VAR14[VAR8] * (VAR5->VAR16 + VAR5->VAR17));
    VAR11 = VAR10 + (512 * (VAR5->VAR17 + VAR9));
    if (FUN2(VAR5->VAR18, VAR10 + (VAR9 / 8), VAR19) == (VAR20)-1)
    {
        return -1;
    }
    if (read(VAR5->VAR18, &VAR12, 1) != 1)
        return -1;
    if (!((VAR12 >> (VAR9 % 8)) & 1))
    {
        return -1;
    }
    if (FUN2(VAR5->VAR18, VAR11, VAR19) == (VAR20)-1)
    {
        return -1;
    }
    return 0;
}