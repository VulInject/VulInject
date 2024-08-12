static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13 = FUN2(&VAR4);
    int VAR14 = FUN2(&VAR4);
    VAR8->VAR15.VAR6 = VAR6;
    FUN3(VAR2, "", VAR13, VAR14);
    VAR12 = FUN4(VAR2, VAR13, VAR14);
    if (VAR12 < 0)
        return VAR12;
    VAR4++;
    VAR8->VAR15.VAR16 = FUN2(&VAR4);
    VAR11 = FUN5(&VAR4) >> 6;
    if (VAR11 != 0)
    {
        FUN6(VAR2);
    }
    VAR4 += 1;
    VAR8->VAR15.VAR17 = FUN5(&VAR4);
    VAR8->VAR15.VAR18 = FUN5(&VAR4);
    if (VAR8->VAR15.VAR18 > VAR19)
    {
        FUN7(VAR2, VAR20, "", VAR8->VAR15.VAR18);
        VAR8->VAR15.VAR18 = 2;
        if (VAR2->VAR21 & VAR22)
        {
            return VAR23;
        }
    }
    for (VAR10 = 0; VAR10 < VAR8->VAR15.VAR18; VAR10++)
    {
        VAR8->VAR15.VAR24[VAR10].VAR25 = FUN2(&VAR4);
        VAR8->VAR15.VAR24[VAR10].VAR26 = FUN5(&VAR4);
        VAR8->VAR15.VAR24[VAR10].VAR27 = FUN5(&VAR4);
        VAR8->VAR15.VAR24[VAR10].VAR28 = FUN2(&VAR4);
        VAR8->VAR15.VAR24[VAR10].VAR29 = FUN2(&VAR4);
        if (VAR8->VAR15.VAR24[VAR10].VAR27 & 0x80)
        {
            VAR8->VAR15.VAR24[VAR10].VAR30 = FUN2(&VAR4);
            VAR8->VAR15.VAR24[VAR10].VAR31 = FUN2(&VAR4);
            VAR8->VAR15.VAR24[VAR10].VAR32 = FUN2(&VAR4);
            VAR8->VAR15.VAR24[VAR10].VAR33 = FUN2(&VAR4);
        }
        FUN3(VAR2, "", VAR8->VAR15.VAR24[VAR10].VAR28, VAR8->VAR15.VAR24[VAR10].VAR29);
        if (VAR8->VAR15.VAR24[VAR10].VAR28 > VAR2->VAR34 || VAR8->VAR15.VAR24[VAR10].VAR29 > VAR2->VAR35)
        {
            FUN7(VAR2, VAR20, "", VAR8->VAR15.VAR24[VAR10].VAR28, VAR8->VAR15.VAR24[VAR10].VAR29, VAR2->VAR34, VAR2->VAR35);
            VAR8->VAR15.VAR24[VAR10].VAR28 = 0;
            VAR8->VAR15.VAR24[VAR10].VAR29 = 0;
            if (VAR2->VAR21 & VAR22)
            {
                return VAR23;
            }
        }
    }
    return 0;
}