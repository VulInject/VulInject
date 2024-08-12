static int FUN1(struct VAR1 *VAR1)
{
    int VAR2;
    V9fsString VAR3;
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    FUN2(&VAR3);
    VAR2 = FUN3(VAR1, VAR10, "", &VAR3, &VAR4, &VAR5, &VAR6, &VAR7);
    if (VAR2 < 0)
    {
        goto VAR11;
    }
    VAR2 = FUN4(VAR6, VAR7, &VAR8, &VAR9);
    if (VAR2 < 0)
    {
        goto VAR11;
    }
    VAR2 = open(VAR3.VAR12, VAR4, VAR5);
    if (VAR2 < 0)
    {
        VAR2 = -VAR13;
    }
    FUN5(VAR8, VAR9);
VAR11:
    FUN6(&VAR3);
    return VAR2;
}