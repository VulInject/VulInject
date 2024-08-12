static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    for (VAR5 = 0; VAR5 < 256;)
    {
        VAR7 = FUN2(VAR4, 3);
        VAR6 = FUN2(VAR4, 5);
        if (VAR7 == 0)
            VAR7 = FUN2(VAR4, 8);
        if (VAR5 + VAR7 > 256)
        {
            FUN3(NULL, VAR8, "");
            return -1;
        }
        while (VAR7--)
            VAR2[VAR5++] = VAR6;
    }
    return 0;
}