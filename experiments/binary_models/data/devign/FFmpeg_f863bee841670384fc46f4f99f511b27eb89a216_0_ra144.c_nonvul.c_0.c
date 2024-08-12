static void final(VAR1 *VAR2, short *VAR3, short *VAR4, void *VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    int VAR11[10];
    short *VAR12;
    short *VAR13;
    memcpy(VAR2->VAR14, VAR6, 20);
    memcpy(VAR2->VAR14 + 10, VAR4, VAR7 * 2);
    for (VAR10 = 0; VAR10 < 10; VAR10++)
        VAR11[9 - VAR10] = VAR3[VAR10];
    VAR13 = (VAR12 = VAR2->VAR14) + VAR7;
    while (VAR12 < VAR13)
    {
        for (VAR9 = 0, VAR8 = 0; VAR8 <= 9; VAR8++)
            VAR9 += VAR11[VAR8] * (VAR12[VAR8]);
        VAR9 = VAR9 >> 12;
        VAR8 = VAR12[10] - VAR9;
        if (VAR8 < -32768 || VAR8 > 32767)
        {
            memset(VAR5, 0, VAR7 * 2);
            memset(VAR6, 0, 20);
            return;
        }
        VAR12[10] = VAR8;
        VAR12++;
    }
    memcpy(VAR5, VAR12 + 10 - VAR7, VAR7 * 2);
    memcpy(VAR6, VAR12, 20);
}