static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = (VAR7 *)VAR3;
    int VAR9;
    if (VAR4 != 1)
        VAR8->VAR10 = FUN3(VAR2);
    VAR8->VAR11 = FUN3(VAR2);
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        VAR8->VAR12[VAR9] = FUN3(VAR2);
    for (VAR9 = 0; VAR9 < 5; VAR9++)
        VAR8->VAR13[VAR9] = FUN3(VAR2);
    VAR8->VAR14 = FUN3(VAR2);
    VAR8->VAR15 = FUN3(VAR2);
    VAR8->VAR16 = FUN3(VAR2);
    VAR6->VAR17 = FUN3(VAR2);
    return 0;