static VAR1 FUN1(VAR2 *VAR3, size_t VAR4, VAR5 *VAR6, size_t VAR7, void *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = VAR8;
    ssize_t VAR13;
    VAR13 = FUN2(VAR12->VAR14, VAR4, VAR6, VAR7);
    if (VAR13 < 0)
    {
        FUN3(VAR10, -VAR13, "");
        return VAR13;
    }
    return VAR13;
}