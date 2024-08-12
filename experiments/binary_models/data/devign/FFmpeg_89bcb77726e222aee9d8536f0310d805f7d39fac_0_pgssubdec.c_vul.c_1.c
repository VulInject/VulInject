static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13 = FUN2(&VAR4);
    int VAR14 = FUN2(&VAR4);
    uint16_t VAR15;
    VAR8->VAR16.VAR6 = VAR6;
    FUN3(VAR2, "", VAR13, VAR14);
    VAR12 = FUN4(VAR2, VAR13, VAR14);
    if (VAR12 < 0)
        return VAR12;
    VAR4++;
    VAR8->VAR16.VAR17 = FUN2(&VAR4);
    VAR11 = FUN5(&VAR4) >> 6;
    if (VAR11 != 0)
    {
        FUN6(VAR2);
    }
    VAR4 += 1;
    VAR8->VAR16.VAR18 = FUN5(&VAR4);
    VAR8->VAR16.VAR19 = FUN5(&VAR4);
    if (VAR8->VAR16.VAR19 > VAR20)
    {
        FUN7(VAR2, VAR21, "", VAR8->VAR16.VAR19);
        VAR8->VAR16.VAR19 = 2;
        if (VAR2->VAR22 & VAR23)
        {
            return VAR24;
        }
    }
    for (VAR10 = 0; VAR10 < VAR8->VAR16.VAR19; VAR10++)
    {
        if (VAR25 - VAR4 < 8)
        {
            FUN7(VAR2, VAR21, "");
            VAR8->VAR16.VAR19 = VAR10;
            return VAR24;
        }
        VAR8->VAR16.VAR26[VAR10].VAR27 = FUN2(&VAR4);
        VAR8->VAR16.VAR26[VAR10].VAR28 = FUN5(&VAR4);
        VAR8->VAR16.VAR26[VAR10].VAR29 = FUN5(&VAR4);
        VAR8->VAR16.VAR26[VAR10].VAR30 = FUN2(&VAR4);
        VAR8->VAR16.VAR26[VAR10].VAR31 = FUN2(&VAR4);
        if (VAR8->VAR16.VAR26[VAR10].VAR29 & 0x80)
        {
            VAR8->VAR16.VAR26[VAR10].VAR32 = FUN2(&VAR4);
            VAR8->VAR16.VAR26[VAR10].VAR33 = FUN2(&VAR4);
            VAR8->VAR16.VAR26[VAR10].VAR34 = FUN2(&VAR4);
            VAR8->VAR16.VAR26[VAR10].VAR35 = FUN2(&VAR4);
        }
        FUN3(VAR2, "", VAR8->VAR16.VAR26[VAR10].VAR30, VAR8->VAR16.VAR26[VAR10].VAR31);
        if (VAR8->VAR16.VAR26[VAR10].VAR30 > VAR2->VAR36 || VAR8->VAR16.VAR26[VAR10].VAR31 > VAR2->VAR37)
        {
            FUN7(VAR2, VAR21, "", VAR8->VAR16.VAR26[VAR10].VAR30, VAR8->VAR16.VAR26[VAR10].VAR31, VAR2->VAR36, VAR2->VAR37);
            VAR8->VAR16.VAR26[VAR10].VAR30 = 0;
            VAR8->VAR16.VAR26[VAR10].VAR31 = 0;
            if (VAR2->VAR22 & VAR23)
            {
                return VAR24;
            }
        }
    }
    return 0;