static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR3 *VAR6)
{
    char *VAR7;
    struct VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    struct VAR13 *VAR14 = (struct VAR13 *)VAR2->private;
    if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
    {
        VAR15 = VAR16;
        return -1;
    }
    if (VAR4)
    {
        VAR10 = FUN2(VAR14->VAR17, VAR4->VAR14, VAR18);
    }
    else
    {
        VAR7 = FUN3(VAR2, "");
        VAR10 = open(VAR7, VAR19);
        FUN4(VAR7);
    }
    if (VAR10 < 0)
    {
        return VAR10;
    }
    VAR9 = FUN5(sizeof(struct VAR8) + VAR14->VAR20);
    VAR9->VAR20 = VAR14->VAR20;
    VAR7 = FUN6("", VAR5);
    VAR11 = FUN7(VAR10, VAR7, VAR9, &VAR12, 0);
    if (!VAR11)
    {
        VAR6->VAR14 = (char *)VAR9;
        VAR6->VAR21 = sizeof(struct VAR8) + VAR14->VAR20;
    }
    else
    {
        FUN4(VAR9);
    }
    close(VAR10);
    FUN4(VAR7);
    return VAR11;
}