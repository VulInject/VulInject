static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, ram_addr_t VAR6)
{
    int VAR7 = 0;
    if (FUN2(VAR2, VAR6))
    {
        unsigned long *VAR8;
        if (FUN3() && (VAR2->VAR9 || !FUN4()))
        {
            VAR7 = FUN5(VAR2, VAR4, VAR5);
        }
        else
        {
            VAR7 = FUN6(VAR2, VAR4, VAR5);
        }
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR8 = FUN7(&VAR2->VAR10)->VAR8;
        if (VAR8)
        {
            FUN8(VAR6 >> VAR11, VAR8);
        }
    }
    return VAR7;
}