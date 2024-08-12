static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint32_t VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    if (VAR5 != 26)
        return VAR13;
    if (!(VAR4->VAR14 & VAR15))
    {
        FUN2(VAR2, VAR16, "");
        return VAR13;
    }
    VAR4->VAR17 = VAR4->VAR7;
    VAR4->VAR18 = VAR4->VAR8;
    VAR4->VAR19 = VAR4->VAR9;
    VAR4->VAR20 = VAR4->VAR10;
    VAR4->VAR21 = VAR4->VAR11;
    VAR6 = FUN3(&VAR4->VAR22);
    VAR7 = FUN3(&VAR4->VAR22);
    VAR8 = FUN3(&VAR4->VAR22);
    VAR9 = FUN3(&VAR4->VAR22);
    VAR10 = FUN3(&VAR4->VAR22);
    FUN4(&VAR4->VAR22, 4);
    VAR11 = FUN5(&VAR4->VAR22);
    VAR12 = FUN5(&VAR4->VAR22);
    FUN4(&VAR4->VAR22, 4);
    if (VAR6 == 0 && (VAR7 != VAR4->VAR23 || VAR8 != VAR4->VAR24 || VAR9 != 0 || VAR10 != 0) || VAR7 <= 0 || VAR8 <= 0 || VAR9 < 0 || VAR10 < 0 || VAR7 > VAR4->VAR23 - VAR9 || VAR8 > VAR4->VAR24 - VAR10)
        return VAR13;
    if (VAR6 == 0 && VAR4->VAR11 == VAR25)
    {
        VAR4->VAR11 = VAR26;
    }
    if (VAR4->VAR11 == VAR27 && !VAR4->VAR28 && (VAR2->VAR29 == VAR30 || VAR2->VAR29 == VAR31 || VAR2->VAR29 == VAR32 || VAR2->VAR29 == VAR33 || VAR2->VAR29 == VAR34 || VAR2->VAR29 == VAR35))
    {
        VAR4->VAR11 = VAR36;
    }
    VAR4->VAR7 = VAR7;
    VAR4->VAR8 = VAR8;
    VAR4->VAR9 = VAR9;
    VAR4->VAR10 = VAR10;
    VAR4->VAR11 = VAR11;
    VAR4->VAR12 = VAR12;
    return 0;
}