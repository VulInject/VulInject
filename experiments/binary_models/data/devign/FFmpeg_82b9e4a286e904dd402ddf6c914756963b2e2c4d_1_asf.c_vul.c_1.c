static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    AVPacket VAR10, *VAR11;
    int VAR12;
    int64_t VAR13;
    int64_t VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR11 = &VAR10;
    if (VAR4 < 0)
        VAR4 = 0;
    if (VAR3 == -1)
        VAR3 = FUN2(VAR2);
    VAR9 = VAR2->VAR19[VAR3];
    VAR12 = VAR6->VAR20;
    if (VAR12 <= 0)
        return -1;
    VAR14 = 0;
    VAR16 = FUN3(VAR2, &VAR14, VAR3);
    if (VAR16 == VAR21)
        return -1;
    VAR15 = FUN4(VAR2, FUN5(FUN6(&VAR2->VAR22)) - 1 - VAR2->VAR23);
    VAR17 = VAR16 + VAR2->VAR24;
    while (VAR14 <= VAR15)
    {
        if (VAR4 <= VAR16)
        {
            VAR13 = VAR14;
            goto VAR25;
        }
        else if (VAR4 >= VAR17)
        {
            VAR13 = VAR15;
            goto VAR25;
        }
        else
        {
            VAR13 = (VAR26)((double)(VAR15 - VAR14) * (double)(VAR4 - VAR16) / (double)(VAR17 - VAR16)) + VAR14;
            VAR13 = FUN4(VAR2, VAR13);
        }
        VAR18 = FUN3(VAR2, &VAR13, VAR3);
        if (VAR4 == VAR18)
        {
            goto VAR25;
        }
        else if (VAR18 == VAR21)
        {
            return -1;
        }
        else if (VAR4 < VAR18)
        {
            VAR15 = VAR13;
            VAR17 = FUN3(VAR2, &VAR15, VAR3);
            if (VAR4 >= VAR17)
            {
                VAR13 = VAR15;
                goto VAR25;
            }
        }
        else
        {
            VAR14 = VAR13 + VAR6->VAR20;
            VAR16 = FUN3(VAR2, &VAR14, VAR3);
            if (VAR4 <= VAR16)
            {
                goto VAR25;
            }
        }
    }
    VAR13 = VAR14;
VAR25:
    FUN7(&VAR2->VAR22, VAR13 + VAR2->VAR23, VAR27);
    FUN8(VAR2);
    return 0;
}