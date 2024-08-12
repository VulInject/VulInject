static void FUN1(VAR1 *VAR2)
{
    if ((VAR2->VAR3 & (VAR4 | VAR5)) == (VAR4 | VAR5))
    {
        uint32_t VAR6 = FUN2(VAR2);
        uint64_t VAR7;
        if (VAR6 > VAR2->VAR8)
        {
            VAR7 = VAR6 - VAR2->VAR8;
        }
        else
        {
            VAR7 = VAR6 - VAR2->VAR8 + ((VAR2->VAR3 & VAR9) ? VAR10 : VAR2->VAR11);
        }
        FUN3(VAR2->VAR12, VAR7);
    }
}