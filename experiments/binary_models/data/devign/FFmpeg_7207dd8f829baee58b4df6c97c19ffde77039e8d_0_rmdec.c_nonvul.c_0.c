FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    assert(VAR12->VAR14 > 0);
    if (VAR8->VAR15 == VAR16 || VAR8->VAR15 == VAR17)
        FUN2(VAR4, VAR10, VAR8->VAR18[VAR8->VAR19 - VAR12->VAR14]);
    else
    {
        int VAR20 = FUN3(VAR10, VAR6->VAR21->VAR22);
        if (VAR20 < 0)
            return VAR20;
        memcpy(VAR10->VAR23, VAR8->VAR10.VAR23 + VAR6->VAR21->VAR22 * (VAR8->VAR24 * VAR8->VAR25 / VAR6->VAR21->VAR22 - VAR12->VAR14), VAR6->VAR21->VAR22);
    }
    VAR12->VAR14--;
    if ((VAR10->VAR26 = VAR8->VAR27) != VAR28)
    {
        VAR8->VAR27 = VAR28;
        VAR10->VAR29 = VAR30;
    }
    else
        VAR10->VAR29 = 0;
    VAR10->VAR31 = VAR6->VAR32;
    return VAR12->VAR14;
}