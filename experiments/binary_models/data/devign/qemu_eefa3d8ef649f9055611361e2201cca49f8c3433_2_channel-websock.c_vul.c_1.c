FUN1(VAR1 *VAR2, GSourceFunc VAR3, gpointer VAR4)
{
    QIOChannelFunc VAR5 = (VAR6)VAR3;
    VAR7 *VAR8 = (VAR7 *)VAR2;
    GIOCondition VAR9 = 0;
    if (VAR8->VAR10->VAR11.VAR12)
    {
        VAR9 |= VAR13;
    }
    if (VAR8->VAR10->VAR14.VAR12 < VAR15)
    {
        VAR9 |= VAR16;
    }
    return (*VAR5)(FUN2(VAR8->VAR10), (VAR9 & VAR8->VAR17), VAR4);
}