FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    GIOCondition VAR5 = 0;
    if (VAR4->VAR6->VAR7.VAR8)
    {
        VAR5 |= VAR9;
    }
    if (VAR4->VAR6->VAR10.VAR8 < VAR11)
    {
        VAR5 |= VAR12;
    }
    return VAR5 & VAR4->VAR13;
}