static void FUN1(void)
{
    struct termios VAR1;
    FUN2(0, &VAR1);
    VAR2 = VAR1;
    VAR1.VAR3 &= ~(VAR4 | VAR5 | VAR6 | VAR7 | VAR8 | VAR9 | VAR10 | VAR11);
    VAR1.VAR12 |= VAR13;
    VAR1.VAR14 &= ~(VAR15 | VAR16 | VAR17 | VAR18);
    VAR1.VAR19 &= ~(VAR20 | VAR21);
    VAR1.VAR19 |= VAR22;
    VAR1.VAR23[VAR24] = 1;
    VAR1.VAR23[VAR25] = 0;
    FUN3(0, VAR26, &VAR1);
    FUN4(VAR27);
}