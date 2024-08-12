static VAR1 *FUN1(VAR2 *VAR3, void *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR4;
    VAR8 *VAR9;
    assert(0 <= VAR5 && VAR5 <= VAR10);
    VAR9 = FUN2(VAR7, VAR3, VAR5);
    return &VAR9->VAR11;
}