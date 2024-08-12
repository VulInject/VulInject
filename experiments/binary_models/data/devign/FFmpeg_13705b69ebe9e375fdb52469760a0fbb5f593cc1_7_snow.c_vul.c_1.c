static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6;
    VAR1 *VAR7 = VAR2 + FUN2(-2 - 1, VAR4 - 1) * VAR5;
    VAR1 *VAR8 = VAR2 + FUN2(-2, VAR4 - 1) * VAR5;
    for (VAR6 = -2; VAR6 < VAR4; VAR6 += 2)
    {
        VAR1 *VAR9 = VAR2 + FUN2(VAR6 + 1, VAR4 - 1) * VAR5;
        VAR1 *VAR10 = VAR2 + FUN2(VAR6 + 2, VAR4 - 1) * VAR5;
        {
            START_TIMER if (VAR8 <= VAR10) FUN3(VAR9, VAR3);
            if (VAR6 + 2 < VAR4)
                FUN3(VAR10, VAR3);
            FUN4("")
        }
        {
            START_TIMER if (VAR8 <= VAR10) FUN5(VAR8, VAR9, VAR10, VAR3);
            if (VAR7 <= VAR9)
                FUN6(VAR7, VAR8, VAR9, VAR3);
            FUN4("")
        }
        VAR7 = VAR9;
        VAR8 = VAR10;
    }
}