static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5, const VAR1 *VAR6, const VAR1 *VAR7)
{
    uint32_t VAR8, VAR9, VAR10, VAR11;
    unsigned VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    if (VAR4 && VAR5)
    {
        VAR9 = VAR6[VAR4 - 1];
        VAR8 = VAR7[VAR4];
        VAR10 = VAR7[VAR4 - 1];
        VAR13 = (VAR8 >> VAR19) & 0xFF;
        VAR14 = (VAR9 >> VAR19) & 0xFF;
        VAR15 = (VAR10 >> VAR19) & 0xFF;
        VAR17 = FUN2(VAR3, VAR13, VAR14, VAR15);
        VAR16 = VAR17 + FUN2(VAR3, ((VAR8 >> VAR20) & 0xFF) - VAR13, ((VAR9 >> VAR20) & 0xFF) - VAR14, ((VAR10 >> VAR20) & 0xFF) - VAR15);
        VAR18 = VAR17 + FUN2(VAR3, ((VAR8 >> VAR21) & 0xFF) - VAR13, ((VAR9 >> VAR21) & 0xFF) - VAR14, ((VAR10 >> VAR21) & 0xFF) - VAR15);
    }
    else
    {
        if (VAR4)
            VAR11 = VAR6[VAR4 - 1];
        else
            VAR11 = VAR7[VAR4];
        VAR12 = FUN3(&VAR3->VAR22, &VAR3->VAR23);
        VAR16 = ((VAR11 >> VAR20) & 0xFF) - FUN4(VAR12);
        VAR12 = FUN3(&VAR3->VAR22, &VAR3->VAR23);
        VAR17 = ((VAR11 >> VAR19) & 0xFF) - FUN4(VAR12);
        VAR12 = FUN3(&VAR3->VAR22, &VAR3->VAR23);
        VAR18 = ((VAR11 >> VAR21) & 0xFF) - FUN4(VAR12);
        return (VAR16 << VAR20) | (VAR17 << VAR19) | (VAR18 << VAR21)