void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    VAR4 *VAR7;
    VAR7 = VAR5;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        FUN2(0);
        FUN2(1);
        FUN2(2);
        FUN2(3);
        FUN2(4);
        FUN2(5);
        FUN2(6);
        FUN2(7);
        VAR7 += 2 * 8;
    }
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        FUN3(VAR5 + VAR6 * 8);
    }
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        FUN4(VAR2 + VAR6, 2 * VAR3, VAR5 + VAR6);
        FUN4(VAR2 + VAR3 + VAR6, 2 * VAR3, VAR5 + 8 + VAR6);
    }
}