static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    NppStatus VAR11;
    int VAR12;
    for (VAR12 = 0; VAR12 < FUN2(VAR7->VAR13) && VAR7->VAR13[VAR12]; VAR12++)
    {
        int VAR14 = VAR4->VAR15[VAR12].VAR16;
        int VAR17 = VAR4->VAR15[VAR12].VAR18;
        int VAR19 = VAR4->VAR20[VAR12].VAR16;
        int VAR21 = VAR4->VAR20[VAR12].VAR18;
        VAR11 = FUN3(VAR7->VAR13[VAR12], (VAR22){VAR14, VAR17}, VAR7->VAR23[VAR12], (VAR24){0, 0, VAR14, VAR17}, VAR6->VAR13[VAR12], VAR6->VAR23[VAR12], (VAR24){0, 0, VAR19, VAR21}, (double)VAR19 / VAR14, (double)VAR21 / VAR17, 0.0, 0.0, VAR9->VAR25);
        if (VAR11 != VAR26)
        {
            FUN4(VAR2, VAR27, "", VAR11);
            return VAR28;
        }
    }
    return 0;
}