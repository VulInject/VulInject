static int FUN1(void *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7 = 0;
    uint32_t VAR8[VAR5];
    uint32_t VAR9[VAR5 * 2];
    int VAR10 = FUN2(VAR4);
    if (VAR4->VAR11)
    {
        VAR7 = FUN3(VAR1, VAR2, "", &VAR4->VAR11, sizeof(VAR4->VAR11));
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR8[VAR6] = FUN4(VAR10 + VAR6);
        VAR9[VAR6 * 2] = FUN4(VAR10 + VAR6);
        VAR9[VAR6 * 2 + 1] = 0;
    }
    VAR7 = FUN3(VAR1, VAR2, "", VAR8, sizeof(VAR8));
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR7 = FUN3(VAR1, VAR2, "", VAR9, sizeof(VAR9));
    return VAR7;
}