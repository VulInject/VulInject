static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[32];
    VAR6 *VAR7 = FUN2(sizeof(*VAR7));
    if (VAR8)
    {
        assert(VAR2->VAR9);
    }
    VAR7->VAR10 = VAR2->VAR11++;
    VAR7->VAR4 = VAR4;
    FUN3(FUN4(VAR7->VAR4));
    FUN5(&VAR2->VAR12, VAR7, VAR13);
    snprintf(VAR5, sizeof(VAR5), "", VAR7->VAR10);
    FUN6(FUN4(VAR2), VAR5, FUN7(FUN4(VAR4)), (VAR14 **)&VAR7->VAR4, NULL);
}