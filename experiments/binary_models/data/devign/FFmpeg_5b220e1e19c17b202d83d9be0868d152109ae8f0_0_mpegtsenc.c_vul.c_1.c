static VAR1 *FUN1(VAR2 *VAR3, int VAR4, const char *VAR5, const char *VAR6)
{
    VAR1 *VAR7;
    VAR7 = FUN2(sizeof(VAR1));
    if (!VAR7)
        return NULL;
    VAR7->VAR8.VAR9 = VAR3->VAR10 + VAR3->VAR11;
    VAR7->VAR4 = VAR4;
    VAR7->VAR5 = FUN3(VAR5);
    VAR7->VAR6 = FUN3(VAR6);
    VAR7->VAR12 = 0x1fff;
    FUN4(&VAR3->VAR13, &VAR3->VAR11, VAR7);
    return VAR7;
}