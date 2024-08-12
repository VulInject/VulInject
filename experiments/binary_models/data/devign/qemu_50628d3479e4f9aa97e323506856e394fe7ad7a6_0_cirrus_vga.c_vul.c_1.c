static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7 = 0, VAR8 = 0;
    int VAR9 = 0, VAR10 = 0;
    int VAR11 = 0;
    int VAR12 = 0;
    if (*VAR2->VAR13 == VAR14 || *VAR2->VAR13 == VAR15)
    {
        int VAR16, VAR17;
        VAR11 = VAR2->VAR18.FUN2(&VAR2->VAR18) / 8;
        if (!VAR11)
        {
            return 0;
        }
        VAR2->VAR18.FUN3(&VAR2->VAR18, &VAR16, &VAR17);
        VAR7 = (VAR4 % FUN4(VAR2->VAR19)) / VAR11;
        VAR8 = (VAR4 / FUN4(VAR2->VAR19));
        VAR9 = (VAR3 % FUN4(VAR2->VAR20)) / VAR11;
        VAR10 = (VAR3 / FUN4(VAR2->VAR20));
        VAR5 /= VAR11;
        if (VAR2->VAR20 < 0)
        {
            VAR7 -= (VAR2->VAR21 / VAR11) - 1;
            VAR9 -= (VAR2->VAR21 / VAR11) - 1;
            VAR8 -= VAR2->VAR22 - 1;
            VAR10 -= VAR2->VAR22 - 1;
        }
        if (VAR7 >= 0 && VAR8 >= 0 && VAR9 >= 0 && VAR10 >= 0 && (VAR7 + VAR5) <= VAR16 && (VAR8 + VAR6) <= VAR17 && (VAR9 + VAR5) <= VAR16 && (VAR10 + VAR6) <= VAR17)
        {
            VAR12 = 1;
        }
    }
    if (VAR12)
        FUN5(VAR2->VAR18.VAR23);
    (*VAR2->VAR13)(VAR2, VAR2->VAR18.VAR24 + VAR2->VAR25, VAR2->VAR18.VAR24 + VAR2->VAR26, VAR2->VAR20, VAR2->VAR19, VAR2->VAR21, VAR2->VAR22);
    if (VAR12)
    {
        FUN6(VAR2->VAR18.VAR23, VAR7, VAR8, VAR9, VAR10, VAR2->VAR21 / VAR11, VAR2->VAR22);
    }
    FUN7(VAR2, VAR2->VAR25, VAR2->VAR20, VAR2->VAR21, VAR2->VAR22);
    return 1;
}