static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    offset_t VAR8 = FUN2(VAR2);
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    VAR4->VAR9 = VAR10;
    for (VAR7 = 0; VAR7 < VAR4->VAR11; VAR7++)
    {
        if (VAR4->VAR12[VAR7].VAR13 <= 0)
            continue;
        if (VAR4->VAR12[VAR7].VAR14->VAR15 == VAR16)
        {
            VAR4->VAR12[VAR7].VAR9 = VAR4->VAR12[VAR7].VAR14->VAR17.VAR18;
            VAR4->VAR12[VAR7].VAR19 = VAR4->VAR12[VAR7].VAR14->VAR17.VAR20;
        }
        else if (VAR4->VAR12[VAR7].VAR14->VAR15 == VAR21)
        {
            VAR4->VAR12[VAR7].VAR9 = VAR4->VAR12[VAR7].VAR14->VAR22;
            VAR4->VAR12[VAR7].VAR19 = VAR4->VAR12[VAR7].VAR14->VAR23;
        }
        VAR4->VAR12[VAR7].VAR24 = (VAR25)VAR4->VAR12[VAR7].VAR26 * VAR4->VAR12[VAR7].VAR19;
        VAR4->VAR12[VAR7].VAR27 = VAR4->VAR27;
        VAR4->VAR12[VAR7].VAR28 = VAR7 + 1;
    }
    FUN5(VAR2, VAR4);
    for (VAR7 = 0; VAR7 < VAR4->VAR11; VAR7++)
    {
        if (VAR4->VAR12[VAR7].VAR13 > 0)
        {
            FUN6(VAR2, &(VAR4->VAR12[VAR7]));
        }
    }
    if (VAR4->VAR29 == VAR30)
        FUN7(VAR2, VAR6);
    else
        FUN8(VAR2, VAR4, VAR6);
    return FUN9(VAR2, VAR8);
}