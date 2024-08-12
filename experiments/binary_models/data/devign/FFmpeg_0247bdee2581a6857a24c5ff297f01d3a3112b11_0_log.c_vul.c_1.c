void FUN1(void *VAR1, int VAR2, const char *VAR3, va_list VAR4)
{
    static int VAR5 = 1;
    static int VAR6;
    static char VAR7[1024], VAR8[1024];
    static int VAR9;
    VAR10 *VAR11 = VAR1 ? *(VAR10 **)VAR1 : NULL;
    if (VAR2 > VAR12)
        return;
    VAR7[0] = 0;
    if (VAR5 && VAR11)
    {
        if (VAR11->VAR13)
        {
            VAR10 **VAR14 = *(VAR10 ***)(((VAR15 *)VAR1) + VAR11->VAR13);
            if (VAR14 && *VAR14)
            {
                snprintf(VAR7, sizeof(VAR7), "", (*VAR14)->FUN2(VAR14), VAR14);
            }
        }
        snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR11->FUN2(VAR1), VAR1);
    }
    vsnprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), VAR3, VAR4);
    VAR5 = VAR7[strlen(VAR7) - 1] == '';
    if (!VAR9)
        VAR9 = FUN3(2) ? 1 : -1;
    if (VAR5 && (VAR16 & VAR17) && !strcmp(VAR7, VAR8))
    {
        VAR6++;
        if (VAR9 == 1)
            fprintf(VAR18, "", VAR6);
        return;
    }
    if (VAR6 > 0)
    {
        fprintf(VAR18, "", VAR6);
        VAR6 = 0;
    }
    FUN4(FUN5(VAR2 >> 3, 0, 6), VAR7);
    strcpy(VAR8, VAR7);
}