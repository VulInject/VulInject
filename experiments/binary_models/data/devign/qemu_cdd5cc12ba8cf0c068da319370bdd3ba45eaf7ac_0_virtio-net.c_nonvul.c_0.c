static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    struct VAR10 *VAR11 = NULL;
    size_t VAR12, VAR13, VAR14;
    if (!FUN2(VAR8->VAR3))
        return -1;
    if (!FUN3(VAR8, VAR6))
        return 0;
    if (!FUN4(VAR8, VAR5, VAR6))
        return VAR6;
    VAR12 = VAR8->VAR15 ? sizeof(struct VAR10) : sizeof(struct VAR16);
    VAR13 = VAR14 = 0;
    while (VAR13 < VAR6)
    {
        VirtQueueElement VAR17;
        int VAR18, VAR19;
        struct iovec VAR20[VAR21];
        VAR18 = VAR19 = 0;
        if ((VAR14 != 0 && !VAR8->VAR15) || FUN5(VAR8->VAR22, &VAR17) == 0)
        {
            if (VAR14 == 0)
                return -1;
            fprintf(VAR23, "");
            FUN6(1);
        }
        if (VAR17.VAR24 < 1)
        {
            fprintf(VAR23, "");
            FUN6(1);
        }
        if (!VAR8->VAR15 && VAR17.VAR25[0].VAR26 != VAR12)
        {
            fprintf(VAR23, "");
            FUN6(1);
        }
        memcpy(&VAR20, &VAR17.VAR25[0], sizeof(VAR20[0]) * VAR17.VAR24);
        if (VAR14 == 0)
        {
            if (VAR8->VAR15)
                VAR11 = (struct VAR10 *)VAR20[0].VAR27;
            VAR13 += FUN7(VAR8, VAR20, VAR17.VAR24, VAR5 + VAR13, VAR6 - VAR13, VAR12);
            VAR19 += VAR12;
        }
        VAR18 = FUN8(VAR20, VAR17.VAR24, VAR5 + VAR13, VAR6 - VAR13);
        VAR19 += VAR18;
        FUN9(VAR8->VAR22, &VAR17, VAR19, VAR14++);
        VAR13 += VAR18;
    }
    if (VAR11)
        VAR11->VAR28 = VAR14;
    FUN10(VAR8->VAR22, VAR14);
    FUN11(&VAR8->VAR29, VAR8->VAR22);
    return VAR6;
}