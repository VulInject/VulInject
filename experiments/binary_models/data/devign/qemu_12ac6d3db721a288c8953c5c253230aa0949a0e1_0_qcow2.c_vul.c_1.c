static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, uint64_t VAR7)
{
    while (VAR6 && VAR6->VAR8[0] != '')
    {
        if (VAR6->VAR9 == VAR10)
        {
            if (VAR7 & (1 << VAR6->VAR11))
            {
                FUN2(VAR2, VAR4, "", VAR6->VAR8);
                VAR7 &= ~(1 << VAR6->VAR11);
            }
        }
        VAR6++;
    }
    if (VAR7)
    {
        FUN2(VAR2, VAR4, "" VAR12, VAR7);
    }
}