static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7 = 0;
    uint8_t VAR8[VAR9];
    memset(VAR8, 128, sizeof(VAR8));
    for (VAR6 = 0; VAR7 < 128; VAR6++)
    {
        unsigned VAR10 = FUN2(VAR2, VAR8, 0) + 1;
        if (VAR10 > 128 - VAR7 || !VAR10)
            return VAR11;
        while (VAR10--)
        {
            VAR4[VAR7] = VAR5 * VAR6;
            VAR7++;
        }
    }
    for (VAR7 = 1; VAR7 < 128; VAR7++)
        VAR4[256 - VAR7] = -VAR4[VAR7];
    VAR4[128] = -VAR4[127];
    return 2 * VAR6 - 1;
}