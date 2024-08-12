int FUN1(VAR1 *VAR2)
{
    if (FUN2())
    {
        return 0;
    }
    if (VAR2->VAR3 & (VAR4 | VAR5))
    {
        VAR2->VAR6 = 0;
    }
    if (VAR2->VAR3 & VAR7)
    {
        FUN3(VAR2);
        FUN4(VAR2);
    }
    if (VAR2->VAR3 & VAR8)
    {
        FUN3(VAR2);
        FUN5(VAR2);
    }
    return VAR2->VAR6;
}