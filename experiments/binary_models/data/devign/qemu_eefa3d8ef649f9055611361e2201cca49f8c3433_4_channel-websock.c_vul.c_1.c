FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    GIOCondition VAR7 = 0;
    *VAR4 = -1;
    if (VAR6->VAR8->VAR9.VAR10)
    {
        VAR7 |= VAR11;
    }
    if (VAR6->VAR8->VAR12.VAR10 < VAR13)
    {
        VAR7 |= VAR14;
    }
    return VAR7 & VAR6->VAR15;
}