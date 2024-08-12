VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, target_ulong VAR6, uint32_t VAR7, target_ulong VAR8)
{
    if ((VAR4 >= VAR9) && ((VAR4 - VAR9) < VAR10))
    {
        struct VAR11 *VAR12 = VAR13 + (VAR4 - VAR9);
        if (VAR12->VAR14)
        {
            VAR12->FUN2(VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
            FUN3("", VAR4);
            FUN4(VAR8, 0, -3);
            return VAR15