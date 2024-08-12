static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    int VAR9, VAR10 = 0;
    const char *VAR11;
    char VAR12[256];
    if (VAR7->VAR13 == VAR14 || VAR7->VAR13 == VAR15)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR16; VAR9++)
        {
            VAR7->VAR17[VAR9].VAR18 = FUN2(VAR2->VAR19, VAR7->VAR17[VAR9].VAR20);
            if (VAR7->VAR17[VAR9].VAR18 < 0)
            {
                VAR11 = FUN3(VAR7->VAR17[VAR9].VAR20);
                FUN4(VAR12, sizeof(VAR12), 0, VAR2->VAR19);
                FUN5(VAR4, VAR21, "", VAR11, VAR12);
                VAR10 = FUN6(VAR22);
            }
        }
    }
    return VAR10;
}