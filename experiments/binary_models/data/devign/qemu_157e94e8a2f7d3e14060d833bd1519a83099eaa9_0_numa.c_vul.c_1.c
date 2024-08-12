static int FUN1(void *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = NULL;
    VAR4 *VAR8 = NULL;
    {
        VAR9 *VAR10 = FUN2(VAR3);
        FUN3(VAR10, NULL, &VAR7, &VAR8);
        FUN4(VAR10);
    }
    if (VAR8)
    {
        goto VAR11;
    }
    switch (VAR7->VAR12)
    {
    case VAR13:
        FUN5(VAR7->VAR14.VAR15.VAR16, VAR3, &VAR8);
        if (VAR8)
        {
            goto VAR11;
        }
        VAR17++;
        break;
    default:
        FUN6();
    }
    return 0;
VAR11:
    FUN7(VAR8);
    FUN8(VAR7);
    return -1;
}