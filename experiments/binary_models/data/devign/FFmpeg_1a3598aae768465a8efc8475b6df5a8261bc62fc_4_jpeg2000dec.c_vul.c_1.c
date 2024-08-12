static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5;
    if (VAR2->VAR6 - VAR2->VAR7 < 5)
        return FUN2(VAR8);
    VAR4->VAR9 = FUN3(&VAR2->VAR7) + 1;
    if (VAR4->VAR9 > VAR10)
        return VAR11;
    if (VAR4->VAR9 < VAR2->VAR12)
        VAR4->VAR13 = 1;
    else
        VAR4->VAR13 = VAR4->VAR9 - VAR2->VAR12;
    VAR4->VAR14 = FUN3(&VAR2->VAR7) + 2;
    VAR4->VAR15 = FUN3(&VAR2->VAR7) + 2;
    if (VAR4->VAR14 > 10 || VAR4->VAR15 > 10 || VAR4->VAR14 + VAR4->VAR15 > 12)
    {
        FUN4(VAR2->VAR16, VAR17, "");
        return VAR11;
    }
    VAR4->VAR18 = FUN3(&VAR2->VAR7);
    if (VAR4->VAR18 != 0)
    {
        FUN5(VAR2->VAR16, "");
        return VAR19;
    }
    VAR4->VAR20 = FUN3(&VAR2->VAR7);
    if ((VAR2->VAR16->VAR21 & VAR22) && (VAR4->VAR20 == VAR23))
        VAR4->VAR20 = VAR24;
    if (VAR4->VAR25 & VAR26)
    {
        int VAR27;
        for (VAR27 = 0; VAR27 < VAR4->VAR9; VAR27++)
        {
            VAR5 = FUN3(&VAR2->VAR7);
            VAR4->VAR28[VAR27] = VAR5 & 0x0F;
            VAR4->VAR29[VAR27] = (VAR5 >> 4) & 0x0F;
        }
    }
    return 0;
}