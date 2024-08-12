static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6;
    VAR1 *VAR7 = VAR2 + FUN2(-4 - 1, VAR4 - 1) * VAR5;
    VAR1 *VAR8 = VAR2 + FUN2(-4, VAR4 - 1) * VAR5;
    VAR1 *VAR9 = VAR2 + FUN2(-4 + 1, VAR4 - 1) * VAR5;
    VAR1 *VAR10 = VAR2 + FUN2(-4 + 2, VAR4 - 1) * VAR5;
    for (VAR6 = -4; VAR6 < VAR4; VAR6 += 2)
    {
        VAR1 *VAR11 = VAR2 + FUN2(VAR6 + 3, VAR4 - 1) * VAR5;
        VAR1 *VAR12 = VAR2 + FUN2(VAR6 + 4, VAR4 - 1) * VAR5;
        {
            START_TIMER if (VAR10 <= VAR12) FUN3(VAR11, VAR3);
            if (VAR6 + 4 < VAR4)
                FUN3(VAR12, VAR3);
            if (VAR3 > 400)
            {
                FUN4("")
            }
        }
        {
            START_TIMER if (VAR10 <= VAR12) FUN5(VAR10, VAR11, VAR12, VAR3);
            if (VAR9 <= VAR11)
                FUN6(VAR9, VAR10, VAR11, VAR3);
            if (VAR8 <= VAR10)
                FUN7(VAR8, VAR9, VAR10, VAR3);
            if (VAR7 <= VAR9)
                FUN8(VAR7, VAR8, VAR9, VAR3);
            if (VAR3 > 400)
            {
                FUN4("")
            }
        }
        VAR7 = VAR9;
        VAR8 = VAR10;
        VAR9 = VAR11;
        VAR10 = VAR12;
    }
}