static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, const VAR6 *VAR7, size_t VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12;
    if (VAR2->VAR13 >= VAR2->VAR14 && !VAR10)
    {
        return;
    }
    VAR12 = FUN2(sizeof(VAR11) + VAR8);
    VAR12->VAR4 = VAR4;
    VAR12->VAR5 = VAR5;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR10;
    memcpy(VAR12->VAR15, VAR7, VAR8);
    FUN3(&VAR2->VAR16, VAR12, VAR17);