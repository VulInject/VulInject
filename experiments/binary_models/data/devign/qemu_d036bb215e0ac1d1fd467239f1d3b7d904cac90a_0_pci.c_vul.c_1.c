static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    int VAR8;
    VAR8 = VAR3 - VAR5->VAR9[VAR2];
    if (!VAR8)
        return;
    VAR5->VAR9[VAR2] = VAR3;
    for (;;)
    {
        VAR7 = VAR5->VAR7;
        VAR2 = VAR7->FUN2(VAR5, VAR2);
        if (VAR7->VAR10)
            break;
        VAR5 = VAR7->VAR11;
    }
    VAR7->VAR12[VAR2] += VAR8;
    VAR7->FUN3(VAR7->VAR13, VAR2, VAR7->VAR12[VAR2] != 0);
}