static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 **VAR5, int *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned int VAR10, VAR11;
    uint64_t VAR12;
    VAR4 *VAR13 = NULL;
    int VAR14;
    VAR10 = VAR3 >> (VAR8->VAR15 + VAR8->VAR16);
    if (VAR10 >= VAR8->VAR17)
    {
        VAR14 = FUN2(VAR2, VAR10 + 1, false);
        if (VAR14 < 0)
        {
            return VAR14;
        }
    }
    VAR12 = VAR8->VAR18[VAR10] & VAR19;
    if (VAR8->VAR18[VAR10] & VAR20)
    {
        VAR14 = FUN3(VAR2, VAR12, &VAR13);
        if (VAR14 < 0)
        {
            return VAR14;
        }
    }
    else
    {
        VAR14 = FUN4(VAR2, VAR10, &VAR13);
        if (VAR14 < 0)
        {
            return VAR14;
        }
        if (VAR12)
        {
            FUN5(VAR2, VAR12, VAR8->VAR21 * sizeof(VAR4));
        }
    }
    VAR11 = (VAR3 >> VAR8->VAR16) & (VAR8->VAR21 - 1);
    *VAR5 = VAR13;
    *VAR6 = VAR11;
    return 0;
}