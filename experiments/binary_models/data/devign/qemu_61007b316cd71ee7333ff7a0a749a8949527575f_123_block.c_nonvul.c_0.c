static void FUN1(VAR1 *VAR2, BlockErrorAction VAR3, bool VAR4, int VAR5)
{
    IoOperationType VAR6;
    VAR6 = VAR4 ? VAR7 : VAR8;
    FUN2(FUN3(VAR2), VAR6, VAR3, FUN4(VAR2), VAR5 == VAR9, strerror(VAR5), &VAR10);
}