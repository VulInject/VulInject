static VAR1 FUN1(VAR2 *VAR3, size_t VAR4, VAR5 *VAR6, size_t VAR7, void *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = VAR8;
    FUN2(VAR4 + VAR7, <=, VAR12->VAR13);
    memcpy(VAR6, VAR12->VAR14 + VAR4, VAR7);
    return VAR7;
}