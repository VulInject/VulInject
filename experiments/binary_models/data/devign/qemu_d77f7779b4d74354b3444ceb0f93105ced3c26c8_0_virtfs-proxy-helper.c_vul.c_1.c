static int FUN1(struct VAR1 *VAR1, struct VAR1 *VAR2)
{
    char *VAR3;
    int VAR4, VAR5;
    V9fsString VAR6, VAR7;
    FUN2(&VAR7);
    VAR5 = FUN3(VAR1, VAR8, "", &VAR7, &VAR4);
    if (VAR5 < 0)
    {
        FUN4(&VAR7);
        return VAR5;
    }
    VAR3 = FUN5(VAR4);
    FUN2(&VAR6);
    VAR5 = readlink(VAR7.VAR9, VAR3, VAR4);
    if (VAR5 > 0)
    {
        VAR3[VAR5] = '';
        FUN6(&VAR6, "", VAR3);
        VAR5 = FUN7(VAR2, VAR8, "", &VAR6);
    }
    else
    {
        VAR5 = -VAR10;
    }
    FUN8(VAR3);
    FUN4(&VAR6);
    FUN4(&VAR7);
    return VAR5;
}