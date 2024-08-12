static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    int VAR8;
    FUN2(VAR2, VAR4);
    if (VAR6->VAR9 == VAR10)
    {
        int VAR11 = 0, VAR12 = 0, VAR13 = 0;
        for (VAR8 = 0; VAR8 < VAR4->VAR14; VAR8++)
        {
            VAR15 *VAR16 = VAR4->VAR17[VAR8];
            if (VAR16->VAR18->VAR19 == VAR20)
                VAR11++;
            else if (VAR16->VAR18->VAR19 == VAR21)
                VAR12++;
            else
                VAR13++;
        }
        if (VAR11 != 1 || VAR12 != 1 || VAR13)
        {
            FUN3(VAR4, VAR22, "");
            return FUN4(VAR23);
        }
        return FUN5(VAR2, VAR4);
    }
    return 0;
}