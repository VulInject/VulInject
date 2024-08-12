static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    int VAR9, VAR10;
    int VAR11, VAR12;
    VAR11 = VAR5->VAR11 / VAR8->VAR13;
    VAR12 = VAR5->VAR12 / VAR8->VAR14;
    if (FUN2())
    {
        VAR9 = VAR11 * 0x7FFF / (FUN3(VAR8->VAR15) - 1);
        VAR10 = VAR12 * 0x7FFF / (FUN4(VAR8->VAR15) - 1);
    }
    else if (VAR8->VAR16 == -1 || VAR8->VAR17 == -1)
    {
        VAR9 = 0;
        VAR10 = 0;
    }
    else
    {
        VAR9 = VAR11 - VAR8->VAR16;
        VAR10 = VAR12 - VAR8->VAR17;
    }
    VAR8->VAR16 = VAR11;
    VAR8->VAR17 = VAR12;
    if (FUN2() || FUN5(VAR8))
    {
        FUN6(VAR9, VAR10, 0, VAR8->VAR18);
    }
    if (!FUN2() && FUN5(VAR8))
    {
        VAR19 *VAR20 = FUN7(FUN8(VAR8->VAR21));
        VAR22 *VAR23 = FUN9(VAR20);
        VAR24 *VAR25 = FUN10(VAR20);
        int VAR11 = (int)VAR5->VAR26;
        int VAR12 = (int)VAR5->VAR27;
        if (VAR11 == 0)
        {
            VAR11 += 200;
        }
        if (VAR12 == 0)
        {
            VAR12 += 200;
        }
        if (VAR11 == (FUN11(VAR25) - 1))
        {
            VAR11 -= 200;
        }
        if (VAR12 == (FUN12(VAR25) - 1))
        {
            VAR12 -= 200;
        }
        if (VAR11 != (int)VAR5->VAR26 || VAR12 != (int)VAR5->VAR27)
        {
            FUN13(VAR23, VAR25, VAR11, VAR12);
            VAR8->VAR16 = -1;
            VAR8->VAR17 = -1;
            return VAR28;
        }
    }
    return VAR29;
}