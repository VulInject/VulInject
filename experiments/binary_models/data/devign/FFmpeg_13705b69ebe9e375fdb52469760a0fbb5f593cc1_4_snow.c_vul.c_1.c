static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR8;
    VAR3 *VAR9 = VAR2->VAR9;
    VAR3 *VAR10 = VAR2->VAR10;
    VAR3 *VAR11 = VAR4 + FUN2(VAR8 + 1, VAR6 - 1) * VAR7;
    VAR3 *VAR12 = VAR4 + FUN2(VAR8 + 2, VAR6 - 1) * VAR7;
    {
        START_TIMER if (VAR10 <= VAR12) FUN3(VAR10, VAR11, VAR12, VAR5);
        if (VAR9 <= VAR11)
            FUN4(VAR9, VAR10, VAR11, VAR5);
        FUN5("")
    }
    {
        START_TIMER if (VAR8 - 1 >= 0) FUN6(VAR9, VAR5);
        if (VAR9 <= VAR11)
            FUN6(VAR10, VAR5);
        FUN5("")
    }
    VAR2->VAR9 = VAR11;
    VAR2->VAR10 = VAR12;
    VAR2->VAR8 += 2;
}