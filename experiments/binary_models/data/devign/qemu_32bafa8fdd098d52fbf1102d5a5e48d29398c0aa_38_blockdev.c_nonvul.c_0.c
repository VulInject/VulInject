void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, const char *VAR5, bool VAR6, const char *VAR7, bool VAR8, const char *VAR9, bool VAR10, NewImageMode VAR11, VAR12 **VAR13)
{
    BlockdevSnapshotSync VAR14 = {
        .VAR1 = VAR1,
        .VAR2 = (char *)VAR2,
        .VAR3 = VAR3,
        .VAR4 = (char *)VAR4,
        .VAR5 = (char *)VAR5,
        .VAR6 = VAR6,
        .VAR7 = (char *)VAR7,
        .VAR8 = VAR8,
        .VAR9 = (char *)VAR9,
        .VAR10 = VAR10,
        .VAR11 = VAR11,
    };
    TransactionAction VAR15 = {
        .VAR16 = VAR17,
        .VAR18.VAR19.VAR20 = &VAR14,
    };
    FUN2(&VAR15, VAR13);
}