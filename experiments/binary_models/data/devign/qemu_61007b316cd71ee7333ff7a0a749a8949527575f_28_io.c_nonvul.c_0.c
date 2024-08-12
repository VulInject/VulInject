int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    if (VAR2->VAR9 == NULL)
    {
        for (VAR8 = 0; VAR8 < VAR5; VAR8++)
        {
            VAR4[VAR8].VAR10 = -VAR11;
        }
        return -1;
    }
    if (VAR5 == 0)
    {
        return 0;
    }
    VAR7 = FUN2(sizeof(*VAR7) + VAR5 * sizeof(*VAR7->VAR12));
    VAR7->VAR13 = 0;
    VAR7->VAR14 = VAR5;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        VAR7->VAR12[VAR8].VAR15 = VAR4[VAR8].VAR15;
        VAR7->VAR12[VAR8].VAR16 = VAR4[VAR8].VAR16;
    }
    VAR5 = FUN3(VAR2, VAR4, VAR5, VAR7);
    FUN4(VAR7, VAR7->VAR14, VAR5);
    VAR7->VAR13 = VAR5;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        FUN5(VAR2, VAR4[VAR8].VAR17, VAR4[VAR8].VAR18, VAR4[VAR8].VAR19, VAR4[VAR8].VAR20, VAR21, VAR7, true);
    }
    return 0;
}