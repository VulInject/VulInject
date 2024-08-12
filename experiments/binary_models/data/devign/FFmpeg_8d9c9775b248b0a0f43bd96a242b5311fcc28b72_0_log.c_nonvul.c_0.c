void FUN1(void *VAR1, int VAR2, const char *VAR3, va_list VAR4)
{
    static int VAR5 = 1;
    static int VAR6;
    static char VAR7[VAR8];
    AVBPrint VAR9[4];
    char VAR10[VAR8];
    static int VAR11;
    int VAR12[2];
    unsigned VAR13 = 0;
    if (VAR2 >= 0)
    {
        VAR13 = VAR2 & 0xff00;
        VAR2 &= 0xff;
    }
    if (VAR2 > VAR14)
        return;
    FUN2(&mutex);
    FUN3(VAR1, VAR2, VAR3, VAR4, VAR9, &VAR5, VAR12);
    snprintf(VAR10, sizeof(VAR10), "", VAR9[0].VAR15, VAR9[1].VAR15, VAR9[2].VAR15, VAR9[3].VAR15);
    if (!VAR11)
        VAR11 = FUN4(2) ? 1 : -1;
    if (VAR5 && (VAR16 & VAR17) && !strcmp(VAR10, VAR7) && *VAR10 && VAR10[strlen(VAR10) - 1] != '')
    {
        VAR6++;
        if (VAR11 == 1)
            fprintf(VAR18, "", VAR6);
        goto VAR19;
    }
    if (VAR6 > 0)
    {
        fprintf(VAR18, "", VAR6);
        VAR6 = 0;
    }
    strcpy(VAR7, VAR10);
    FUN5(VAR9[0].VAR15);
    FUN6(VAR12[0], 0, VAR9[0].VAR15);
    FUN5(VAR9[1].VAR15);
    FUN6(VAR12[1], 0, VAR9[1].VAR15);
    FUN5(VAR9[2].VAR15);
    FUN6(FUN7(VAR2 >> 3, 0, VAR20 - 1), VAR13 >> 8, VAR9[2].VAR15);
    FUN5(VAR9[3].VAR15);
    FUN6(FUN7(VAR2 >> 3, 0, VAR20 - 1), VAR13 >> 8, VAR9[3].VAR15);
    if (VAR2 <= VAR21)
        FUN8("", "");
VAR19:
    FUN9(VAR9 + 3, NULL);
    FUN10(&mutex);
}