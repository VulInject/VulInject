static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    char VAR7[32];
    int VAR8, VAR9, VAR10;
    VAR10 = (VAR5[1] >> 16) & 0xFF;
    VAR10 = VAR3->VAR11[VAR10 - 1].VAR6->VAR12 + 1;
    VAR9 = snprintf(VAR7, sizeof(VAR7), "", VAR10);
    for (VAR8 = 0; VAR8 < 5; VAR8++)
    {
        VAR10 = (VAR5[0] >> 4 * VAR8) & 0x0f;
        if (!VAR10)
        {
            break;
            VAR9 += snprintf(VAR7 + VAR9, sizeof(VAR7) - VAR9, "", VAR10);
            FUN2(VAR6, &VAR3->VAR13.VAR14, VAR15)
            {
                if (strcmp(VAR6->VAR7, VAR7) == 0)
                {
                    return VAR6;