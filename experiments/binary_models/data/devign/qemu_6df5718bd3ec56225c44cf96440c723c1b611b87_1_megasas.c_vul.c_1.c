static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7;
    for (VAR5 = 0; VAR5 < VAR2->VAR8; VAR5++)
    {
        VAR7 = &VAR2->VAR9[VAR5];
        if (VAR7->VAR10)
        {
            FUN3(VAR4, VAR7->VAR11, VAR7->VAR12, 0, 0);
            VAR7->VAR11 = NULL;
            VAR7->VAR10 = 0;
        }
    }
}