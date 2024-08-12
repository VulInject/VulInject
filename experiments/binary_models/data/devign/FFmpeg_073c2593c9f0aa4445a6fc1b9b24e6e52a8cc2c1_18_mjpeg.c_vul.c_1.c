static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, class, VAR6, VAR7, VAR8;
    uint8_t VAR9[17];
    uint8_t VAR10[256];
    VAR3 = FUN2(&VAR2->VAR11, 16) - 2;
    while (VAR3 > 0)
    {
        if (VAR3 < 17)
            return -1;
        class = FUN2(&VAR2->VAR11, 4);
        if (class >= 2)
            return -1;
        VAR4 = FUN2(&VAR2->VAR11, 4);
        if (VAR4 >= 4)
            return -1;
        VAR6 = 0;
        for (VAR5 = 1; VAR5 <= 16; VAR5++)
        {
            VAR9[VAR5] = FUN2(&VAR2->VAR11, 8);
            VAR6 += VAR9[VAR5];
        }
        VAR3 -= 17;
        if (VAR3 < VAR6 || VAR6 > 256)
            return -1;
        VAR8 = 0;
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR7 = FUN2(&VAR2->VAR11, 8);
            if (VAR7 > VAR8)
                VAR8 = VAR7;
            VAR10[VAR5] = VAR7;
        }
        VAR3 -= VAR6;
        FUN3(&VAR2->VAR12[class][VAR4]);
        FUN4("", class, VAR4, VAR8 + 1);
        if (FUN5(&VAR2->VAR12[class][VAR4], VAR9, VAR10, VAR8 + 1) < 0)
        {
            return -1;
        }
    }
    return 0;
}