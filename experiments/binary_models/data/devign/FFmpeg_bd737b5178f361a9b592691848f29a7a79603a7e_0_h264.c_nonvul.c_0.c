static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    if (!VAR2->VAR7->VAR8)
        return 0;
    memset(VAR4, 0, sizeof(*VAR4));
    VAR6 = FUN2(VAR2, VAR4);
    if (VAR6 < 0)
        return VAR6;
    VAR4->VAR9 = 0;
    return 0;
}