void FUN1(void *VAR1, target_phys_addr_t VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    uint32_t VAR8;
    target_phys_addr_t VAR9, VAR10;
    while (VAR5 > 0)
    {
        VAR9 = VAR2 & VAR11;
        VAR7 = (VAR9 + VAR12) - VAR2;
        if (VAR7 > VAR5)
            VAR7 = VAR5;
        VAR8 = FUN2(VAR1, VAR9);
        if (!(VAR8 & VAR13))
        {
            FUN3(VAR1, VAR9, VAR6);
            return;
        }
        VAR10 = FUN4(VAR1, VAR2, VAR8);
        if (VAR6)
        {
            if (!(VAR8 & VAR14))
            {
                FUN3(VAR1, VAR9, VAR6);
                return;
            }
            FUN5(VAR10, VAR4, VAR5);
        }
        else
        {
            FUN6(VAR10, VAR4, VAR5);
        }
        VAR5 -= VAR7;
        VAR4 += VAR7;
        VAR2 += VAR7;
    }
}