static int FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (!(VAR6->VAR8 = FUN2(&VAR9, NULL)))
        return -1;
    if (FUN3(VAR6->VAR8, NULL, VAR2))
        goto VAR10;
    if (!VAR3)
        return 0;
    return FUN4(VAR2, VAR3, NULL, NULL);
VAR10:
    FUN5(VAR6->VAR8);
    return -1;
}