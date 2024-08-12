static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int *VAR7, size_t VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = FUN2(VAR3);
    size_t VAR13;
    ssize_t VAR14 = 0;
    ssize_t VAR15;
    if (VAR12->VAR16)
    {
        FUN3(VAR10, FUN4(VAR12->VAR16));
        return -1;
    }
    if (VAR12->VAR17)
    {
        FUN5(VAR10, "", "");
        return -1;
    }
    for (VAR13 = 0; VAR13 < VAR6; VAR13++)
    {
        size_t VAR18 = VAR5[VAR13].VAR19;
        if ((VAR18 + VAR12->VAR20.VAR21) > VAR22)
        {
            VAR18 = (VAR22 - VAR12->VAR20.VAR21);
        }
        if (VAR18 == 0)
        {
            goto VAR14;
        }
        FUN6(&VAR12->VAR20, VAR18);
        FUN7(&VAR12->VAR20, VAR5[VAR13].VAR23, VAR18);
        VAR14 += VAR18;
        if (VAR18 < VAR5[VAR13].VAR19)
        {
            break;
        }
    }
VAR14:
    VAR15 = FUN8(VAR12, VAR10);
    if (VAR15 < 0 && VAR15 != VAR24)
    {
        FUN9(VAR12);
        return -1;
    }
    FUN10(VAR12);
    if (VAR14 == 0)
    {
        return VAR24;
    }
    return VAR14;
}