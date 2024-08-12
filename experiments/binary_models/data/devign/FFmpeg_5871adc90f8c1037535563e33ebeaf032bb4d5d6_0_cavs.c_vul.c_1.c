void FUN1(VAR1 *VAR2, enum cavs_mv_loc VAR3, enum cavs_mv_loc VAR4, enum cavs_mv_pred VAR5, enum cavs_block VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR3];
    VAR8 *VAR11 = &VAR2->VAR10[VAR3 - 1];
    VAR8 *VAR12 = &VAR2->VAR10[VAR3 - 4];
    VAR8 *VAR13 = &VAR2->VAR10[VAR4];
    const VAR8 *VAR14 = NULL;
    VAR9->VAR7 = VAR7;
    VAR9->VAR15 = VAR2->VAR15[VAR9->VAR7];
    if (VAR13->VAR7 == VAR16 || (VAR3 == VAR17) || (VAR3 == VAR18))
        VAR13 = &VAR2->VAR10[VAR3 - 5];
    if (VAR5 == VAR19 && (VAR11->VAR7 == VAR16 || VAR12->VAR7 == VAR16 || (VAR11->VAR20 | VAR11->VAR21 | VAR11->VAR7) == 0 || (VAR12->VAR20 | VAR12->VAR21 | VAR12->VAR7) == 0))
    {
        VAR14 = &VAR22;
    }
    else if (VAR11->VAR7 >= 0 && VAR12->VAR7 < 0 && VAR13->VAR7 < 0)
    {
        VAR14 = VAR11;
    }
    else if (VAR11->VAR7 < 0 && VAR12->VAR7 >= 0 && VAR13->VAR7 < 0)
    {
        VAR14 = VAR12;
    }
    else if (VAR11->VAR7 < 0 && VAR12->VAR7 < 0 && VAR13->VAR7 >= 0)
    {
        VAR14 = VAR13;
    }
    else if (VAR5 == VAR23 && VAR11->VAR7 == VAR7)
    {
        VAR14 = VAR11;
    }
    else if (VAR5 == VAR24 && VAR12->VAR7 == VAR7)
    {
        VAR14 = VAR12;
    }
    else if (VAR5 == VAR25 && VAR13->VAR7 == VAR7)
    {
        VAR14 = VAR13;
    }
    if (VAR14)
    {
        VAR9->VAR20 = VAR14->VAR20;
        VAR9->VAR21 = VAR14->VAR21;
    }
    else
        FUN2(VAR2, VAR9, VAR11, VAR12, VAR13);
    if (VAR5 < VAR19)
    {
        VAR9->VAR20 += FUN3(&VAR2->VAR26);
        VAR9->VAR21 += FUN3(&VAR2->VAR26);
    }
    FUN4(VAR9, VAR6);
}