static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    int VAR9, VAR10;
    int VAR11, VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16;
    VAR14 = FUN2(VAR8->VAR17) * VAR8->VAR18;
    VAR13 = FUN3(VAR8->VAR17) * VAR8->VAR19;
    FUN4(FUN5(VAR8->VAR20), &VAR15, &VAR16);
    VAR11 = VAR12 = 0;
    if (VAR15 > VAR14)
    {
        VAR11 = (VAR15 - VAR14) / 2;
    }
    if (VAR16 > VAR13)
    {
        VAR12 = (VAR16 - VAR13) / 2;
    }
    VAR9 = (VAR5->VAR9 - VAR11) / VAR8->VAR18;
    VAR10 = (VAR5->VAR10 - VAR12) / VAR8->VAR19;
    if (VAR9 < 0 || VAR10 < 0 || VAR9 >= FUN2(VAR8->VAR17) || VAR10 >= FUN3(VAR8->VAR17))
    {
        return VAR21;
    }
    if (FUN6())
    {
        FUN7(VAR8->VAR22.VAR23, VAR24, VAR9, FUN2(VAR8->VAR17));
        FUN7(VAR8->VAR22.VAR23, VAR25, VAR10, FUN3(VAR8->VAR17));
        FUN8();
    }
    else if (VAR8->VAR26 != -1 && VAR8->VAR27 != -1 && FUN9(VAR8))
    {
        FUN10(VAR8->VAR22.VAR23, VAR24, VAR9 - VAR8->VAR26);
        FUN10(VAR8->VAR22.VAR23, VAR25, VAR10 - VAR8->VAR27);
        FUN8();
    }
    VAR8->VAR26 = VAR9;
    VAR8->VAR27 = VAR10;
    if (!FUN6() && FUN9(VAR8))
    {
        VAR28 *VAR29 = FUN11(VAR8->VAR20);
        int VAR9 = (int)VAR5->VAR30;
        int VAR10 = (int)VAR5->VAR31;
        if (VAR9 == 0)
        {
            VAR9 += 200;
        }
        if (VAR10 == 0)
        {
            VAR10 += 200;
        }
        if (VAR9 == (FUN12(VAR29) - 1))
        {
            VAR9 -= 200;
        }
        if (VAR10 == (FUN13(VAR29) - 1))
        {
            VAR10 -= 200;
        }
        if (VAR9 != (int)VAR5->VAR30 || VAR10 != (int)VAR5->VAR31)
        {
            VAR32 *VAR33 = FUN14((VAR34 *)VAR5);
            FUN15(VAR33, VAR29, VAR9, VAR10);
            VAR35 *VAR36 = FUN16(VAR3);
            FUN17(VAR36, VAR29, VAR9, VAR10);
            VAR8->VAR26 = -1;
            VAR8->VAR27 = -1;
            return VAR37;
        }
    }
    return VAR21;
}