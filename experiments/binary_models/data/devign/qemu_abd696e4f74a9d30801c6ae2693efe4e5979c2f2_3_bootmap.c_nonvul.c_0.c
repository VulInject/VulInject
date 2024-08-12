int FUN1(void)
{
    struct VAR1 *VAR1 = (void *)VAR2;
    VAR3 *VAR4, *VAR5;
    int VAR6 = 0;
    int VAR7 = sizeof(struct VAR8);
    struct VAR8 *VAR9;
    const char *VAR10 = "";
    FUN2(0, (void *)VAR1);
    FUN3("");
    if (!FUN4(VAR1->VAR11))
    {
        VAR10 = "";
        goto VAR12;
    }
    FUN5("", VAR1->VAR13.VAR14);
    if (FUN2(VAR1->VAR13.VAR14, VAR2))
    {
        VAR10 = "";
        goto VAR12;
    }
    if (!FUN4(VAR2))
    {
        VAR10 = "";
        goto VAR12;
    }
    VAR5 = VAR2 + VAR15;
    for (VAR4 = (VAR2 + VAR7); (VAR4 + VAR7) < VAR5; VAR4++)
    {
        VAR9 = (struct VAR8 *)VAR4;
        if (!VAR9->VAR14)
        {
            break;
        }
        VAR6++;
    }
    FUN5("", VAR6);
    if (!VAR6)
    {
        goto VAR12;
    }
    VAR9 = (struct VAR8 *)(VAR2 + VAR7);
    return FUN6(VAR9);
VAR12:
    FUN7("");
    FUN7(VAR10);
    FUN7("");
    return -1;
}