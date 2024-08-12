VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12 = VAR3->VAR12;
    VAR1 *VAR13;
    if (!VAR12)
        return NULL;
    VAR13 = VAR12->FUN1(VAR3, VAR4, VAR6, VAR7, VAR9, VAR10);
    if (VAR13)
    {
        VAR3->VAR14 += (unsigned)VAR7 * VAR15;
        VAR3->VAR16++;
    }
    return VAR13;
}