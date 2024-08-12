static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    struct VAR6 *VAR7 = VAR2->VAR8.VAR9;
    if (!VAR7)
        return VAR5;
    FUN2(&VAR2->VAR8, VAR7, VAR10);
    VAR5 = VAR7->VAR11;
    memcpy(VAR4, VAR7->VAR4, VAR7->VAR11);
    FUN3(VAR7);
    return VAR5;
}