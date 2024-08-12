int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR7 = FUN2(VAR2, VAR6);
    if (VAR7 < 0)
        return VAR7;
    VAR7 = FUN3(VAR4, VAR6->VAR8);
    if (VAR7 < 0)
        return VAR7;
    memcpy(VAR4->VAR9, VAR6->VAR9, VAR6->VAR8);
    VAR4->VAR10 = VAR6->VAR8;
    return 0;
}