static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned VAR6 = VAR4->VAR7 - VAR4->VAR8;
    if (VAR4->VAR7->VAR9 == VAR10)
    {
        if (VAR4->VAR2->VAR9 > 0 || VAR4->VAR7->VAR11 == VAR10)
        {
            VAR4->VAR7->VAR9 = VAR4->VAR2->VAR9;
        }
        else
        {
            VAR4->VAR7->VAR9 = VAR4->VAR7->VAR11;
        }
        VAR4->VAR7->VAR9 -= (VAR4->VAR7->VAR12 - VAR4->VAR7->VAR13);
    }
    if (++VAR6 >= VAR4->VAR14)
    {
        VAR4->VAR15 = 1;
        return VAR16;
    }
    return FUN2(VAR2, VAR6);
}