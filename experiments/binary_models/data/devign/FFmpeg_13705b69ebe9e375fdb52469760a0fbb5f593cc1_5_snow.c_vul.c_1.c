static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR8;
    int VAR9 = FUN2(VAR8 - 1, VAR6 - 1);
    int VAR10 = FUN2(VAR8, VAR6 - 1);
    int VAR11 = FUN2(VAR8 + 1, VAR6 - 1);
    int VAR12 = FUN2(VAR8 + 2, VAR6 - 1);
    VAR13 *VAR14 = VAR2->VAR14;
    VAR13 *VAR15 = VAR2->VAR15;
    VAR13 *VAR16 = FUN3(VAR4, VAR11 * VAR7);
    VAR13 *VAR17 = FUN3(VAR4, VAR12 * VAR7);
    {
        START_TIMER if (VAR10 <= VAR12) FUN4(VAR15, VAR16, VAR17, VAR5);
        if (VAR9 <= VAR11)
            FUN5(VAR14, VAR15, VAR16, VAR5);
        FUN6("")
    }
    {
        START_TIMER if (VAR8 - 1 >= 0) FUN7(VAR14, VAR5);
        if (VAR9 <= VAR11)
            FUN7(VAR15, VAR5);
        FUN6("")
    }
    VAR2->VAR14 = VAR16;
    VAR2->VAR15 = VAR17;
    VAR2->VAR8 += 2;
}