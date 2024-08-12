int FUN1(void *VAR1, const char *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    uint64_t VAR9;
    int VAR10, VAR11, VAR12;
    uint32_t VAR13;
    VAR8 = FUN2(VAR7, VAR4 * 2);
    VAR10 = 0;
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        VAR12 = VAR6[VAR11 * 2];
        if (VAR12 != 1 && VAR12 != 2)
        {
            return -1;
        }
        VAR9 = VAR6[VAR11 * 2 + 1];
        VAR13 = FUN3(VAR9 >> 32);
        if (VAR12 > 1)
        {
            VAR8[VAR10++] = VAR13;
        }
        else if (VAR13 != 0)
        {
            return -1;
        }
        VAR8[VAR10++] = FUN3(VAR9);
    }
    return FUN4(VAR1, VAR2, VAR3, VAR8, VAR10 * sizeof(VAR7));
}