static VAR1 *FUN1(unsigned int VAR2, bool VAR3, int VAR4, int *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR11 = FUN2(VAR10, 1);
    VAR7 = FUN3();
    VAR9 = FUN4(&VAR12, VAR7, 0, VAR13, VAR11, &VAR14);
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR15.VAR16 = FUN5(VAR17);
    VAR11->VAR18 = VAR9;
    VAR11->VAR5 = VAR5;
    FUN6(VAR9->VAR15.VAR16, VAR9);
    return &VAR9->VAR15;
}