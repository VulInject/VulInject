static int FUN1(struct VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR3 = socket(VAR5, VAR6, 0);
    if (VAR3 < 0)
    {
        FUN2("");
        return -1;
    }
    VAR4 = 1;
    FUN3(VAR3, VAR7, VAR8, &VAR4, sizeof(VAR4));
    if (FUN4(VAR3, (struct VAR9 *)VAR2, sizeof(*VAR2)) < 0)
    {
        char VAR10[32];
        snprintf(VAR10, sizeof(VAR10), "", FUN5(VAR2->VAR11));
        FUN2(VAR10);
        FUN6(VAR3);
        return -1;
    }
    if (FUN7(VAR3, 5) < 0)
    {
        FUN2("");
        FUN6(VAR3);
        return -1;
    }
    FUN8(VAR3, 1);
    return VAR3;