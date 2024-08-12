static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint32_t VAR5 = VAR2->VAR4[VAR6];
    uint32_t VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    FUN2("", VAR5);
    for (VAR11 = 0; VAR11 < 32; VAR11++)
    {
        for (VAR12 = 0; VAR12 < 32; VAR12++)
        {
            VAR13 = (VAR11 << 5) | VAR12;
            VAR4 = &VAR2->VAR14[VAR13];
            VAR8 = VAR4->VAR15 != NULL && VAR4->VAR15 != VAR16;
            VAR7 = VAR4->VAR17 != NULL && VAR4->VAR17 != VAR16;
            VAR8 = 0;
            VAR7 = 0;
            VAR10 = VAR4->VAR18 != NULL && VAR4->VAR18 != VAR16;
            VAR9 = VAR4->VAR19 != NULL && VAR4->VAR19 != VAR16;
            if (VAR8 || VAR7 || VAR10 || VAR9)
            {
                FUN2("", (VAR11 << 5) | VAR12, (VAR11 << 5) | VAR12, VAR4->VAR20, VAR8 ? '' : '', VAR7 ? '' : '', VAR10 ? '' : '', VAR9 ? '' : '');
            }
        }
    }
    FUN3(VAR21);
    FUN3(VAR22);
}