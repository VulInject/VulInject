static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    int VAR8;
    V9fsString VAR9;
    FUN2(&VAR9);
    FUN3(&VAR9, "", VAR4->VAR10, VAR5);
    VAR8 = FUN4(VAR2->private, VAR11, NULL, &VAR9, VAR7->VAR12, VAR7->VAR13, VAR7->VAR14);
    FUN5(&VAR9);
    if (VAR8 < 0)
    {
        VAR15 = -VAR8;
        VAR8 = -1;
    }
    FUN5(&VAR9);
    return VAR8;
}