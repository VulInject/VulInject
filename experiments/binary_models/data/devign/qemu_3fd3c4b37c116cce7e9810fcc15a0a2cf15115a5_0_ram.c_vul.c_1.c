static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, ram_addr_t VAR7, bool VAR8, VAR9 *VAR10, ram_addr_t VAR11)
{
    int VAR12 = 0;
    if (FUN2(VAR11))
    {
        unsigned long *VAR13;
        if (VAR14 && FUN3())
        {
            VAR12 = FUN4(VAR4, VAR6, VAR7, VAR8, VAR10);
        }
        else
        {
            VAR12 = FUN5(VAR4, VAR6, VAR7, VAR8, VAR10);
        }
        if (VAR12 < 0)
        {
            return VAR12;
        }
        VAR13 = FUN6(&VAR15)->VAR13;
        if (VAR13)
        {
            FUN7(VAR11 >> VAR16, VAR13);
        }
        VAR17 = VAR6;
    }
    return VAR12;
}