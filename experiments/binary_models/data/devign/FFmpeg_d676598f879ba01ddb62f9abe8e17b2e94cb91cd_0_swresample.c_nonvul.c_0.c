VAR1 FUN1(struct VAR2 *VAR3, int64_t VAR4)
{
    if (VAR4 == VAR5)
        return VAR3->VAR6;
    if (VAR3->VAR7 >= VAR8)
    {
        return (VAR3->VAR6 = VAR4 - FUN2(VAR3, VAR3->VAR9 * (VAR1)VAR3->VAR10));
    }
    else
    {
        int64_t VAR11 = VAR4 - FUN2(VAR3, VAR3->VAR9 * (VAR1)VAR3->VAR10) - VAR3->VAR6 + VAR3->VAR12 * (VAR1)VAR3->VAR9;
        double VAR13 = VAR11 / (double)(VAR3->VAR9 * (VAR1)VAR3->VAR10);
        if (FUN3(VAR13) > VAR3->VAR7)
        {
            if (!VAR3->VAR6 || FUN3(VAR13) > VAR3->VAR14)
            {
                int VAR15;
                if (VAR11 > 0)
                    VAR15 = FUN4(VAR3, VAR11 / VAR3->VAR10);
                else
                    VAR15 = FUN5(VAR3, -VAR11 / VAR3->VAR9);
                if (VAR15 < 0)
                {
                    FUN6(VAR3, VAR16, "", VAR13);
                }
            }
            else if (VAR3->VAR17 && VAR3->VAR18)
            {
                int VAR19 = VAR3->VAR10 * VAR3->VAR17;
                double VAR18 = VAR3->VAR18 / (VAR3->VAR18 < 0 ? -VAR3->VAR9 : 1);
                int VAR20 = FUN7(VAR13, -VAR18, VAR18) * VAR19;
                FUN6(VAR3, VAR21, "", VAR13, VAR20, VAR19);
                FUN8(VAR3, VAR20, VAR19);
            }
        }
        return VAR3->VAR6;
    }
}