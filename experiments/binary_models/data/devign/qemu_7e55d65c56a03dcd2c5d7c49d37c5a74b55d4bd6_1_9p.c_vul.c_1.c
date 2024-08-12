static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, uint32_t VAR8, struct VAR9 *VAR10, int VAR11)
{
    int VAR12, VAR13;
    ssize_t VAR14 = 0;
    int VAR15;
    int64_t VAR16;
    size_t VAR17 = 7;
    VAR16 = VAR6->VAR18.VAR19.VAR20;
    VAR15 = VAR16 - VAR7;
    if (VAR15 > VAR8)
    {
        VAR15 = VAR8;
    }
    else if (VAR15 < 0)
    {
        VAR14 = -VAR21;
        goto VAR22;
    }
    VAR14 = FUN2(VAR4, VAR17, "", VAR15);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR14 += VAR17;
    VAR6->VAR18.VAR19.VAR23 += VAR15;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (VAR15 > VAR10[VAR12].VAR24)
        {
            VAR13 = VAR10[VAR12].VAR24;
        }
        else
        {
            VAR13 = VAR15;
        }
        memcpy((char *)VAR6->VAR18.VAR19.VAR25 + VAR7, VAR10[VAR12].VAR26, VAR13);
        VAR7 += VAR13;
        VAR15 -= VAR13;
    }
VAR22:
    return VAR14;
}