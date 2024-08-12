static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[VAR4->VAR11];
    VAR12 *VAR13 = &VAR6->VAR10[VAR4->VAR11];
    int64_t VAR14 = (VAR6->VAR15 + 1) * VAR6->VAR16;
    int VAR17;
    if (VAR9->VAR18 == VAR19)
        VAR9->VAR18 = VAR4->VAR20;
    if ((!VAR6->VAR21 || VAR9->VAR22->VAR23 == VAR24) && FUN2(VAR4->VAR20 - VAR9->VAR18, VAR9->VAR25, VAR14, VAR26) >= 0 && VAR4->VAR27 & VAR28 && VAR13->VAR29)
    {
        if ((VAR17 = FUN3(VAR2, 0)) < 0)
            return VAR17;
        VAR6->VAR15++;
    }
    VAR13->VAR29++;
    return FUN4(VAR13->VAR30, 0, VAR4, VAR2);
}