static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const VAR7 *VAR8;
    const char *VAR9 = FUN2(VAR4, "");
    if (!VAR9)
    {
        goto VAR10;
    }
    for (VAR8 = VAR11; VAR8->VAR12 != NULL; VAR8++)
    {
        if (FUN3(VAR9, VAR8->VAR12))
            break;
    }
    if (VAR8->VAR12 == NULL)
    {
        goto VAR10;
    }
    if (FUN4(VAR8))
    {
        FUN5(VAR2, VAR8);
    }
    else if (FUN6(VAR8))
    {
        VAR5 *VAR13 = NULL;
        VAR8->VAR14.FUN7(VAR2, &VAR13);
        if (VAR13)
        {
            VAR8->FUN8(VAR2, VAR13);
            FUN9(VAR13);
        }
    }
    else
    {
        VAR8->VAR14.FUN10(VAR2);
    }
    return 0;
VAR10:
    FUN11(VAR2, "");
    return 0;
}