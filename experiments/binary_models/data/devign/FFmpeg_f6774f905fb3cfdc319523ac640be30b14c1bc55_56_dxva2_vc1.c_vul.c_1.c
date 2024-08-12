static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8.VAR9->VAR10;
    int VAR11;
    if (VAR7->VAR12 <= 0)
        return -1;
    VAR11 = FUN2(VAR2, &VAR4->VAR8.VAR9->VAR13, &VAR7->VAR14, sizeof(VAR7->VAR14), NULL, 0, VAR15);
    if (!VAR11)
        FUN3(&VAR4->VAR8, 0, VAR2->VAR16);
    return VAR11;
}