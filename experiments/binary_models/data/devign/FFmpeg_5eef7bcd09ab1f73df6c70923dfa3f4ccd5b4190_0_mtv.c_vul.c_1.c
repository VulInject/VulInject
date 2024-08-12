static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10;
    int VAR11;
    if ((FUN2(VAR9) - VAR2->VAR12 + VAR6->VAR13) % VAR6->VAR14)
    {
        FUN3(VAR9, VAR15);
        VAR10 = FUN4(VAR9, VAR4, VAR16);
        if (VAR10 != VAR16)
            return FUN5(VAR17);
        VAR4->VAR18 -= VAR15;
        VAR4->VAR19 = VAR20;
    }
    else
    {
        VAR10 = FUN4(VAR9, VAR4, VAR6->VAR13);
        if (VAR10 != VAR6->VAR13)
            return FUN5(VAR17);
        for (VAR11 = 0; VAR11 < VAR6->VAR13 / 2; VAR11++)
            *((VAR21 *)VAR4->VAR22 + VAR11) = FUN6(*((VAR21 *)VAR4->VAR22 + VAR11));
        VAR4->VAR19 = VAR23;
    }
    return VAR10;
}