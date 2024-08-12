FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint64_t VAR11 = VAR3 >> VAR12;
    int VAR13 = VAR4 >> VAR12;
    uint64_t VAR14 = 0;
    QEMUIOVector VAR15;
    int VAR16;
    assert((VAR3 & (VAR17 - 1)) == 0);
    assert((VAR4 & (VAR17 - 1)) == 0);
    FUN2(&VAR15, VAR6->VAR18);
    FUN3(&VAR9->VAR19);
    while (VAR13 > 0)
    {
        int64_t VAR20 = FUN4(VAR2, VAR11);
        if (VAR20 < 0)
        {
            VAR16 = VAR20;
            goto VAR21;
        }
        FUN5(&VAR15);
        FUN6(&VAR15, VAR6, VAR14, 512);
        if (VAR20 > 0)
        {
            VAR16 = FUN7(VAR2->VAR22, VAR20, 512, &VAR15, 0);
            if (VAR16 < 0)
            {
                goto VAR21;
            }
        }
        else
        {
            FUN8(&VAR15, 0, 0, 512);
        }
        VAR13--;
        VAR11++;
        VAR14 += 512;
    }
    VAR16 = 0;
VAR21:
    FUN9(&VAR9->VAR19);
    FUN10(&VAR15);
    return VAR16;
}