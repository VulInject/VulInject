void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    const char *VAR7 = FUN2(VAR4, "");
    VAR6 = FUN3(VAR7);
    if (!VAR6)
    {
        goto VAR8;
    }
    if (VAR6->VAR9)
    {
        FUN4(VAR2, "");
        goto VAR8;
    }
    switch (VAR6->VAR10)
    {
    case VAR11:
        FUN4(VAR2, "");
        break;
    default:
        if (FUN5(VAR2, VAR4, VAR6))
        {
            goto VAR8;
        }
    }
    return;
VAR8:
    if (VAR6)
    {
        FUN6(FUN7(VAR6));
    }
}