static void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = VAR2->VAR4 = VAR5;
    VAR2->VAR6 = 1;
    FUN2(VAR2);
    VAR2->VAR7 = -1;
    if (VAR2->VAR8.VAR9)
        VAR2->VAR8.VAR9->VAR10.VAR11 = 0;
    VAR2->VAR8.VAR12 = 0;
    memset(VAR2->VAR13[0], 0, sizeof(VAR2->VAR13[0]));
    memset(VAR2->VAR13[1], 0, sizeof(VAR2->VAR13[1]));
    memset(VAR2->VAR14[0], 0, sizeof(VAR2->VAR14[0]));
    memset(VAR2->VAR14[1], 0, sizeof(VAR2->VAR14[1]));
    FUN3(VAR2);
    VAR2->VAR15 = -1;
    VAR2->VAR16 = 0;
    VAR2->VAR17 = 0;
    VAR2->VAR18 = 0;
}