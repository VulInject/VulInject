int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR5, VAR6 = VAR7, VAR8 = !VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    if (VAR2->VAR14 != VAR15 || VAR2->VAR16)
        goto VAR17;
    switch (VAR2->VAR18)
    {
    case VAR19:
        VAR13 = 1;
        break;
    case VAR20:
        VAR13 = 2;
        break;
    case VAR21:
        VAR13 = 4;
        break;
    default:
        goto VAR17;
    }
    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
    {
        VAR10 = VAR2->VAR22[VAR3][VAR12][1];
        VAR4 = FUN2(VAR4, VAR10);
        VAR6 = FUN3(VAR6, VAR10);
    }
    VAR11 = ((FUN2(-VAR6, VAR4) << VAR8) + 63) >> 6;
    return FUN3(FUN2(VAR2->VAR23 + VAR11, 0), VAR2->VAR24 - 1);
VAR17:
    return VAR2->VAR24 - 1;
}