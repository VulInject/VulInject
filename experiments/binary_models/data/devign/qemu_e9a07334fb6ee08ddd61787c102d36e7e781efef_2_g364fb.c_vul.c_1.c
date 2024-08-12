static void FUN1(void *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5, VAR6;
    uint8_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (VAR4->VAR12 != 8)
    {
        FUN2("", VAR4->VAR12);
        return;
    }
    VAR11 = fopen(VAR2, "");
    if (!VAR11)
        return;
    if (VAR4->VAR13 & VAR14)
    {
        fprintf(VAR11, "", VAR4->VAR15, VAR4->VAR16);
        for (VAR5 = 0; VAR5 < VAR4->VAR16; VAR5++)
            for (VAR6 = 0; VAR6 < VAR4->VAR15; VAR6++)
                fputc(0, VAR11);
    }
    else
    {
        VAR9 = VAR4->VAR17 + VAR4->VAR18;
        fprintf(VAR11, "", VAR4->VAR15, VAR4->VAR16, 255);
        for (VAR5 = 0; VAR5 < VAR4->VAR16; VAR5++)
            for (VAR6 = 0; VAR6 < VAR4->VAR15; VAR6++, VAR9++)
            {
                VAR7 = *VAR9;
                fputc(VAR4->VAR19[VAR7][0], VAR11);
                fputc(VAR4->VAR19[VAR7][1], VAR11);
                fputc(VAR4->VAR19[VAR7][2], VAR11);
            }
    }
    fclose(VAR11);