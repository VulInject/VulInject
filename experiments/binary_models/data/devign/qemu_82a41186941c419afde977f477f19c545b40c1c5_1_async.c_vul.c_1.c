VAR1 *FUN1(VAR2 **VAR3)
{
    int VAR4;
    VAR1 *VAR5;
    VAR5 = (VAR1 *)FUN2(&VAR6, sizeof(VAR1));
    FUN3(VAR5);
    VAR4 = FUN4(&VAR5->VAR7, false);
    if (VAR4 < 0)
    {
        FUN5(VAR3, -VAR4, "");
        goto VAR8;
    }
    FUN6(&VAR5->VAR9, true);
    FUN7(VAR5, &VAR5->VAR7, false, (VAR10 *)VAR11, VAR12);
    VAR5->VAR13 = NULL;
    VAR5->VAR14 = NULL;
    FUN8(&VAR5->VAR15);
    FUN9(&VAR5->VAR16);
    FUN10(&VAR5->VAR17, VAR18, VAR5);
    VAR5->VAR19 = 0;
    return VAR5;
VAR8:
    FUN11(&VAR5->VAR9);
    return NULL;