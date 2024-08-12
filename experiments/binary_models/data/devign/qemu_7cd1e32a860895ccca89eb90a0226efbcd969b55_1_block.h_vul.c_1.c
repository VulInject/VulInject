int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!VAR2->VAR8)
        return -VAR9;
    if (VAR2->VAR10)
        return -VAR11;
    if (FUN2(VAR2, VAR3, VAR6))
        return -VAR12;
    return VAR8->FUN1(VAR2, VAR3, VAR5, VAR6);
}