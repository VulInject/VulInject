int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    int VAR7;
    if (!VAR4)
    {
        return FUN2(VAR2, VAR8, NULL);
    }
    VAR6 = FUN3(sizeof(*VAR6) + sizeof(*VAR4));
    VAR6->VAR9 = 8;
    memcpy(VAR6->VAR4, VAR4, sizeof(*VAR4));
    VAR7 = FUN2(VAR2, VAR8, VAR6);
    free(VAR6);
    return VAR7;
}