static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8 = 0;
    int VAR9;
    for (VAR7 = 0; VAR7 < VAR5->VAR10; VAR7++)
    {
        struct VAR11 *VAR12 = VAR5->VAR13[VAR7];
        VAR9 = FUN2(VAR5->VAR13[VAR7]);
        if (VAR9 && !VAR12->VAR14)
        {
            VAR12->VAR14 = 1;
            VAR8 = 1;
            VAR12->VAR15 = FUN3(VAR5, VAR12);
            VAR12->VAR16.VAR17 = 0;
            if (VAR5->VAR18 != VAR19)
            {
                VAR12->VAR20 = VAR5->VAR18;
                VAR12->VAR21 = VAR22;
                VAR12->VAR23 = -1;
            }
            FUN4(VAR2, VAR24, "", VAR7, VAR12->VAR15);
        }
        else if (VAR3 && !VAR9 && VAR12->VAR14)
        {
            if (VAR12->VAR25)
                FUN5(VAR12->VAR26, &VAR12->VAR25);
            VAR12->VAR14 = 0;
            VAR8 = 1;
            FUN4(VAR2, VAR24, "", VAR7);
        }
    }
    return VAR8;
}