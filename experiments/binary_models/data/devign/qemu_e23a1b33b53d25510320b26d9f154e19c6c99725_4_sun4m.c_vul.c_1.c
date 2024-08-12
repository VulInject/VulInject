static void FUN1(target_phys_addr_t VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    char *VAR7;
    int VAR8;
    VAR4 = FUN2(NULL, "");
    FUN3(VAR4);
    VAR6 = FUN4(VAR4);
    FUN5(VAR6, 0, VAR1);
    if (VAR2 == NULL)
    {
        VAR2 = VAR9;
    }
    VAR7 = FUN6(VAR10, VAR2);
    if (VAR7)
    {
        VAR8 = FUN7(VAR7, VAR1 - VAR11, NULL, NULL, NULL, 1, VAR12, 0);
        if (VAR8 < 0 || VAR8 > VAR13)
        {
            VAR8 = FUN8(VAR7, VAR1, VAR13);
        }
        FUN9(VAR7);
    }
    else
    {
        VAR8 = -1;
    }
    if (VAR8 < 0 || VAR8 > VAR13)
    {
        fprintf(VAR14, "", VAR2);
        FUN10(1);
    }
}