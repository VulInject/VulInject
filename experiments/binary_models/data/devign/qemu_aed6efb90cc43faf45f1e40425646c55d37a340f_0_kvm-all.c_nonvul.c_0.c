int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR7;
    struct VAR8 *VAR9;
    int VAR10;
    if (!VAR4)
    {
        return FUN2(VAR2, VAR11, NULL);
    }
    VAR9 = FUN3(sizeof(*VAR9) + sizeof(*VAR4));
    VAR9->VAR12 = VAR6->VAR13;
    memcpy(VAR9->VAR4, VAR4, sizeof(*VAR4));
    VAR10 = FUN2(VAR2, VAR11, VAR9);
    FUN4(VAR9);
    return VAR10;
}