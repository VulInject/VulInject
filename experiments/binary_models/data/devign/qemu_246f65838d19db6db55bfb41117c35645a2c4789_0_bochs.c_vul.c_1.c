static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    int64_t VAR8 = VAR4 * 512;
    int64_t VAR9, VAR10, VAR11;
    char VAR12;
    VAR9 = VAR8 / VAR6->VAR13;
    VAR10 = (VAR8 % VAR6->VAR13) / 512;
    if (VAR6->VAR14[VAR9] == 0xffffffff)
    {
        return -1;
    }
    VAR11 = VAR6->VAR15 + (512 * VAR6->VAR14[VAR9] * (VAR6->VAR16 + VAR6->VAR17));
    if (FUN2(VAR3->VAR18, VAR11 + (VAR10 / 8), &VAR12, 1) != 1)
    {
        return -1;
    }
    if (!((VAR12 >> (VAR10 % 8)) & 1))
    {
        return -1;
    }
    return VAR11 + (512 * (VAR6->VAR17 + VAR10));
}