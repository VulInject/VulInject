static int FUN1(char *VAR1)
{
    uint32_t VAR2 = 0, VAR3 = 0, VAR4 = 0, VAR5 = 0;
    int VAR6;
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        FUN2(0x80000002 + VAR6, 0, &VAR2, &VAR3, &VAR4, &VAR5);
        memcpy(VAR1 + VAR6 * 16 + 0, &VAR2, 4);
        memcpy(VAR1 + VAR6 * 16 + 4, &VAR3, 4);
        memcpy(VAR1 + VAR6 * 16 + 8, &VAR4, 4);
        memcpy(VAR1 + VAR6 * 16 + 12, &VAR5, 4);
    }
    return 0;
}