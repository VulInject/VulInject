void FUN1(void)
{
    VAR1 *VAR2;
    int VAR3;
    if (VAR4)
    {
        return;
    }
    FUN2();
    FUN3(VAR2, &VAR5, VAR6)
    {
        if (!VAR2->VAR7)
        {
            fprintf(VAR8, "", VAR2->VAR9->VAR10 == VAR11 ? "" : "", VAR2->VAR12);
        }
    }
    for (VAR3 = 0; VAR3 < VAR13; VAR3++)
    {
        VAR14 *VAR15 = &VAR16[VAR3];
        if (VAR15->VAR17 && !VAR15->VAR18)
        {
            fprintf(VAR8, ""
                            "",
                    VAR15->VAR12 ? VAR15->VAR12 : "", VAR15->VAR19 ? VAR15->VAR19 : "");
        }
    }
}