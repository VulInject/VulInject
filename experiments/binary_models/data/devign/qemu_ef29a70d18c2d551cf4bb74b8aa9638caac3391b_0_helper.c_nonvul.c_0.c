void FUN1(VAR1 *VAR2)
{
    int VAR3 = -1;
    FUN2(fprintf(VAR4, "", VAR2->VAR5, VAR2->VAR6));
    switch (VAR2->VAR5)
    {
    case VAR7:
        VAR3 = VAR2->VAR8;
        VAR2->VAR9[VAR10] = VAR2->VAR11 + 2;
        break;
    case VAR12:
        VAR3 = VAR2->VAR13;
        VAR2->VAR9[VAR10] = VAR2->VAR11;
        break;
    default:
        if (!(VAR2->VAR9[VAR14] & VAR15))
            return;
        VAR3 = VAR2->VAR16;
        VAR2->VAR9[VAR10] = VAR2->VAR11;
        break;
    }
    if ((VAR2->VAR9[VAR14] & VAR17))
    {
        FUN2(fprintf(VAR4, "", VAR3, VAR2->VAR11, VAR2->VAR18[VAR19], VAR2->VAR9[VAR10], VAR2->VAR9[VAR20], VAR2->VAR9[VAR14], VAR2->VAR21, VAR2->VAR22));
    }
    VAR2->VAR11 = FUN3(VAR2->VAR9[VAR23] + VAR3 * 4);
    if (VAR2->VAR9[VAR14] & VAR17)
    {
        VAR2->VAR9[VAR24] = VAR2->VAR18[VAR19];
        VAR2->VAR18[VAR19] = VAR2->VAR25;
    }
    FUN4(VAR2);
    FUN2(fprintf(VAR4, "", VAR26, VAR2->VAR11, VAR3, VAR2->VAR9[VAR14], VAR2->VAR9[VAR20], VAR2->VAR9[VAR10]));
}