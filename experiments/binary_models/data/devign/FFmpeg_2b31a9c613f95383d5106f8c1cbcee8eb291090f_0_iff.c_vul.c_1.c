static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[0];
    int VAR13;
    int64_t VAR14 = FUN2(VAR9);
    if (VAR14 >= VAR6->VAR15)
        return VAR16;
    if (VAR11->VAR17->VAR18 == VAR19)
    {
        if (VAR11->VAR17->VAR20 == VAR21)
        {
            VAR13 = FUN3(VAR9, VAR4, FUN4(VAR6->VAR15 - VAR14, 1024 * VAR11->VAR17->VAR22));
        }
        else
        {
            VAR13 = FUN3(VAR9, VAR4, VAR6->VAR23);
        }
    }
    else if (VAR11->VAR17->VAR18 == VAR24)
    {
        VAR25 *VAR26;
        if (FUN5(VAR4, VAR6->VAR23 + 2) < 0)
        {
            return FUN6(VAR27);
        }
        VAR26 = VAR4->VAR28;
        FUN7(&VAR26, 2);
        VAR13 = FUN8(VAR9, VAR26, VAR6->VAR23);
    }
    else
    {
        FUN9(0);
    }
    if (VAR14 == VAR6->VAR29)
        VAR4->VAR30 |= VAR31;
    if (VAR13 < 0)
        return VAR13;
    VAR4->VAR32 = 0;
    return VAR13;