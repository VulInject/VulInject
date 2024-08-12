static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    uint32_t VAR5 = VAR2->VAR6 & ~(VAR2->VAR7 | VAR8);
    if (FUN2(VAR4))
    {
        if (VAR5)
        {
            FUN3(VAR2);
            FUN4(VAR4, 0);
        }
    }
    FUN5(VAR2, !!VAR5);
    FUN6(VAR4, !!VAR5);
}