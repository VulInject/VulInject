static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    int VAR10, VAR11;
    int VAR12;
    VAR10 = FUN2(VAR4, VAR5, VAR6);
    FUN3(VAR2, VAR13, "" VAR14 "", VAR4->VAR15, VAR5, VAR10);
    if (VAR10 < 0 && VAR4->VAR16 && VAR5 < VAR4->VAR17[0].VAR5)
        VAR10 = 0;
    if (VAR10 < 0)
        return VAR18;
    VAR8->VAR19 = VAR10;
    FUN3(VAR2, VAR13, "", VAR4->VAR15, VAR8->VAR19);
    if (VAR8->VAR20)
    {
        VAR11 = 0;
        for (VAR12 = 0; VAR12 < VAR8->VAR21; VAR12++)
        {
            int VAR22 = VAR11 + VAR8->VAR20[VAR12].VAR23;
            if (VAR22 > VAR8->VAR19)
            {
                VAR8->VAR24 = VAR12;
                VAR8->VAR25 = VAR8->VAR19 - VAR11;
                break;
            }
            VAR11 = VAR22;
        }
    }
    VAR11 = 0;
    for (VAR12 = 0; VAR12 < VAR8->VAR26; VAR12++)
    {
        int VAR22 = VAR11 + FUN4(VAR8, VAR12);
        if (VAR22 > VAR8->VAR19)
        {
            VAR8->VAR27 = VAR12;
            VAR8->VAR28 = VAR8->VAR19 - VAR11;
            break;
        }
        VAR11 = VAR22;
    }
    return VAR10;
}