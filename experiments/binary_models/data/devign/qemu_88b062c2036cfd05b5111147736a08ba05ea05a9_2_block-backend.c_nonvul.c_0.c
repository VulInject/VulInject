static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int64_t VAR6, CoroutineEntry VAR7, BdrvRequestFlags VAR8)
{
    QEMUIOVector VAR9;
    struct iovec VAR10;
    VAR11 *VAR12;
    BlkRwCo VAR13;
    VAR10 = (struct VAR14){
        .VAR15 = VAR5,
        .VAR16 = VAR6,
    };
    FUN2(&VAR9, &VAR10, 1);
    VAR13 = (VAR17){
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR9 = &VAR9,
        .VAR8 = VAR8,
        .VAR18 = VAR19,
    };
    VAR12 = FUN3(VAR7, &VAR13);
    FUN4(VAR12);
    FUN5(FUN6(VAR2), VAR13.VAR18 == VAR19);
    return VAR13.VAR18;
}