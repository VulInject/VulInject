VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    struct USBAutoFilter VAR5;
    VAR1 *VAR6;
    char *VAR7;
    VAR6 = FUN2(VAR3, "");
    if (strstr(VAR4, ""))
    {
        if (FUN3(VAR4, &VAR5) < 0)
        {
            goto VAR8;
        }
    }
    else
    {
        VAR7 = strchr(VAR4, '');
        if (VAR7)
        {
            VAR5.VAR9 = FUN4(VAR4, NULL, 0);
            VAR5.VAR10 = FUN4(VAR7 + 1, NULL, 0);
            VAR5.VAR11 = 0;
            VAR5.VAR12 = 0;
        }
        else
        {
            VAR7 = strchr(VAR4, '');
            if (VAR7)
            {
                VAR5.VAR9 = 0;
                VAR5.VAR10 = 0;
                VAR5.VAR11 = FUN4(VAR4, NULL, 16);
                VAR5.VAR12 = FUN4(VAR7 + 1, NULL, 16);
            }
            else
            {
                goto VAR8;
            }
        }
    }
    FUN5(&VAR6->VAR13, "", VAR5.VAR9);
    FUN5(&VAR6->VAR13, "", VAR5.VAR10);
    FUN5(&VAR6->VAR13, "", VAR5.VAR11);
    FUN5(&VAR6->VAR13, "", VAR5.VAR12);
    FUN6(&VAR6->VAR13);
    return VAR6;
VAR8:
    FUN7(FUN8(VAR6));
    return NULL;
}