static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = NULL;
    int VAR8;
    struct add_rule_data VAR9;
    if (VAR3)
    {
        VAR7 = fopen(VAR3, "");
        if (VAR7 == NULL)
        {
            FUN2(VAR5, VAR10, "");
            return -VAR10;
        }
        VAR8 = FUN3(VAR7, VAR11, VAR3);
        if (VAR8 < 0)
        {
            FUN4(VAR5, "");
            VAR8 = -VAR12;
            goto VAR13;
        }
    }
    VAR9.VAR2 = VAR2;
    VAR9.VAR14 = VAR15;
    FUN5(&VAR16, VAR17, &VAR9, 0);
    VAR9.VAR14 = VAR18;
    FUN5(&VAR19, VAR17, &VAR9, 0);
    VAR8 = 0;
VAR13:
    FUN6(&VAR16);
    FUN6(&VAR19);
    if (VAR7)
    {
        fclose(VAR7);
    }
    return VAR8;
}