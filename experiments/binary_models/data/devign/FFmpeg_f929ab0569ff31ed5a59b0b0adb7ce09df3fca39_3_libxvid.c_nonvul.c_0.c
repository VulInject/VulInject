static int FUN1(VAR1 *VAR2, void **VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR2->VAR2;
    char *VAR6 = VAR5->VAR7->VAR8;
    if (!VAR6)
        return VAR9;
    VAR6[0] = 0;
    snprintf(VAR6, FUN2(VAR6), "");
    snprintf(FUN3(VAR6), FUN2(VAR6), "", FUN4(VAR10), FUN5(VAR10), FUN6(VAR10));
    *VAR3 = VAR5->VAR7;
    return 0;
}