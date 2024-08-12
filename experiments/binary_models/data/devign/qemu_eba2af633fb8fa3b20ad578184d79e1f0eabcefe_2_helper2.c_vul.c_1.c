void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    char VAR8[32];
    static const char *VAR9[6] = {"", "", "", "", "", ""};
    VAR6 = VAR2->VAR6;
    fprintf(VAR4, ""
               ""
               "",
            VAR2->VAR10[VAR11], VAR2->VAR10[VAR12], VAR2->VAR10[VAR13], VAR2->VAR10[VAR14], VAR2->VAR10[VAR15], VAR2->VAR10[VAR16], VAR2->VAR10[VAR17], VAR2->VAR10[VAR18], VAR2->VAR19, VAR6, VAR6 & VAR20 ? '' : '', VAR6 & VAR21 ? '' : '', VAR6 & VAR22 ? '' : '', VAR6 & VAR23 ? '' : '', VAR6 & VAR24 ? '' : '', VAR6 & VAR25 ? '' : '', VAR6 & VAR26 ? '' : '', VAR2->VAR27 & VAR28, (VAR2->VAR27 >> VAR29) & 1, (VAR2->VAR30 >> 20) & 1);
    for (VAR7 = 0; VAR7 < 6; VAR7++)
    {
        VAR31 *VAR32 = &VAR2->VAR33[VAR7];
        fprintf(VAR4, "", VAR9[VAR7], VAR32->VAR34, (int)VAR32->VAR35, VAR32->VAR36, VAR32->VAR5);
    }
    fprintf(VAR4, "", VAR2->VAR37.VAR34, (int)VAR2->VAR37.VAR35, VAR2->VAR37.VAR36, VAR2->VAR37.VAR5);
    fprintf(VAR4, "", VAR2->VAR38.VAR34, (int)VAR2->VAR38.VAR35, VAR2->VAR38.VAR36, VAR2->VAR38.VAR5);
    fprintf(VAR4, "", (int)VAR2->VAR39.VAR35, VAR2->VAR39.VAR36);
    fprintf(VAR4, "", (int)VAR2->VAR40.VAR35, VAR2->VAR40.VAR36);
    fprintf(VAR4, "", VAR2->VAR41[0], VAR2->VAR41[2], VAR2->VAR41[3], VAR2->VAR41[4]);
    if (VAR5 & VAR42)
    {
        if ((unsigned)VAR2->VAR43 < VAR44)
            strcpy(VAR8, VAR45[VAR2->VAR43]);
        else
            snprintf(VAR8, sizeof(VAR8), "", VAR2->VAR43);
        fprintf(VAR4, "", VAR2->VAR46, VAR2->VAR47, VAR8);
    }
    if (VAR5 & VAR48)
    {
        fprintf(VAR4, "", (double)VAR2->VAR49[0], (double)VAR2->VAR49[1], (double)VAR2->VAR49[2], (double)VAR2->VAR49[3]);
        fprintf(VAR4, "", (double)VAR2->VAR49[4], (double)VAR2->VAR49[5], (double)VAR2->VAR49[7], (double)VAR2->VAR49[8]);
    }
}