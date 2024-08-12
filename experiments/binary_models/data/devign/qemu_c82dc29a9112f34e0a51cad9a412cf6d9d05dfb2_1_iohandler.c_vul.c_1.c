static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    if (VAR7->VAR5 == NULL)
    {
        return VAR8;
    }
    if ((VAR4 & VAR9) && VAR7->VAR10)
    {
        VAR7->FUN2(VAR7->VAR5);
    }
    if ((VAR4 & VAR11) && VAR7->VAR12)
    {
        VAR7->FUN3(VAR7->VAR5);
    }
    return VAR13;
}