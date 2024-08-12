static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR5;
    VAR8 *VAR9;
    uint16_t VAR10 = FUN2(VAR7->VAR10);
    if (!VAR10 || FUN3(VAR3, VAR10))
    {
        return VAR11 | VAR12;
    }
    VAR9 = VAR3->VAR9[VAR10];
    if (!FUN4(&VAR9->VAR13))
    {
        return VAR14;
    }
    FUN5(VAR9, VAR3);
    return VAR15;
}