static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    uint16_t VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    FUN2(VAR10, &VAR3->VAR15.VAR16.VAR17, VAR18)
    {
        VAR19 *VAR20 = VAR10->VAR21;
        VAR12 = (VAR11 *)VAR20;
        VAR14 = FUN3(VAR12);
        VAR8 = VAR22;
        if (VAR14->VAR23 && VAR14->FUN4() == VAR5->VAR24)
        {
            VAR8 = VAR14->FUN5(VAR12, VAR5);
            break;
        }
    }
    return VAR8;
}