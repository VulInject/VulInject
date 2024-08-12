static VAR1 FUN1(VAR2 *VAR3, void *VAR4, size_t VAR5, const VAR6 *VAR7, size_t VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = VAR4;
    FUN2(VAR8 + VAR5, <=, VAR12->VAR13);
    memcpy(VAR12->VAR14 + VAR5, VAR7, VAR8);
    VAR12->VAR5 = VAR5 + VAR8;
    return VAR8;
}