int FUN1(struct VAR1 *VAR2, nfds_t VAR3, int VAR4)
{
    fd_set VAR5;
    fd_set VAR6;
    fd_set VAR7;
    nfds_t VAR8;
    int VAR9;
    int VAR10;
    if (VAR3 >= VAR11)
    {
        VAR12 = VAR13;
        return -1;
    }
    FUN2(&VAR5);
    FUN2(&VAR6);
    FUN2(&VAR7);
    VAR9 = -1;
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        if (VAR2[VAR8].VAR14 < 0)
            continue;
        if (VAR2[VAR8].VAR14 >= VAR11)
        {
            VAR12 = VAR13;
            return -1;
        }
        if (VAR2[VAR8].VAR15 & VAR16)
            FUN3(VAR2[VAR8].VAR14, &VAR5);
        if (VAR2[VAR8].VAR15 & VAR17)
            FUN3(VAR2[VAR8].VAR14, &VAR6);
        if (VAR2[VAR8].VAR15 & VAR18)
            FUN3(VAR2[VAR8].VAR14, &VAR7);
        if (VAR2[VAR8].VAR14 > VAR9)
            VAR9 = VAR2[VAR8].VAR14;
    };
    if (VAR9 == -1)
        return 0;
    if (VAR4 < 0)
        VAR10 = FUN4(VAR9 + 1, &VAR5, &VAR6, &VAR7, NULL);
    else
    {
        struct timeval VAR19;
        VAR19.VAR20 = VAR4 / 1000;
        VAR19.VAR21 = 1000 * (VAR4 % 1000);
        VAR10 = FUN4(VAR9 + 1, &VAR5, &VAR6, &VAR7, &VAR19);
    };
    if (VAR10 < 0)
        return VAR10;
    for (VAR8 = 0; VAR8 < (VAR22)VAR9; VAR8++)
    {
        VAR2[VAR8].VAR23 = 0;
        if (FUN5(VAR2[VAR8].VAR14, &VAR5))
            VAR2[VAR8].VAR23 |= VAR16;
        if (FUN5(VAR2[VAR8].VAR14, &VAR6))
            VAR2[VAR8].VAR23 |= VAR17;
        if (FUN5(VAR2[VAR8].VAR14, &VAR7))
            VAR2[VAR8].VAR23 |= VAR18;
    };
    return VAR10;
}