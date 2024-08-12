void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    BlockdevSnapshotInternal VAR5 = {.VAR1 = (char *)VAR1, .VAR2 = (char *)VAR2};
    TransactionAction VAR6 = {
        .VAR7 = VAR8,
        .VAR9.VAR10.VAR11 = &VAR5,
    };
    FUN2(&VAR6, VAR4);
}