static VAR1 FUN1(VAR2 *VAR3, void *VAR4, size_t VAR5, const VAR6 *VAR7, size_t VAR8, VAR9 **VAR10)
{
    struct VAR11 *VAR12 = VAR4;
    ssize_t VAR13;
    VAR13 = FUN2(VAR12->VAR14, VAR5, VAR7, VAR8, 0);
    if (VAR13 < 0)
    {
        FUN3(VAR10, -VAR13, "");
        return VAR13;
    }
    return VAR13;
}