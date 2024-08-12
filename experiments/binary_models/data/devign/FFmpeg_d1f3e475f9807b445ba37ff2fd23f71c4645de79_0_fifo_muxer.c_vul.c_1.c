static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int64_t VAR5)
{
    int VAR6;
    VAR3 *VAR7 = FUN2(sizeof(*VAR7));
    memcpy(VAR7, VAR4, sizeof(VAR3));
    VAR6 = FUN3(VAR2, (VAR8 *)VAR7, sizeof(*VAR7));
    VAR2->VAR5 = VAR2->VAR9 = VAR5;
    VAR2->VAR10 = 1;
    return VAR6;