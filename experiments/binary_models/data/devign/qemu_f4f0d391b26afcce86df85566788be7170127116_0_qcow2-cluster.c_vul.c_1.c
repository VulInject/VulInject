static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    int VAR8;
    uint64_t VAR9;
    VAR1 *VAR10, VAR11;
    VAR9 = VAR6->VAR12[VAR4];
    VAR11 = FUN2(VAR3, VAR6->VAR13 * sizeof(VAR1));
    if (VAR11 < 0)
    {
        return NULL;
    }
    VAR6->VAR12[VAR4] = VAR11 | VAR14;
    if (FUN3(VAR6, VAR4) < 0)
    {
        return NULL;
    }
    VAR8 = FUN4(VAR3);
    VAR10 = VAR6->VAR15 + (VAR8 << VAR6->VAR16);
    if (VAR9 == 0)
    {
        memset(VAR10, 0, VAR6->VAR13 * sizeof(VAR1));
    }
    else
    {
        if (FUN5(VAR6->VAR17, VAR9, VAR10, VAR6->VAR13 * sizeof(VAR1)) != VAR6->VAR13 * sizeof(VAR1))
            return NULL;
    }
    if (FUN6(VAR6->VAR17, VAR11, VAR10, VAR6->VAR13 * sizeof(VAR1)) != VAR6->VAR13 * sizeof(VAR1))
        return NULL;
    VAR6->VAR18[VAR8] = VAR11;
    VAR6->VAR19[VAR8] = 1;
    return VAR10;
}