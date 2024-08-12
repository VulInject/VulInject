static VAR1 *FUN1(void)
{
    int VAR2;
    int64_t VAR3 = VAR4;
    VAR1 *VAR5 = NULL;
    for (VAR2 = 0; VAR2 < VAR6; VAR2++)
    {
        VAR1 *VAR7 = VAR8[VAR2];
        int64_t VAR9 = FUN2(VAR7->VAR10->VAR11, VAR7->VAR10->VAR12, VAR13);
        if (!VAR7->VAR14 && VAR9 < VAR3)
        {
            VAR3 = VAR9;
            VAR5 = VAR7->VAR15 ? NULL : VAR7;
        }
    }
    return VAR5;
}