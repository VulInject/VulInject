static int FUN1(VAR1 *cin, VAR2 *VAR3)
{
    VAR4 *VAR5 = &cin->VAR6;
    VAR5->VAR7 = FUN2(VAR3);
    VAR5->VAR8 = FUN2(VAR3);
    VAR5->VAR9 = FUN3(VAR3);
    VAR5->VAR10 = FUN4(VAR3);
    VAR5->VAR11 = FUN4(VAR3);
    if (VAR3->VAR12 || VAR3->VAR13)
        return FUN5(VAR14);
    if (FUN4(VAR3) != 0xAA55AA55)
        return 0;