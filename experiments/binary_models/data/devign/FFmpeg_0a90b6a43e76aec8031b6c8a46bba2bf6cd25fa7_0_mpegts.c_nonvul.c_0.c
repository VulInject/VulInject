static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    int64_t VAR10, VAR11;
    uint8_t VAR12[VAR13];
    int VAR14, VAR15 = ((VAR16 *)VAR3->VAR17[VAR4]->VAR9)->VAR15;
    VAR10 = ((*VAR5 + VAR8->VAR18 - 1 - VAR8->VAR19) / VAR8->VAR18) * VAR8->VAR18 + VAR8->VAR19;
    while (VAR10 < VAR6)
    {
        if (FUN2(VAR3->VAR20, VAR10, VAR21) < 0)
            return VAR22;
        if (FUN3(VAR3->VAR20, VAR12, VAR13) != VAR13)
            return VAR22;
        if ((VAR15 < 0 || (FUN4(VAR12 + 1) & 0x1fff) == VAR15) && FUN5(&VAR11, &VAR14, VAR12) == 0)
        {
            *VAR5 = VAR10;
            return VAR11;
        }
        VAR10 += VAR8->VAR18;
    }
    return VAR22;
}