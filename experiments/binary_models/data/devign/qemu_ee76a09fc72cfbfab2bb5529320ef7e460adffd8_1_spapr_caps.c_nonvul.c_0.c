static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    VAR8 *VAR9 = FUN3(VAR5);
    sPAPRCapabilities VAR10;
    VAR10 = VAR7->VAR11;
    if (!FUN4(VAR9, VAR12, 0, VAR3->VAR13))
    {
        VAR10.VAR14 &= ~VAR15;
    }
    return VAR10;
}