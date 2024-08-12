void FUN1(void)
{
    static int VAR1;
    if (VAR1)
        return;
    VAR1 = 1;
    FUN2(VAR2, VAR3);
    FUN3(VAR4, VAR5);
    FUN3(VAR6, VAR7);
    FUN2(VAR8, VAR9);
    FUN3(VAR10, VAR11);
    FUN3(VAR12, VAR13);
    FUN3(VAR14, VAR15);
    FUN3(VAR16, VAR17);
}