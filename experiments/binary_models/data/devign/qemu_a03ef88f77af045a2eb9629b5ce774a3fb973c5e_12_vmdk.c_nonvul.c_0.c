FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    uint64_t VAR12, VAR13;
    VAR14 *VAR15 = NULL;
    QEMUIOVector VAR16;
    uint64_t VAR17;
    uint64_t VAR18 = 0;
    FUN2(&VAR16, VAR6->VAR19);
    FUN3(&VAR9->VAR20);
    while (VAR4 > 0)
    {
        VAR15 = FUN4(VAR9, VAR3 >> VAR21, VAR15);
        if (!VAR15)
        {
            VAR11 = -VAR22;
            goto VAR23;
        }
        VAR11 = FUN5(VAR2, VAR15, NULL, VAR3, false, &VAR17, 0, 0);
        VAR13 = FUN6(VAR15, VAR3);
        VAR12 = FUN7(VAR4, VAR15->VAR24 * VAR25 - VAR13);
        if (VAR11 != VAR26)
        {
            if (VAR2->VAR27 && VAR11 != VAR28)
            {
                if (!FUN8(VAR2))
                {
                    VAR11 = -VAR29;
                    goto VAR23;
                }
                FUN9(&VAR16);
                FUN10(&VAR16, VAR6, VAR18, VAR12);
                VAR11 = FUN11(VAR2->VAR27, VAR3, VAR12, &VAR16, 0);
                if (VAR11 < 0)
                {
                    goto VAR23;
                }
            }
            else
            {
                FUN12(VAR6, VAR18, 0, VAR12);
            }
        }
        else
        {
            FUN9(&VAR16);
            FUN10(&VAR16, VAR6, VAR18, VAR12);
            VAR11 = FUN13(VAR15, VAR17, VAR13, &VAR16, VAR12);
            if (VAR11)
            {
                goto VAR23;
            }
        }
        VAR4 -= VAR12;
        VAR3 += VAR12;
        VAR18 += VAR12;
    }
    VAR11 = 0;
VAR23:
    FUN14(&VAR9->VAR20);
    FUN15(&VAR16);
    return VAR11;
}