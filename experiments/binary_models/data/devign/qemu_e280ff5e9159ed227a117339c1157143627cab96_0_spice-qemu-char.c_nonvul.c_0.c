static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    assert(VAR7->VAR9 == 0);
    if (VAR7->VAR10 < VAR5)
    {
        VAR7->VAR10 = VAR5;
        VAR7->VAR11 = FUN2(VAR7->VAR11, VAR7->VAR10);
    }
    memcpy(VAR7->VAR11, VAR4, VAR5);
    VAR7->VAR12 = VAR7->VAR11;
    VAR7->VAR9 = VAR5;
    FUN3(&VAR7->VAR13);
    return VAR5;
}