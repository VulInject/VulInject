static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    if (VAR2->VAR4)
        return;
    if (VAR2->VAR5)
    {
        if (VAR2->VAR6 > VAR2->VAR7)
            VAR2->VAR8 = VAR2->FUN2(VAR2->VAR8, VAR2->VAR7, VAR2->VAR6 - VAR2->VAR7);
        VAR2->VAR7 = VAR2->VAR9;
    }
    if (VAR2->VAR10)
        VAR3 = VAR2->FUN3(VAR2->VAR11, VAR2->VAR9, VAR2->VAR12);
    if (VAR3 <= 0)
    {
        VAR2->VAR4 = 1;
        if (VAR3 < 0)
            VAR2->VAR13 = VAR3;
    }
    else
    {
        VAR2->VAR14 += VAR3;
        VAR2->VAR15 = VAR2->VAR9;
        VAR2->VAR6 = VAR2->VAR9 + VAR3;
    }
}