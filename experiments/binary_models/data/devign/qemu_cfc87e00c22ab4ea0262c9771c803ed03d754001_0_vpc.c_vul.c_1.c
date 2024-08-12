FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int64_t VAR12;
    int64_t VAR13;
    int64_t VAR14 = 0;
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
        VAR12 = FUN6(VAR2, VAR3, false);
        VAR13 = FUN7(VAR4, VAR9->VAR24 - (VAR3 % VAR9->VAR24));
        if (VAR12 == -1)
        {
            FUN8(VAR6, VAR14, 0, VAR13);
        }
        else
        {
            FUN9(&VAR18);
            FUN10(&VAR18, VAR6, VAR14, VAR13);
            VAR11 = FUN3(VAR2->VAR21, VAR12, VAR13, &VAR18, 0);
            if (VAR11 < 0)
            {
                goto VAR25;
            }
        }
        VAR4 -= VAR13;
        VAR3 += VAR13;
        VAR14 += VAR13;
    }
    VAR11 = 0;
VAR25:
    FUN11(&VAR18);
    FUN12(&VAR9->VAR22);
    return VAR11;
}