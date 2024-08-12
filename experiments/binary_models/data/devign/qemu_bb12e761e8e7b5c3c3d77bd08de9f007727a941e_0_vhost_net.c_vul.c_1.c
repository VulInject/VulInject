int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    const VAR6 *VAR7;
    VAR2->VAR8 = VAR3;
    if (!VAR5)
    {
        return 0;
    }
    VAR7 = VAR5->VAR9.VAR7;
    if (VAR7->VAR10)
    {
        return VAR7->FUN1(&VAR5->VAR9, VAR3);
    }
    return 0;
}