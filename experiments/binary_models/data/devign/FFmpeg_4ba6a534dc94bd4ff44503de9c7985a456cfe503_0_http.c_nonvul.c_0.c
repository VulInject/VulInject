static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    VAR2 *VAR9 = VAR7->VAR10;
    int64_t VAR11 = VAR7->VAR4;
    uint8_t VAR12[VAR13];
    int VAR14;
    VAR15 *VAR16 = NULL;
    if (VAR5 == VAR17)
        return VAR7->VAR18;
    else if ((VAR5 == VAR19 && VAR4 == 0) || (VAR5 == VAR20 && VAR4 == VAR7->VAR4))
        return VAR7->VAR4;
    else if ((VAR7->VAR18 == -1 && VAR5 == VAR21) || VAR3->VAR22)
        return -1;
    if (VAR5 == VAR19)
        VAR4 += VAR7->VAR4;
    else if (VAR5 == VAR21)
        VAR4 += VAR7->VAR18;
    if (VAR4 < 0)
        return FUN2(VAR23);
    VAR7->VAR4 = VAR4;
    VAR14 = VAR7->VAR24 - VAR7->VAR25;
    memcpy(VAR12, VAR7->VAR25, VAR14);
    VAR7->VAR10 = NULL;
    FUN3(&VAR16, VAR7->VAR26, 0);
    if (FUN4(VAR3, &VAR16) < 0)
    {
        FUN5(&VAR16);
        memcpy(VAR7->VAR27, VAR12, VAR14);
        VAR7->VAR25 = VAR7->VAR27;
        VAR7->VAR24 = VAR7->VAR27 + VAR14;
        VAR7->VAR10 = VAR9;
        VAR7->VAR4 = VAR11;
        return -1;
    }
    FUN5(&VAR16);
    FUN6(VAR9);
    return VAR4;
}