int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8 = VAR2 ? VAR2->VAR9 : NULL;
    if (VAR8 && VAR8->VAR10 && VAR2->VAR11)
    {
        int64_t VAR12;
        if (FUN2(VAR2->VAR11, "", 0, &VAR12) >= 0 && VAR12 >= 0)
            return (int)VAR12;
    }
    for (VAR6 = 0; VAR13[VAR6].VAR14 >= 0; ++VAR6)
        if (VAR13[VAR6].VAR15 == VAR4->VAR15)
        {
            if (VAR4->VAR15 == VAR16 && (!VAR2 || !VAR2->VAR9->VAR10 || !FUN3(VAR2->VAR11, "", "")))
                continue;
            if (VAR4->VAR15 == VAR17 && VAR4->VAR18 == 16000 && VAR4->VAR19 == 1)
                return VAR13[VAR6].VAR14;
            if (VAR4->VAR20 == VAR21 && ((VAR13[VAR6].VAR22 > 0 && VAR4->VAR18 != VAR13[VAR6].VAR22) || (VAR13[VAR6].VAR23 > 0 && VAR4->VAR19 != VAR13[VAR6].VAR23)))
                continue;
            return VAR13[VAR6].VAR14;
        }
    if (VAR5 < 0)
        VAR5 = VAR4->VAR20 == VAR21;
    return VAR24 + VAR5;
}