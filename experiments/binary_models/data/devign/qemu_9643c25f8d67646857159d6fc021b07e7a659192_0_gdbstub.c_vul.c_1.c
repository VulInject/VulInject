void FUN1(VAR1 *VAR2, gdb_reg_cb VAR3, gdb_reg_cb VAR4, int VAR5, const char *VAR6, int VAR7)
{
    VAR8 *VAR9;
    VAR8 **VAR10;
    static int VAR11 = VAR12;
    VAR9 = (VAR8 *)FUN2(sizeof(VAR8));
    VAR9->VAR13 = VAR11;
    VAR9->VAR5 = VAR5;
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR6 = VAR6;
    VAR10 = &VAR2->VAR14;
    while (*VAR10)
    {
        if (strcmp((*VAR10)->VAR6, VAR6) == 0)
            return;
        VAR10 = &(*VAR10)->VAR15;
    }
    VAR11 += VAR5;
    *VAR10 = VAR9;
    if (VAR7)
    {
        if (VAR7 != VAR9->VAR13)
        {
            fprintf(VAR16, ""
                            "",
                    VAR6, VAR7, VAR9->VAR13);
        }
        else
        {
            VAR17 = VAR11;
        }
    }
}