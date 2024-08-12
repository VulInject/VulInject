int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    VAR4 &= 1;
    VAR9->VAR10[2] = VAR3;
    VAR9->VAR11 = (VAR4 << VAR12);
    VAR9->VAR11 |= VAR13;
    VAR2->VAR14 = VAR15;
    return 1;
}