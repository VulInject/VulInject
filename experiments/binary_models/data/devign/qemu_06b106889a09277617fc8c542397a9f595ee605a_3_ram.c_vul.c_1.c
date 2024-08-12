static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    ram_addr_t VAR9;
    bool VAR10;
    do
    {
        VAR8 = FUN2(VAR2, &VAR9, VAR6);
        if (VAR8)
        {
            unsigned long *VAR11;
            VAR11 = FUN3(&VAR2->VAR12)->VAR13;
            VAR10 = FUN4(*VAR6 >> VAR14, VAR11);
            if (!VAR10)
            {
                FUN5(VAR8->VAR15, (VAR16)VAR9, (VAR16)*VAR6, FUN4(*VAR6 >> VAR14, FUN3(&VAR2->VAR12)->VAR17));
            }
            else
            {
                FUN6(VAR8->VAR15, (VAR16)VAR9, (VAR16)*VAR6);
            }
        }
    } while (VAR8 && !VAR10);
    if (VAR8)
    {
        VAR2->VAR18 = false;
        VAR4->VAR8 = VAR8;
        VAR4->VAR9 = VAR9;
    }
    return !!VAR8;
}