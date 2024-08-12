static void FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    uint8_t VAR5[4];
    if (VAR2->VAR6 == 4)
    {
        VAR7 *VAR8 = VAR3;
        int VAR9, VAR10;
        VAR9 = VAR4 >> 2;
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
        {
            FUN2(VAR2, VAR5, VAR8[VAR10]);
            FUN3(VAR2, VAR5, VAR2->VAR11);
        }
    }
    else if (VAR2->VAR6 == 2)
    {
        VAR12 *VAR8 = VAR3;
        int VAR9, VAR10;
        VAR9 = VAR4 >> 1;
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
        {
            FUN2(VAR2, VAR5, VAR8[VAR10]);
            FUN3(VAR2, VAR5, VAR2->VAR11);
        }
    }
    else if (VAR2->VAR6 == 1)
    {
        VAR13 *VAR8 = VAR3;
        int VAR9, VAR10;
        VAR9 = VAR4;
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
        {
            FUN2(VAR2, VAR5, VAR8[VAR10]);
            FUN3(VAR2, VAR5, VAR2->VAR11);
        }
    }
    else
    {
        fprintf(VAR14, "");
    }
}