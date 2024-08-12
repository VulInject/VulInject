static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int64_t VAR6, CoroutineEntry VAR7, BdrvRequestFlags VAR8)
{
    VAR9 *VAR10;
    QEMUIOVector VAR11;
    struct iovec VAR12;
    VAR13 *VAR14;
    BlkRwCo VAR15;
    VAR12 = (struct VAR16){
        .VAR17 = VAR5,
        .VAR18 = VAR6,
    };
    FUN2(&VAR11, &VAR12, 1);
    VAR15 = (VAR19){
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR11 = &VAR11,
        .VAR8 = VAR8,
        .VAR20 = VAR21,
    };
    VAR14 = FUN3(VAR7);
    FUN4(VAR14, &VAR15);
    VAR10 = FUN5(VAR2);
    while (VAR15.VAR20 == VAR21)
    {
        FUN6(VAR10, true);
    }
    return VAR15.VAR20;
}