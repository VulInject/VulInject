int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR5, VAR6 = VAR7, VAR8 = !VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    if (VAR2->VAR14 != VAR15)
        goto VAR16;
    switch (VAR2->VAR17)
    {
    case VAR18:
        VAR13 = 1;
        break;
    case VAR19:
        VAR13 = 2;
        break;
    case VAR20:
        VAR13 = 4;
        break;
    default:
        goto VAR16;
    }
    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
    {
        VAR10 = VAR2->VAR21[VAR3][VAR12][1] << VAR8;
        VAR4 = FUN2(VAR4, VAR10);
        VAR6 = FUN3(VAR6, VAR10);
    }
    VAR11 = (FUN2(-VAR6, VAR4) + 63) >> 6;
    return FUN3(FUN2(VAR2->VAR22 + VAR11, 0), VAR2->VAR23 - 1);
VAR16:
    return VAR2->VAR23 - 1;
}