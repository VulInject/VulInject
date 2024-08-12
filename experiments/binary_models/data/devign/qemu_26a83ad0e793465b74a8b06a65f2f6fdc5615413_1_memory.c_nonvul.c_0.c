static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    ram_addr_t VAR5, VAR6;
    VAR5 = VAR4->VAR7->VAR8;
    VAR6 = VAR4->VAR9;
    if ((VAR5 & ~VAR10) <= VAR11)
    {
        VAR5 += VAR6;
        VAR6 = 0;
    }
    if (!VAR4->VAR12)
    {
        VAR5 &= ~VAR10 & ~VAR13;
    }
    if (VAR4->VAR14)
    {
        VAR5 |= VAR11;
    }
    FUN2(FUN3(VAR4->VAR15.VAR16), FUN3(VAR4->VAR15.VAR17), VAR5, VAR6, VAR4->VAR18);
}