static int FUN1(VAR1 *VAR2)
{
    const void *VAR3;
    int VAR4, VAR5;
    if (!VAR2->VAR6.VAR7)
        return 1;
    VAR4 = FUN2(VAR2->VAR6.VAR8, VAR9, &VAR3);
    if (VAR4 != VAR10)
        return 0;
    VAR5 = *(const int *)VAR3;
    FUN3("", VAR5);
    if (VAR5 < 56)
        return 0;
    VAR2->VAR6.VAR11 = 1;
    return 1;
}