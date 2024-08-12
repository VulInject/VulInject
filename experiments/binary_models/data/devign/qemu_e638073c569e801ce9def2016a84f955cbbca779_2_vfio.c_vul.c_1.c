static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint64_t VAR7 = ((VAR1)1 << (VAR4 * 8)) - 1;
    if (FUN2(!VAR6->VAR8))
    {
        memcpy(&VAR7, VAR6->VAR8 + VAR3, (VAR3 < VAR6->VAR9) ? FUN3(VAR4, VAR6->VAR9 - VAR3) : 0);
        FUN4("" VAR10 "" VAR11 "", VAR12, VAR6->VAR13.VAR14, VAR6->VAR13.VAR15, VAR6->VAR13.VAR16, VAR6->VAR13.VAR17, VAR3, VAR4, VAR7);
        return VAR7;