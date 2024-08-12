static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5;
    VAR6 *VAR7 = NULL;
    int VAR8 = 0;
    if (!(VAR5 = FUN2(VAR4)))
    {
        fprintf(VAR9, "");
        return -1;
    }
    VAR7 = (VAR6 *)(VAR5->VAR10);
    VAR7->VAR11 = VAR12;
    VAR7->VAR13 = VAR14;
    VAR7->VAR15 = VAR15;
    VAR7->VAR16 = VAR16;
    VAR7->VAR17 = 20;
    if ((VAR8 = FUN3(VAR5)) < 0)
    {
        fprintf(VAR9, ""
                        "",
                FUN4(VAR8));
        return VAR8;
    }
    VAR2->VAR18 = FUN5(VAR5);
    if (!VAR2->VAR18)
        VAR8 = FUN6(VAR19);
    return VAR8;