int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!VAR8)
        return -VAR9;
    if (VAR8->VAR10)
        return VAR8->FUN1(VAR2, VAR4, VAR5, VAR6);
    if (VAR2->VAR11)
        return FUN1(VAR2->VAR11, VAR4, VAR5, VAR6);
    return -VAR12;
}