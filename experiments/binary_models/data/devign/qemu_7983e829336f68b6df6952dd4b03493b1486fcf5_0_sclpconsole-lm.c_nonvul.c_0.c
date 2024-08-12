static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    if (!VAR7->VAR8)
    {
        return VAR5;
    }
    return FUN3(VAR7->VAR8, VAR4, VAR5);
}