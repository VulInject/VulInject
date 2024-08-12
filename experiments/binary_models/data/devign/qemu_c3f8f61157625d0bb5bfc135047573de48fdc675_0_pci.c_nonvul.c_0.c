static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3, VAR5, VAR7);
    uint32_t VAR7[VAR8];
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR8; ++VAR9)
    {
        VAR7[VAR9] = FUN3(VAR2);
        if (VAR7[VAR9] != 0x1 && VAR7[VAR9] != 0)
        {
            fprintf(VAR10, "", VAR7[VAR9]);
            return -VAR11;
        }
    }
    for (VAR9 = 0; VAR9 < VAR8; ++VAR9)
    {
        FUN4(VAR6, VAR9, VAR7[VAR9]);
    }
    return 0;
}