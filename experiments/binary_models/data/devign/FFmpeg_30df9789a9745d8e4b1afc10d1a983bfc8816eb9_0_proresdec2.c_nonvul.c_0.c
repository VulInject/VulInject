static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const int VAR6)
{
    const int VAR7 = (1 << VAR6) - 1;
    int VAR8, VAR9, VAR10, VAR11;
    VAR9 = 0;
    VAR11 = VAR7;
    do
    {
        do
        {
            if (FUN2(VAR2))
            {
                VAR10 = FUN3(VAR2, VAR6);
            }
            else
            {
                int VAR12;
                VAR10 = FUN3(VAR2, VAR6 == 16 ? 7 : 4);
                VAR12 = VAR10 & 1;
                VAR10 = (VAR10 + 2) >> 1;
                if (VAR12)
                    VAR10 = -VAR10;
            }
            VAR11 = (VAR11 + VAR10) & VAR7;
            if (VAR6 == 16)
            {
                VAR4[VAR9++] = VAR11 >> 6;
            }
            else
            {
                VAR4[VAR9++] = (VAR11 << 2) | (VAR11 >> 6);
            }
            if (VAR9 >= VAR5)
                break;
        } while (FUN4(VAR2) > 0 && FUN2(VAR2));
        VAR10 = FUN3(VAR2, 4);
        if (!VAR10)
            VAR10 = FUN3(VAR2, 11);
        if (VAR9 + VAR10 > VAR5)
            VAR10 = VAR5 - VAR9;
        if (VAR6 == 16)
        {
            for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                VAR4[VAR9++] = VAR11 >> 6;
        }
        else
        {
            for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                VAR4[VAR9++] = (VAR11 << 2) | (VAR11 >> 6);
        }
    } while (VAR9 < VAR5);
}