static void FUN1(struct VAR1 *VAR2)
{
    uint64_t VAR3;
    if ((VAR2->VAR4 && VAR2->VAR5) || (VAR2->VAR6 && VAR2->VAR7))
    {
        if (VAR2->VAR5)
        {
            VAR3 = VAR2->VAR5 * VAR2->VAR7;
        }
        else
        {
            VAR3 = VAR2->VAR7;
        }
    }
    else
    {
        if (VAR2->VAR8)
        {
            VAR2->VAR9 = VAR2->VAR10 * VAR2->VAR8;
        }
        else
        {
            VAR2->VAR9 = VAR2->VAR10;
        }
        VAR3 = VAR2->VAR9;
        VAR2->VAR11 = 0;
    }
    if (VAR3 > VAR12)
    {
        VAR2->VAR13 = VAR12;
    }
    else
    {
        VAR2->VAR13 = VAR3;
    }
}