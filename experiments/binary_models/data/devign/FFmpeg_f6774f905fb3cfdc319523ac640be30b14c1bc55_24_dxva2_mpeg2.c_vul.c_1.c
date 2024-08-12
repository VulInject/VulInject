static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8->VAR9;
    int VAR10;
    if (VAR7->VAR11 <= 0 || VAR7->VAR12 <= 0)
        return -1;
    VAR10 = FUN2(VAR2, &VAR4->VAR8->VAR13, &VAR7->VAR14, sizeof(VAR7->VAR14), &VAR7->VAR15, sizeof(VAR7->VAR15), VAR16);
    if (!VAR10)
        FUN3(VAR4, 0, VAR2->VAR17);
    return VAR10;
}