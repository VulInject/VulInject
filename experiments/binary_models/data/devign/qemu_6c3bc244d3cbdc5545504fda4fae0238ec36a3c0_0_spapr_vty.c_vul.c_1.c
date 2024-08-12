static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    int VAR8 = 0;
    while ((VAR8 < VAR5) && (VAR7->VAR9 != VAR7->VAR10))
    {
        VAR4[VAR8++] = VAR7->VAR4[VAR7->VAR9++ % VAR11];
        FUN3(&VAR7->VAR12);
        return VAR8