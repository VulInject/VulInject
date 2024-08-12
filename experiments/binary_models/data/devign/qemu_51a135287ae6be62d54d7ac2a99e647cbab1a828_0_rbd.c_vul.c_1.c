static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10, int write)
{
    VAR11 *VAR12;
    VAR13 *VAR14;
    rbd_completion_t VAR15;
    int64_t VAR16, VAR17;
    char *VAR18;
    VAR19 *VAR20 = VAR3->VAR10;
    VAR12 = FUN2(&VAR21, VAR3, VAR9, VAR10);
    VAR12->write = write;
    VAR12->VAR6 = VAR6;
    VAR12->VAR22 = FUN3(VAR3, VAR6->VAR17);
    VAR12->VAR23 = 0;
    VAR12->VAR24 = 0;
    VAR12->VAR20 = VAR20;
    VAR12->VAR25 = 0;
    VAR12->VAR26 = NULL;
    if (write)
    {
        FUN4(VAR12->VAR6, VAR12->VAR22);
    }
    VAR18 = VAR12->VAR22;
    VAR16 = VAR4 * VAR27;
    VAR17 = VAR7 * VAR27;
    VAR20->VAR28++;
    VAR14 = FUN5(sizeof(VAR13));
    VAR14->VAR29 = 0;
    VAR14->VAR12 = VAR12;
    VAR14->VAR18 = VAR18;
    VAR14->VAR20 = VAR12->VAR20;
    VAR14->VAR17 = VAR17;
    if (write)
    {
        FUN6(VAR14, (VAR30)VAR31, &VAR15);
        FUN7(VAR20->VAR32, VAR16, VAR17, VAR18, VAR15);
    }
    else
    {
        FUN6(VAR14, (VAR30)VAR31, &VAR15);
        FUN8(VAR20->VAR32, VAR16, VAR17, VAR18, VAR15);
    }
    return &VAR12->VAR33;
}