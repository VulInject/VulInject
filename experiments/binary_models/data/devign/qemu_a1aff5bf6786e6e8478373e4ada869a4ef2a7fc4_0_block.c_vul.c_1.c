int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int VAR5;
    if (!VAR4)
        return 0;
    if (!VAR4->VAR6)
        return !VAR2->VAR7;
    VAR5 = VAR4->FUN1(VAR2);
    return VAR5;
}