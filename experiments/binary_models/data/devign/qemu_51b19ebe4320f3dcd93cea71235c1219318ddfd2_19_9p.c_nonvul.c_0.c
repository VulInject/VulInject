static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, uint32_t VAR8)
{
    ssize_t VAR9;
    size_t VAR10 = 7;
    int VAR11;
    int64_t VAR12;
    VAR13 *VAR14 = FUN2(VAR2, VAR13, VAR15);
    VAR16 *VAR17 = VAR14->VAR18[VAR4->VAR19];
    VAR12 = VAR6->VAR20.VAR21.VAR22;
    VAR11 = VAR12 - VAR7;
    if (VAR11 > VAR8)
    {
        VAR11 = VAR8;
    }
    else if (VAR11 < 0)
    {
        VAR11 = 0;
    }
    VAR9 = FUN3(VAR4, VAR10, "", VAR11);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    VAR10 += VAR9;
    VAR9 = FUN4(VAR17->VAR23, VAR17->VAR24, VAR10, ((char *)VAR6->VAR20.VAR21.VAR25) + VAR7, VAR11);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    VAR10 += VAR9;
    return VAR10;
}