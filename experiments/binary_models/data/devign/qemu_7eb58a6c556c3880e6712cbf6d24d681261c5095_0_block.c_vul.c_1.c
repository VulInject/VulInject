int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    if (VAR5 == 0)
    {
        return 0;
    }
    VAR9 = FUN2(sizeof(*VAR9) + VAR5 * sizeof(*VAR9->VAR11));
    VAR9->VAR12 = 0;
    VAR9->VAR13 = VAR5;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR9->VAR11[VAR10].VAR14 = VAR4[VAR10].VAR14;
        VAR9->VAR11[VAR10].VAR15 = VAR4[VAR10].VAR15;
    }
    VAR5 = FUN3(VAR2, VAR4, VAR5, VAR9);
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR7 = FUN4(VAR2, VAR4[VAR10].VAR16, VAR4[VAR10].VAR17, VAR4[VAR10].VAR18, VAR19, VAR9);
        if (VAR7 == NULL)
        {
            if (VAR9->VAR12 == 0)
            {
                VAR4[VAR10].VAR20 = -VAR21;
                goto VAR22;
            }
            else
            {
                VAR9->VAR20 = -VAR21;
                break;
            }
        }
        else
        {
            VAR9->VAR12++;
        }
    }
    return 0;
VAR22:
    free(VAR9);
    return -1;
}