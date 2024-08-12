void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR2->VAR4 = (VAR3 >> VAR5) & 1;
    VAR2->VAR6 = (VAR3 >> VAR7) & 1;
    VAR2->VAR8 = (VAR3 >> VAR9) & 1;
    VAR2->VAR3 = VAR3 & ~((1u << VAR5) | (1u << VAR7) | (1u << VAR9));
}