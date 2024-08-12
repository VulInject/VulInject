static int FUN1(VAR1 *VAR2)
{
    uint64_t VAR3;
    uint64_t VAR4;
    uint64_t VAR5 = 0;
    int VAR6;
    int VAR7;
    VAR8 *VAR9;
    VAR3 = FUN2(VAR2) >> VAR10;
    VAR4 = 0;
    while (VAR3)
    {
        VAR6 = FUN3(VAR3, VAR11 >> VAR10);
        VAR7 = FUN4(VAR2, VAR4, &VAR6, &VAR5, &VAR9);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        if (VAR9 != NULL)
        {
            VAR7 = FUN5(VAR2, VAR9);
            if (VAR7 < 0)
            {
                FUN6(VAR2, VAR9->VAR12, VAR9->VAR13, VAR14);
                return VAR7;
            }
            FUN7(VAR9, VAR15);
        }
        VAR3 -= VAR6;
        VAR4 += VAR6 << VAR10;
    }
    if (VAR5 != 0)
    {
        uint8_t VAR16[VAR17];
        memset(VAR16, 0, VAR17);
        VAR7 = FUN8(VAR2->VAR18, (VAR5 >> VAR10) + VAR6 - 1, VAR16, 1);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    return 0;
}