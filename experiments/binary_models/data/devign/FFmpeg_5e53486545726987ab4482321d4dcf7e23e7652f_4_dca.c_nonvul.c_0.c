static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    static int VAR6 = 0;
    if (VAR6)
        return;
    for (VAR4 = 0, VAR5 = 0; VAR5 < 16; VAR5++)
        for (VAR3 = 0; VAR3 < 16; VAR3++)
            VAR7[VAR4++] = FUN2((2 * VAR3 + 1) * (2 * VAR5 + 1) * VAR8 / 64);
    for (VAR5 = 0; VAR5 < 16; VAR5++)
        for (VAR3 = 0; VAR3 < 16; VAR3++)
            VAR7[VAR4++] = FUN2((VAR3) * (2 * VAR5 + 1) * VAR8 / 32);
    for (VAR5 = 0; VAR5 < 16; VAR5++)
        VAR7[VAR4++] = 0.25 / (2 * FUN2((2 * VAR5 + 1) * VAR8 / 128));
    for (VAR5 = 0; VAR5 < 16; VAR5++)
        VAR7[VAR4++] = -0.25 / (2.0 * FUN3((2 * VAR5 + 1) * VAR8 / 128));
    VAR6 = 1;
}