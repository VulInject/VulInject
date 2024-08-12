static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 **VAR5 = VAR3;
    VAR6 *VAR7 = NULL;
    if (FUN2(VAR2, VAR8))
    {
        VAR4 *VAR9 = FUN3(sizeof(*VAR9));
        VAR9->VAR10 = FUN3(sizeof(*VAR9->VAR10));
        VAR9->VAR10->VAR11 = FUN4(VAR2, "", &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        VAR9->VAR10->VAR13 = FUN5(VAR2, "", &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        VAR9->VAR10->VAR14 = FUN5(VAR2, "", &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        VAR9->VAR10->VAR15 = FUN5(VAR2, "", &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        VAR9->VAR10->VAR16 = FUN6(VAR2, "", VAR17, &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        FUN7(VAR2, "", &VAR9->VAR10->VAR18, &VAR7);
        if (VAR7)
        {
            goto VAR12;
        }
        VAR9->VAR19 = *VAR5;
        *VAR5 = VAR9;
    }
    return 0;
VAR12:
    return -1;
}