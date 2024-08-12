static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    VAR8 *VAR9 = FUN3(&VAR7->VAR10);
    if (!VAR9->VAR11)
    {
        return NULL;
    }
    VAR4->VAR12 = FUN4(VAR5);
    return VAR4->VAR12;
}