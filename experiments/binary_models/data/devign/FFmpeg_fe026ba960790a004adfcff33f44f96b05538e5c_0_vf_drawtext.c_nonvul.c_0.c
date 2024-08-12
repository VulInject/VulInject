static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const uint8_t VAR7[4], const uint8_t VAR8[4], int VAR9, int VAR10)
{
    char *VAR11 = VAR2->VAR12;
    uint32_t VAR13 = 0;
    int VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18 = NULL;
    for (VAR14 = 0, VAR16 = VAR11; *VAR16; VAR14++)
    {
        Glyph VAR19 = {0};
        FUN2(VAR13, *VAR16++, continue;);
        if (VAR13 == '' || VAR13 == '' || VAR13 == '')
            continue;
        VAR19.VAR13 = VAR13;
        VAR18 = FUN3(VAR2->VAR20, &VAR19, (void *)VAR21, NULL);
        if (VAR18->VAR22.VAR23 != VAR24 && VAR18->VAR22.VAR23 != VAR25)
            return FUN4(VAR26);
        if (VAR2->VAR27)
        {
            FUN5(VAR4, &VAR18->VAR22, VAR2->VAR28[VAR14].VAR9 + VAR9, VAR2->VAR28[VAR14].VAR10 + VAR10, VAR5, VAR6, VAR2->VAR29[0], VAR7, VAR2->VAR30, VAR2->VAR31);
        }
        else
        {
            FUN6(VAR4, &VAR18->VAR22, VAR2->VAR28[VAR14].VAR9 + VAR9, VAR2->VAR28[VAR14].VAR10 + VAR10, VAR5, VAR6, VAR8, VAR2->VAR32, VAR2->VAR33, VAR2->VAR31);
        }
    }
    return 0;
}