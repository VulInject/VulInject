void FUN1(VAR1 *VAR2, hwaddr VAR3, bool VAR4, bool VAR5, int VAR6, unsigned VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = &VAR9->VAR11;
    VAR11->VAR12 = VAR3;
    VAR11->VAR13 = VAR4 ? 1 : 0;
    VAR2->VAR14 = VAR15;
    VAR11->VAR16 = 0;
    FUN3(VAR2);
}