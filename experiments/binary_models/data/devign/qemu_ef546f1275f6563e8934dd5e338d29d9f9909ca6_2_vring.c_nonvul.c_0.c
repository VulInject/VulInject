bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint16_t VAR5, new;
    bool VAR6;
    FUN2();
    if (FUN3(VAR2, VAR7) && FUN4(!FUN5(VAR2, VAR4)))
    {
        return true;
    }
    if (!FUN3(VAR2, VAR8))
    {
        return !(FUN6(VAR2, VAR4) & VAR9);
    }
    VAR5 = VAR4->VAR10;
    VAR6 = VAR4->VAR11;
    new = VAR4->VAR10 = VAR4->VAR12;
    VAR4->VAR11 = true;
    if (FUN4(!VAR6))
    {
        return true;
    }
    return FUN7(FUN8(&VAR4->VAR13), new, VAR5);
}