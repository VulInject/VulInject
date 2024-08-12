static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11, VAR12;
    int VAR13;
    int VAR14 = 0;
    VAR13 = VAR2->FUN2((VAR15 *)VAR2) / 8;
    VAR2->FUN3((VAR15 *)VAR2, &VAR11, &VAR12);
    VAR7 = (VAR4 % (VAR11 * VAR13)) / VAR13;
    VAR8 = (VAR4 / (VAR11 * VAR13));
    VAR9 = (VAR3 % (VAR11 * VAR13)) / VAR13;
    VAR10 = (VAR3 / (VAR11 * VAR13));
    VAR5 /= VAR13;
    if (VAR2->VAR16 < 0)
    {
        VAR7 -= (VAR2->VAR17 / VAR13) - 1;
        VAR9 -= (VAR2->VAR17 / VAR13) - 1;
        VAR8 -= VAR2->VAR18 - 1;
        VAR10 -= VAR2->VAR18 - 1;
    }
    if (VAR7 >= 0 && VAR8 >= 0 && VAR9 >= 0 && VAR10 >= 0 && (VAR7 + VAR5) <= VAR11 && (VAR8 + VAR6) <= VAR12 && (VAR9 + VAR5) <= VAR11 && (VAR10 + VAR6) <= VAR12)
    {
        VAR14 = 1;
    }
    if (*VAR2->VAR19 != VAR20 && *VAR2->VAR19 != VAR21)
        VAR14 = 0;
    if (VAR14)
        FUN4();
    (*VAR2->VAR19)(VAR2, VAR2->VAR22 + (VAR2->VAR23 & VAR2->VAR24), VAR2->VAR22 + (VAR2->VAR25 & VAR2->VAR24), VAR2->VAR16, VAR2->VAR26, VAR2->VAR17, VAR2->VAR18);
    if (VAR14)
        FUN5(VAR2->VAR27, VAR7, VAR8, VAR9, VAR10, VAR2->VAR17 / VAR13, VAR2->VAR18);
    if (!VAR14)
        FUN6(VAR2, VAR2->VAR23, VAR2->VAR16, VAR2->VAR17, VAR2->VAR18);
}