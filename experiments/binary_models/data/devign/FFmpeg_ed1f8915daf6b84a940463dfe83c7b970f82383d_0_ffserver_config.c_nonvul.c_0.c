static int FUN1(const char *VAR1, VAR2 *VAR3, int VAR4, enum VAR5 *VAR6, enum VAR5 *VAR7)
{
    VAR8 *VAR9 = NULL;
    char VAR10[1000], VAR11[1000], VAR12[1000], VAR13[1000];
    int VAR14 = 0;
    VAR15 *VAR16 = NULL;
    if (VAR3)
        VAR16 = FUN2(VAR3->VAR17);
    if (!(VAR9 = FUN3(VAR10, sizeof(VAR10), VAR1, 0, VAR16 ? VAR16->VAR18 : NULL)))
    {
        fprintf(VAR19, "", VAR1);
        return FUN4(VAR20);
    }
    while (!FUN5(VAR9))
    {
        int VAR21 = fscanf(VAR9, "", VAR13) - 1;
        if (VAR13[0] == '' && !VAR21)
            continue;
        VAR21 |= sscanf(VAR13, "", VAR11, VAR12) - 2;
        if (VAR21)
        {
            fprintf(VAR19, "", VAR10, VAR13);
            VAR14 = FUN4(VAR20);
            break;
        }
        if (VAR6 && !strcmp(VAR11, ""))
        {
            *VAR6 = FUN6(VAR12, VAR22);
        }
        else if (VAR7 && !strcmp(VAR11, ""))
        {
            *VAR7 = FUN6(VAR12, VAR23);
        }
        else if (!strcmp(VAR11, ""))
        {
        }
        else if (VAR3 && (VAR14 = FUN7(VAR11, VAR12, VAR3, VAR4)) < 0)
        {
            fprintf(VAR19, "", VAR10, VAR13, VAR11, VAR12);
            break;
        }
    }
    fclose(VAR9);
    return VAR14;
}