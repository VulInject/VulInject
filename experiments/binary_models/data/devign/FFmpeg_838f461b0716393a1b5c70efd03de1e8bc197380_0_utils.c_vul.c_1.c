static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 0;
    const VAR7 *VAR8;
    const VAR7 *VAR9;
    VAR8 = FUN2(VAR2->VAR10, VAR11, &VAR5);
    if (!VAR8)
        goto VAR9;
    VAR9 = VAR8 + VAR5;
    while (VAR8 < VAR9)
    {
        const VAR7 *VAR12 = VAR8;
        const VAR7 *VAR13 = VAR8 + strlen(VAR12) + 1;
        int VAR6 = FUN3(FUN4(VAR4), VAR12, VAR13, 0);
        if (VAR6 < 0)
            break;
        VAR8 = VAR13 + strlen(VAR13) + 1;
    }
VAR9:
    return VAR6;
}