int FUN1(VAR1 *VAR2, int64_t VAR3, void *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    if (!VAR7)
        return -VAR8;
    if (!VAR7->VAR9)
        return FUN2(VAR2, VAR3, VAR4, VAR5);
    return VAR7->FUN1(VAR2, VAR3, VAR4, VAR5);