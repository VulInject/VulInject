static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5 + VAR3;
    int VAR6;
    if (VAR5->VAR7[1].VAR8.VAR9 == VAR10 && VAR5->VAR11[1] >= 0 && (VAR5->VAR12[1]) + VAR5->VAR13 < VAR5->VAR7[1].VAR8.VAR14)
    {
        FUN2("", VAR5->VAR12[1], VAR5->VAR13);
        VAR5->VAR12[1] += VAR5->VAR13;
        VAR5->VAR15[1] = 0;
        VAR5->VAR13 = FUN3(VAR5->VAR7[0].VAR8.VAR14 - (VAR5->VAR12[1]), VAR5->VAR16[1]);
        VAR5->VAR17[1] &= ~VAR18;
        if (!VAR3)
            VAR5->VAR17[0] &= ~VAR19;
        VAR5->VAR17[1] &= ~(VAR20 | VAR21 | VAR22);
        if (!VAR3)
            VAR5->VAR17[0] &= ~(VAR23 | VAR24 | VAR25 | VAR26);
        VAR5->VAR17[1] |= VAR27 | VAR28;
        if (!VAR3)
            VAR5->VAR17[0] |= VAR29;
        FUN4(VAR2, VAR3, 1);
        return;
    }
    VAR6 = FUN3(VAR5->VAR16[1] & 0x3ff, sizeof(VAR2->VAR30));
    if (!VAR3)
    {
        if (VAR5->VAR7[0].VAR8.VAR31 == 2)
        {
            VAR6 = FUN3(VAR2->VAR32, 8);
        }
        else
        {
            VAR6 = FUN3(VAR2->VAR32, 64);
        }
        VAR2->VAR32 -= VAR6;
    }
    return FUN5(VAR2, VAR5, VAR3, VAR10, VAR6, VAR33, 1);
}