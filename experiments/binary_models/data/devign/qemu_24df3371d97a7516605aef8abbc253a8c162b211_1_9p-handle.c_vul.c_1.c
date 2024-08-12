static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const struct VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    struct VAR9 *VAR10 = (struct VAR9 *)VAR2->private;
    VAR8 = FUN2(VAR10->VAR11, VAR4->VAR10, VAR12);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    VAR7 = FUN3(VAR8, VAR6);
    close(VAR8);
    VAR7 = -1;
    VAR13 = VAR14;
    return VAR7;
}