static VAR1 FUN1(gpointer VAR2, gpointer VAR3, gpointer VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR3;
    VAR7 *VAR8 = (VAR7 *)VAR4;
    uint64_t VAR9 = (VAR8->VAR10 >> VAR11) & VAR8->VAR12;
    uint64_t VAR13 = (VAR8->VAR10 & VAR6->VAR12) >> VAR11;
    return (VAR6->VAR14 == VAR8->VAR14) && (((VAR6->VAR9 & VAR8->VAR12) == VAR9) || (VAR6->VAR9 == VAR13));
}