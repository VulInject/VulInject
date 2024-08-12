static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    if (!VAR9->VAR10)
    {
        FUN3(VAR7, VAR11, VAR3 ? VAR3 : "", "");
        return;
    }
    if (FUN4(VAR9, VAR3, VAR7) < 0)
    {
        return;
    }
    if (!VAR9->VAR12)
    {
        goto VAR13;
    }
    if (!VAR9->VAR14)
    {
        VAR15 *VAR16;
        VAR9->VAR14 = FUN5(VAR9->VAR12);
        if (!VAR9->VAR14)
        {
            goto VAR13;
        }
        VAR16 = VAR9->VAR14->VAR17;
        if (!VAR16)
        {
            goto VAR13;
        }
        VAR9->VAR18 = FUN6(VAR16);
    }
    *VAR5 = VAR9->VAR18;
    VAR9->VAR18++;
    return;
VAR13:
    FUN3(VAR7, VAR19, VAR3 ? VAR3 : "", "");
}