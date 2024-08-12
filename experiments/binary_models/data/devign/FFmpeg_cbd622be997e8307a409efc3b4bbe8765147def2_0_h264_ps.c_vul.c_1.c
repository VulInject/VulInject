static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6, const VAR3 *VAR7)
{
    int VAR8, VAR9 = 8, VAR10 = 8;
    const VAR3 *VAR11 = VAR5 == 16 ? VAR12 : VAR13;
    if (!FUN2(VAR2))
        memcpy(VAR4, VAR7, VAR5 * sizeof(VAR3));
    else
        for (VAR8 = 0; VAR8 < VAR5; VAR8++)
        {
            if (VAR10)
                VAR10 = (VAR9 + FUN3(VAR2)) & 0xff;
            if (!VAR8 && !VAR10)
            {
                memcpy(VAR4, VAR6, VAR5 * sizeof(VAR3));
                break;
            }
            VAR9 = VAR4[VAR11[VAR8]] = VAR10 ? VAR10 : VAR9;
        }
}