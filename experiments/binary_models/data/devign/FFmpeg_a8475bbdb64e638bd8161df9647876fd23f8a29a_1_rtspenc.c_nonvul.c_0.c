static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    struct pollfd VAR11 = {FUN2(VAR6->VAR12), VAR13, 0};
    VAR1 *VAR14;
    int VAR15;
    while (1)
    {
        VAR10 = FUN3(&VAR11, 1, 0);
        if (VAR10 <= 0)
            break;
        if (VAR11.VAR16 & VAR13)
        {
            RTSPMessageHeader VAR17;
            VAR15 = FUN4(VAR2, &VAR17, NULL, 1, NULL);
            if (VAR15 < 0)
                return FUN5(VAR18);
            if (VAR15 == 1)
                FUN6(VAR2);
            if (VAR6->VAR19 != VAR20)
                return FUN5(VAR18);
        }
    }
    if (VAR4->VAR21 < 0 || VAR4->VAR21 >= VAR6->VAR22)
        return VAR23;
    VAR9 = VAR6->VAR24[VAR4->VAR21];
    VAR14 = VAR9->VAR25;
    VAR15 = FUN7(VAR14, 0, VAR4, VAR2);
    if (!VAR15 && VAR6->VAR26 == VAR27)
        VAR15 = FUN8(VAR2, VAR9);
    return VAR15;
}