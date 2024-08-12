static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if ((VAR2->VAR5[VAR6] & VAR7) || !(VAR2->VAR5[VAR6] & VAR8))
    {
        return;
    }
    if (VAR2->VAR9)
    {
        uint32_t VAR10 = (VAR11 + VAR2->VAR12 - VAR2->VAR9) % VAR11;
        *VAR4 = VAR2->VAR13[VAR10];
        VAR2->VAR9--;
        if (VAR2->VAR14)
        {
            FUN2(VAR2->VAR14);
        }
    }
    else
    {
        *VAR4 = 0;
    }
    FUN3(VAR2);
}