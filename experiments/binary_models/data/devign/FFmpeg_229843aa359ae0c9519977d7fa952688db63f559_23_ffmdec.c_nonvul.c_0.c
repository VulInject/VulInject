static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int64_t VAR9, VAR10, VAR11;
    int64_t VAR12, VAR13, VAR14;
    double VAR15;
    FUN2(VAR2, "", VAR4 / 1000000.0);
    if (VAR7->VAR16 && VAR7->VAR16 < VAR7->VAR17)
    {
        if (FUN3(VAR2, VAR18) < VAR4)
        {
            VAR9 = VAR18;
            VAR10 = VAR7->VAR16 - VAR18;
        }
        else
        {
            VAR9 = VAR7->VAR16;
            VAR10 = VAR7->VAR17 - VAR18;
        }
    }
    else
    {
        VAR9 = VAR18;
        VAR10 = VAR7->VAR17 - VAR18;
    }
    while (VAR9 <= VAR10)
    {
        VAR12 = FUN3(VAR2, VAR9);
        VAR13 = FUN3(VAR2, VAR10);
        if (VAR12 > VAR4 || VAR13 <= VAR4)
        {
            VAR11 = VAR12 > VAR4 ? VAR9 : VAR10;
            goto VAR19;
        }
        VAR15 = (double)(VAR10 - VAR9) * (double)(VAR4 - VAR12) / (double)(VAR13 - VAR12);
        VAR11 = (((VAR20)VAR15) / VAR18) * VAR18;
        if (VAR11 <= VAR9)
            VAR11 = VAR9;
        else if (VAR11 >= VAR10)
            VAR11 = VAR10;
        VAR14 = FUN3(VAR2, VAR11);
        if (VAR14 == VAR4)
        {
            goto VAR19;
        }
        else if (VAR14 > VAR4)
        {
            VAR10 = VAR11 - VAR18;
        }
        else
        {
            VAR9 = VAR11 + VAR18;
        }
    }
    VAR11 = (VAR5 & VAR21) ? VAR9 : VAR10;
VAR19:
    if (FUN4(VAR2, VAR11) < 0)
        return -1;
    VAR7->VAR22 = VAR23;
    VAR7->VAR24 = VAR7->VAR25;
    VAR7->VAR26 = VAR7->VAR25;
    VAR7->VAR27 = 1;
    return 0;
}