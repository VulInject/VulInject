static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    if (VAR3 >= 0)
    {
        if (VAR3 >= VAR2->VAR14)
            return FUN2(VAR15);
        FUN3(VAR2->VAR16[VAR3]->VAR17, VAR18, &VAR4, &VAR5, &VAR6);
    }
    VAR12 = 0;
    VAR13 = VAR9->VAR19;
    while (VAR13 - VAR12 > 1)
    {
        int VAR20 = (VAR12 + VAR13) / 2;
        if (VAR5 < VAR9->VAR21[VAR20].VAR22)
            VAR13 = VAR20;
        else
            VAR12 = VAR20;
    }
    if ((VAR11 = FUN4(VAR2, VAR12)) < 0)
        return VAR11;
    VAR11 = FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    if (VAR11 < 0 && VAR12 < VAR9->VAR19 - 1 && VAR9->VAR21[VAR12 + 1].VAR22 < VAR6)
    {
        if ((VAR11 = FUN4(VAR2, VAR12 + 1)) < 0)
            return VAR11;
        VAR11 = FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    }
    return VAR11;
}