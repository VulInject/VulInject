static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, bool *VAR5, VAR6 *VAR7)
{
    VAR4->VAR8 = FUN2(VAR2, VAR4->VAR9, VAR4->VAR8, VAR7);
    if (VAR4->VAR10 && VAR4->VAR9 == VAR2->VAR11 && VAR4->VAR8 >= VAR2->VAR12)
    {
        *VAR5 = false;
        return false;
    }
    if (VAR4->VAR8 >= VAR4->VAR9->VAR13)
    {
        VAR4->VAR8 = 0;
        VAR4->VAR9 = FUN3(VAR4->VAR9, VAR14);
        if (!VAR4->VAR9)
        {
            VAR4->VAR9 = FUN4(&VAR15.VAR16);
            VAR4->VAR10 = true;
            VAR2->VAR17 = false;
            if (FUN5())
            {
                FUN6(VAR2);
            }
        }
        *VAR5 = true;
        return false;
    }
    else
    {
        *VAR5 = true;
        return true;
    }
}