static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint16_t VAR5, new;
    bool VAR6;
    FUN2();
    if (FUN3(VAR2, VAR7) && !VAR4->VAR8 && FUN4(VAR4) == VAR4->VAR9)
    {
        return true;
    }
    if (!FUN3(VAR2, VAR10))
    {
        return !(FUN5(VAR4) & VAR11);
    }
    VAR6 = VAR4->VAR12;
    VAR4->VAR12 = true;
    VAR5 = VAR4->VAR13;
    new = VAR4->VAR13 = FUN6(VAR4);
    return !VAR6 || FUN7(FUN8(VAR4), new, VAR5);
}