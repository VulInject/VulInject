FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR1 *VAR6;
    for (VAR6 = VAR2->VAR7->VAR8; VAR6 != NULL; VAR6 = VAR6->VAR9)
    {
        if (VAR6 != VAR2 && !VAR6->VAR10)
        {
            VAR6->FUN2(VAR6, VAR4, VAR5);
        }
    }
}