static void FUN1(VAR1 *VAR2, uint32_t VAR3, unsigned VAR4, unsigned *VAR5, unsigned *VAR6)
{
    unsigned VAR7 = FUN2(VAR3);
    bool VAR8, VAR9;
    if (!VAR7)
    {
        return;
    }
    VAR8 = (VAR2->VAR10 & VAR11) && (VAR7 == FUN2(VAR12));
    VAR9 = (VAR2->VAR10 & VAR13) && ((VAR7 == FUN2(VAR14)) || (VAR7 == FUN2(VAR15)));
    if (VAR8 || VAR9)
    {
        if (!VAR4)
        {
            if (*VAR5 <= VAR7)
            {
                *VAR5 = VAR7;
                *VAR6 = VAR3;
            }
        }
        else if (VAR4 >= VAR7)
        {
            *VAR5 = VAR7;
            *VAR6 = VAR3;
        }
    }
}