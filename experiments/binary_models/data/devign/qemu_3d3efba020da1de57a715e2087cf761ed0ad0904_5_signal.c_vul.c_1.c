void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    if (!VAR7->VAR9)
        return;
    for (VAR5 = 1; VAR5 <= VAR10; VAR5++)
    {
        if (VAR7->VAR11[VAR5 - 1].VAR12)
        {
            FUN3(VAR2, VAR5);
            return;
        }
    }
    VAR7->VAR9 = 0;
    return;
}