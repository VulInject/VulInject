static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int **VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13 = FUN2(VAR3);
    size_t VAR14;
    ssize_t VAR15 = 0;
    ssize_t VAR16;
    if (VAR13->VAR17)
    {
        FUN3(VAR11, FUN4(VAR13->VAR17));
        return -1;
    }
    if (!VAR13->VAR18.VAR19)
    {
        VAR16 = FUN5(FUN2(VAR3), VAR11);
        if (VAR16 < 0)
        {
            return VAR16;
        }
    }
    for (VAR14 = 0; VAR14 < VAR6; VAR14++)
    {
        size_t VAR20 = VAR5[VAR14].VAR21;
        if (VAR20 > (VAR13->VAR18.VAR19 - VAR15))
        {
            VAR20 = (VAR13->VAR18.VAR19 - VAR15);
        }
        memcpy(VAR5[VAR14].VAR22, VAR13->VAR18.VAR23 + VAR15, VAR20);
        VAR15 += VAR20;
        if (VAR20 < VAR5[VAR14].VAR21)
        {
            break;
        }
    }
    FUN6(&VAR13->VAR18, VAR15);
    FUN7(VAR13);
    return VAR15;
}