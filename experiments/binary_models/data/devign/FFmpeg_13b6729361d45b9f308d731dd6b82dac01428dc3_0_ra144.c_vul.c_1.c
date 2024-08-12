static void final(const short *VAR1, const short *VAR2, void *VAR3, int *VAR4, int VAR5)
{
    int VAR6, VAR7;
    unsigned short int VAR8[50];
    short *VAR9 = VAR8;
    memcpy(VAR8, VAR4, 20);
    memcpy(VAR8 + 10, VAR2, VAR5 * 2);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        int VAR10 = 0;
        for (VAR6 = 0; VAR6 < 10; VAR6++)
            VAR10 += VAR1[9 - VAR6] * VAR9[VAR6];
        VAR10 >>= 12;
        if (VAR9[10] - VAR10 < -32768 || VAR9[10] - VAR10 > 32767)
        {
            memset(VAR3, 0, VAR5 * 2);
            memset(VAR4, 0, 20);
            return;
        }
        VAR9[10] -= VAR10;
        VAR9++;
    }
    memcpy(VAR3, VAR8 + 10, VAR5 * 2);
    memcpy(VAR4, VAR8 + 40, 20);
}