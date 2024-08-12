static int FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5, hwaddr VAR6, hwaddr VAR7, hwaddr VAR8, hwaddr VAR9)
{
    VAR10 *VAR11 = FUN2(VAR10, 1);
    VAR11->VAR2 = VAR2;
    VAR11->VAR4 = *VAR4;
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR11->VAR8 = VAR8;
    VAR11->VAR9 = VAR9;
    FUN3(VAR12, VAR11);
    return FUN4(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, true);
}