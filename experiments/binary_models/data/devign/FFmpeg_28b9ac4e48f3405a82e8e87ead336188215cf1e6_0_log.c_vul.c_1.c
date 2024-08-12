void FUN1(void *VAR1, int VAR2, const char *VAR3, va_list VAR4)
{
    static int VAR5 = 1;
    static int VAR6;
    static char VAR7[1024];
    char VAR8[1024];
    static int VAR9;
    VAR10 *VAR11 = VAR1 ? *(VAR10 **)VAR1 : NULL;
    int VAR12 = FUN2(VAR2 >> 8, 0, 256);
    VAR2 &= 0xff;
    if (VAR2 > VAR13)
        return;
    VAR8[0] = 0;
    if (VAR5 && VAR11)
    {
        if (VAR11->VAR14)
        {
            VAR10 **VAR15 = *(VAR10 ***)(((VAR16 *)VAR1) + VAR11->VAR14);
            if (VAR15 && *VAR15)
            {
                snprintf(VAR8, sizeof(VAR8), "", (*VAR15)->FUN3(VAR15), VAR15);
            }
        }
        snprintf(VAR8 + strlen(VAR8), sizeof(VAR8) - strlen(VAR8), "", VAR11->FUN3(VAR1), VAR1);
    }
    vsnprintf(VAR8 + strlen(VAR8), sizeof(VAR8) - strlen(VAR8), VAR3, VAR4);
    VAR5 = strlen(VAR8) && VAR8[strlen(VAR8) - 1] == '';
    if (!VAR9)
        VAR9 = FUN4(2) ? 1 : -1;
    if (VAR5 && (VAR17 & VAR18) && !FUN5(VAR8, VAR7, sizeof VAR8))
    {
        VAR6++;
        if (VAR9 == 1)
            fprintf(VAR19, "", VAR6);
        return;
    }
    if (VAR6 > 0)
    {
        fprintf(VAR19, "", VAR6);
        VAR6 = 0;
    }
    FUN6(FUN2(VAR2 >> 3, 0, 6), VAR12, VAR8);
    FUN7(VAR7, VAR8, sizeof VAR8);
}