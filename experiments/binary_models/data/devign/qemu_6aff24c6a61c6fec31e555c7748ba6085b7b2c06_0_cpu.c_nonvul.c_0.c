static void FUN1(const char *typename, char *VAR1, VAR2 **VAR3)
{
    char *VAR4;
    char *VAR5;
    static bool VAR6;
    if (VAR6)
    {
        return;
    }
    VAR6 = true;
    VAR4 = VAR1 ? strtok(VAR1, "") : NULL;
    while (VAR4)
    {
        VAR5 = strchr(VAR4, '');
        if (VAR5)
        {
            VAR7 *VAR8 = FUN2(FUN3(*VAR8), 1);
            *VAR5 = 0;
            VAR5++;
            VAR8->VAR9 = typename;
            VAR8->VAR10 = FUN4(VAR4);
            VAR8->VAR11 = FUN4(VAR5);
            VAR8->VAR3 = &VAR12;
            FUN5(VAR8);
        }
        else
        {
            FUN6(VAR3, "", VAR4);
            return;
        }
        VAR4 = strtok(NULL, "");
    }
}