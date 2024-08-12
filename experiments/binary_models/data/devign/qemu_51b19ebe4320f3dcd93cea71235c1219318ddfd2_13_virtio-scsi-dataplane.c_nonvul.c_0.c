VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR3;
    VAR1 *VAR8;
    VAR8 = FUN2((VAR9 *)VAR3, &VAR5->VAR5, sizeof(VAR1) + VAR7->VAR10);
    if (!VAR8)
    {
        return NULL;
    }
    FUN3(VAR3, NULL, VAR8);
    VAR8->VAR5 = VAR5;
    return VAR8;
}