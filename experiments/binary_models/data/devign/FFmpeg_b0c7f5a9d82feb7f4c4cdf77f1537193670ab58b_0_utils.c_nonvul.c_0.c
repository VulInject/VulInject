int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    int64_t VAR9;
    int VAR10, VAR11;
    VAR8 = VAR2->VAR12[VAR3];
    VAR9 = (1LL << VAR2->VAR13) - 1;
    if (VAR8->VAR14.VAR15 == VAR16 && VAR6 == 0)
        VAR10 = 0;
    else
        VAR10 = VAR2->VAR17->FUN2(VAR2, VAR3, VAR5, VAR6, VAR8->VAR18.VAR19 & VAR9);
    if (VAR10 < 0)
        return VAR10;
    switch (VAR8->VAR14.VAR15)
    {
    case VAR16:
        VAR11 = FUN3(&VAR8->VAR14, VAR6);
        if (VAR11 >= 0 && (VAR6 || VAR8->VAR18.VAR20 != VAR8->VAR18.VAR21 >> 1 || VAR8->VAR18.VAR19))
        {
            FUN4(&VAR8->VAR18, (VAR22)VAR2->VAR23 * VAR11);
        }
        break;
    case VAR24:
        FUN4(&VAR8->VAR18, (VAR22)VAR2->VAR23 * VAR8->VAR14.VAR25);
        break;
    default:
        break;
    }
    return VAR10;
}