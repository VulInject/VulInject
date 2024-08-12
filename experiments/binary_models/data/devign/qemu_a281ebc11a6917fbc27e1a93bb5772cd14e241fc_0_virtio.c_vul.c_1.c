static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint16_t VAR5, new;
    bool VAR6;
    if (((VAR2->VAR7 & (1 << VAR8)) && !VAR4->VAR9 && FUN2(VAR4) == VAR4->VAR10))
    {
        return true;
    }
    if (!(VAR2->VAR7 & (1 << VAR11)))
    {
        return !(FUN3(VAR4) & VAR12);
    }
    VAR6 = VAR4->VAR13;
    VAR4->VAR13 = true;
    VAR5 = VAR4->VAR14;
    new = VAR4->VAR14 = FUN4(VAR4);
    return !VAR6 || FUN5(FUN6(VAR4), new, VAR5);