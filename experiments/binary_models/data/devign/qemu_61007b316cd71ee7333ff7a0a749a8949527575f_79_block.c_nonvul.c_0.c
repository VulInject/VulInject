int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    if (!VAR6)
        return -VAR7;
    if (!VAR6->VAR8)
        return -VAR9;
    memset(VAR4, 0, sizeof(*VAR4));
    return VAR6->FUN1(VAR2, VAR4);
}