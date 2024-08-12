static VAR1 FUN1(struct VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR8;
    VAR9 *VAR10 = VAR3->VAR11;
    int VAR12, VAR13;
    int64_t VAR14;
    VAR6 = FUN2(*VAR5 + VAR15 * 8, (VAR16)*VAR5 + VAR6);
    while (*VAR5 < VAR6)
    {
        VAR14 = VAR17;
        FUN3(VAR8, *VAR5, VAR18);
        VAR10->VAR19 = 0;
        if (FUN4(VAR3, &VAR14, &VAR12, &VAR13, 0))
        {
            (*VAR5)++;
            continue;
        }
        if (VAR13 - 1 != VAR4 || VAR14 == VAR17)
        {
            *VAR5 = FUN5(VAR8) + VAR12;
            continue;
        }
        break;
    }
    VAR10->VAR19 = 0;
    return VAR14;
}