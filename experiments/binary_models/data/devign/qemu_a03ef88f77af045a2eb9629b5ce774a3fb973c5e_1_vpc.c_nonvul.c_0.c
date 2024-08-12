FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11;
    int64_t VAR12;
    int64_t VAR13 = 0;
    int VAR14;
    VAR15 *VAR16 = (VAR15 *)VAR9->VAR17;
    QEMUIOVector VAR18;
    if (FUN2(VAR16->VAR19) == VAR20)
    {
        return FUN3(VAR2->VAR21, VAR3, VAR4, VAR6, 0);
    }
    FUN4(&VAR9->VAR22);
    FUN5(&VAR18, VAR6->VAR23);
    while (VAR4 > 0)
    {
        VAR11 = FUN6(VAR2, VAR3, true);
        VAR12 = FUN7(VAR4, VAR9->VAR24 - (VAR3 % VAR9->VAR24));
        if (VAR11 == -1)
        {
            VAR11 = FUN8(VAR2, VAR3);
            if (VAR11 < 0)
            {
                VAR14 = VAR11;
                goto VAR25;
            }
        }
        FUN9(&VAR18);
        FUN10(&VAR18, VAR6, VAR13, VAR12);
        VAR14 = FUN3(VAR2->VAR21, VAR11, VAR12, &VAR18, 0);
        if (VAR14 < 0)
        {
            goto VAR25;
        }
        VAR4 -= VAR12;
        VAR3 += VAR12;
        VAR13 += VAR12;
    }
    VAR14 = 0;
VAR25:
    FUN11(&VAR18);
    FUN12(&VAR9->VAR22);
    return VAR14;
}