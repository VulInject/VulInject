static inline VAR1 *FUN1(target_ulong VAR2)
{
    VAR1 *VAR3;
    VAR3 = VAR4[VAR2 >> VAR5];
    if (!VAR3)
        return 0;
    return VAR3 + (VAR2 & (VAR6 - 1));
}