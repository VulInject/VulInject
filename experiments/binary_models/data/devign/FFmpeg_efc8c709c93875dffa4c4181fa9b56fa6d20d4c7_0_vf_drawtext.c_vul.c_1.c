static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const uint8_t VAR7[4], const uint8_t VAR8[4], int VAR9, int VAR10)
{
    char *VAR11 = VAR2->VAR11;
    uint32_t VAR12 = 0;
    int VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17 = NULL;
    for (VAR13 = 0, VAR15 = VAR11; *VAR15; VAR13++)
    {
        Glyph VAR18 = {0};
        FUN2(VAR12, *VAR15++, continue;);
        if (VAR12 == '' || VAR12 == '' || VAR12 == '')
            continue;
        VAR18.VAR12 = VAR12;
        VAR17 = FUN3(VAR2->VAR19, &VAR18, (void *)VAR20, NULL);
        if (VAR17->VAR21.VAR22 != VAR23 && VAR17->VAR21.VAR22 != VAR24)
            return FUN4(VAR25);
        if (VAR2->VAR26)
        {
            FUN5(VAR4, &VAR17->VAR21, VAR2->VAR27[VAR13].VAR9 + VAR9, VAR2->VAR27[VAR13].VAR10 + VAR10, VAR5, VAR6, VAR2->VAR28[0], VAR7, VAR2->VAR29);
        }
        else
        {
            FUN6(VAR4, &VAR17->VAR21, VAR2->VAR27[VAR13].VAR9 + VAR9, VAR2->VAR27[VAR13].VAR10 + VAR10, VAR5, VAR6, VAR8, VAR2->VAR30, VAR2->VAR31);
        }
    }
    return 0;
}