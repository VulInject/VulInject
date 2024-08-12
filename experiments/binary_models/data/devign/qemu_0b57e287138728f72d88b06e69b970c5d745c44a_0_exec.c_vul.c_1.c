void FUN1(target_phys_addr_t VAR1, const VAR2 *VAR3, int VAR4)
{
    int VAR5;
    VAR2 *VAR6;
    target_phys_addr_t VAR7;
    VAR8 *VAR9;
    while (VAR4 > 0)
    {
        VAR7 = VAR1 & VAR10;
        VAR5 = (VAR7 + VAR11) - VAR1;
        if (VAR5 > VAR4)
            VAR5 = VAR4;
        VAR9 = FUN2(VAR7 >> VAR12);
        if (!(FUN3(VAR9->VAR13) || FUN4(VAR9->VAR13)))
        {
        }
        else
        {
            unsigned long VAR14;
            VAR14 = FUN5(VAR9->VAR13) + FUN6(VAR9, VAR1);
            VAR6 = FUN7(VAR14);
            memcpy(VAR6, VAR3, VAR5);
            FUN8(VAR6);
            VAR4 -= VAR5;
            VAR3 += VAR5;
            VAR1 += VAR5;