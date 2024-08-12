static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    uint64_t VAR8 = VAR4 * 512;
    uint64_t VAR9, VAR10, VAR11;
    char VAR12;
    int VAR13;
    VAR9 = VAR8 / VAR6->VAR14;
    VAR10 = (VAR8 % VAR6->VAR14) / 512;
    if (VAR6->VAR15[VAR9] == 0xffffffff)
    {
        return 0;
    }
    VAR11 = VAR6->VAR16 + (512 * (VAR17)VAR6->VAR15[VAR9] * (VAR6->VAR18 + VAR6->VAR19));
    VAR13 = FUN2(VAR3->VAR20, VAR11 + (VAR10 / 8), &VAR12, 1);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    if (!((VAR12 >> (VAR10 % 8)) & 1))
    {
        return 0;
    }
    return VAR11 + (512 * (VAR6->VAR19 + VAR10));
}