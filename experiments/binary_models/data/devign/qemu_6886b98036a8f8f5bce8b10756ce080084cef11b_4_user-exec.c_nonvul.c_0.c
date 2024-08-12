static void FUN1(VAR1 *VAR2, void *VAR3)
{
    struct VAR4 *VAR5 = VAR3;
    struct VAR6 *VAR5 = VAR3;
    FUN2(VAR7, (VAR8 *)&VAR5->VAR9, NULL);
    FUN2(VAR7, &VAR5->VAR9, NULL);
    FUN2(VAR7, &VAR5->VAR10, NULL);
    FUN3(VAR2);
}