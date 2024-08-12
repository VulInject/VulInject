int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    const double VAR7 = FUN2(VAR2->VAR8);
    const int VAR9 = VAR2->VAR8->VAR10;
    const double VAR11 = VAR2->VAR8->VAR12 / VAR7;
    const double VAR13 = VAR2->VAR8->VAR14 / VAR7;
    FUN3(VAR2, "", VAR9, VAR5->VAR15, VAR3, VAR11, VAR13);
    if (VAR9)
    {
        int VAR16;
        VAR5->VAR15 -= VAR3;
        if (VAR5->VAR15 < 0)
        {
            FUN4(VAR2->VAR8, VAR17, "");
            VAR5->VAR15 = 0;
            VAR16 = VAR9 - VAR5->VAR15 - 1;
            VAR5->VAR15 += FUN5(VAR16, VAR11, VAR13);
            if (VAR5->VAR15 > VAR9)
            {
                int VAR18 = FUN6((VAR5->VAR15 - VAR9) / 8);
                if (VAR18 < 4 && VAR2->VAR19 == VAR20)
                    VAR18 = 4;
                VAR5->VAR15 -= 8 * VAR18;
                if (VAR2->VAR8->VAR21 & VAR22)
                    FUN4(VAR2->VAR8, VAR23, "", VAR18);
                return VAR18;
                return 0;