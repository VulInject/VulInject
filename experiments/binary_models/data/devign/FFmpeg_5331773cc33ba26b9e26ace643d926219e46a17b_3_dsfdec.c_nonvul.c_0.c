static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5 = NULL;
    if (FUN2(VAR2->VAR6, VAR3, VAR7) < 0)
        return;
    FUN3(VAR2, VAR8, &VAR5, 0);
    if (VAR5)
        FUN4(VAR2, &VAR5);
    FUN5(&VAR5);
}