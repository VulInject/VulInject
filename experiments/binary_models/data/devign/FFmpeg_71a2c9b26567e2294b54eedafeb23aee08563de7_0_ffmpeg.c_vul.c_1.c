static void FUN1(void)
{
    if (!VAR1)
    {
        struct termios VAR2;
        FUN2(0, &VAR2);
        VAR3 = VAR2;
        FUN3(VAR4);
        VAR2.VAR5 &= ~(VAR6 | VAR7 | VAR8 | VAR9 | VAR10 | VAR11 | VAR12 | VAR13);
        VAR2.VAR14 |= VAR15;
        VAR2.VAR16 &= ~(VAR17 | VAR18 | VAR19 | VAR20);
        VAR2.VAR21 &= ~(VAR22 | VAR23);
        VAR2.VAR21 |= VAR24;
        VAR2.VAR25[VAR26] = 1;
        VAR2.VAR25[VAR27] = 0;
        FUN4(0, VAR28, &VAR2);
        signal(VAR29, VAR30);
    }
    FUN5();
    signal(VAR31, VAR30);
    signal(VAR32, VAR30);
    signal(VAR33, VAR30);
}