static void FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5)
{
    enum PixelFormat VAR6, VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    for (VAR6 = 0; VAR6 < VAR13; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR13; VAR7++)
        {
            int VAR14 = 0;
            FUN2("", FUN3(VAR6), FUN3(VAR7));
            FUN4(VAR15);
            VAR8 = VAR4;
            VAR9 = VAR5;
            for (VAR10 = VAR4 - VAR4 / 3; !VAR14 && VAR10 <= 4 * VAR4 / 3; VAR10 += VAR4 / 3)
                for (VAR11 = VAR5 - VAR5 / 3; !VAR14 && VAR11 <= 4 * VAR5 / 3; VAR11 += VAR5 / 3)
                    for (VAR12 = 1; !VAR14 && VAR12 < 33; VAR12 *= 2)
                        VAR14 = FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);
        }
    }
}