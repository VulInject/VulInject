int FUN1(struct socket *VAR1)
{
    VAR2 *VAR3 = VAR1->VAR3;
    struct VAR4 *VAR5 = &VAR1->VAR6;
    struct VAR7 *VAR8;
    int VAR9;
    FUN2("");
    FUN3("", (long)VAR1);
    if (VAR1->VAR10.VAR11 != VAR3->VAR12.VAR11)
    {
        for (VAR8 = VAR3->VAR13; VAR8; VAR8 = VAR8->VAR14)
        {
            if (VAR8->VAR15 == VAR1->VAR16 && VAR1->VAR10.VAR11 == VAR8->VAR17.VAR11)
            {
                if (VAR8->VAR18 == 3)
                {
                    VAR1->VAR19 = -1;
                    VAR1->VAR20 = (void *)VAR8->VAR21;
                    return 1;
                }
                VAR9 = VAR8->VAR18;
                FUN4((VAR22, "", VAR8->VAR21));
                return FUN5(VAR1, VAR8->VAR21, VAR9);
            }
        }
    }
    VAR5->VAR23 = snprintf(VAR5->VAR24, VAR5->VAR25 - (VAR5->VAR24 - VAR5->VAR26), "");
    VAR5->VAR24 += VAR5->VAR23;
    return 0;
}