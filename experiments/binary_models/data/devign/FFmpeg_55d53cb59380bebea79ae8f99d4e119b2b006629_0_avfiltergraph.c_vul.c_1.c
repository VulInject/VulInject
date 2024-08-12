int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int VAR6, double VAR7)
{
    int VAR8;
    if (!VAR2)
        return 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        VAR10 *VAR11 = VAR2->VAR12[VAR8];
        if (VAR11 && (!strcmp(VAR3, "") || !strcmp(VAR3, VAR11->VAR13) || !strcmp(VAR3, VAR11->VAR11->VAR13)))
        {
            VAR14 **VAR15 = &VAR11->VAR16, *VAR17;
            while (*VAR15 && (*VAR15)->VAR18 <= VAR7)
                VAR15 = &(*VAR15)->VAR17;
            VAR17 = *VAR15;
            *VAR15 = FUN2(sizeof(VAR14));
            (*VAR15)->VAR4 = FUN3(VAR4);
            (*VAR15)->VAR5 = FUN3(VAR5);
            (*VAR15)->VAR18 = VAR7;
            (*VAR15)->VAR6 = VAR6;
            (*VAR15)->VAR17 = VAR17;
            if (VAR6 & VAR19)
                return 0;
        }
    }
    return 0;