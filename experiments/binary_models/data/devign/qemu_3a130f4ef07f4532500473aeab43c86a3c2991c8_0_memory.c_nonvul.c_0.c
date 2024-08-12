static void FUN1(VAR1 *VAR2, uint64_t VAR3, unsigned VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR7, VAR2);
    if (VAR8->VAR9->VAR10)
    {
        const VAR11 *VAR12 = FUN3(VAR8, VAR3, VAR4, false);
        *VAR6 = ((VAR5)1 << (VAR4 * 8)) - 1;
        if (VAR12)
        {
            *VAR6 = VAR12->read(VAR8->VAR13, VAR3 - VAR12->VAR3);
        }
        return;
    }
    *VAR6 = 0;
    FUN4(VAR3, VAR6, VAR4, VAR8->VAR9->VAR14.VAR15, VAR8->VAR9->VAR14.VAR16, VAR17, VAR8);
}