static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR2->VAR5.VAR6 = FUN2(VAR3, FUN3(&VAR2->VAR7));
    VAR2->VAR5.VAR8 = (unsigned char *)VAR2->VAR7.VAR9;
    FUN4(&VAR2->VAR7, VAR3);
    while (VAR2->VAR5.VAR6 > 0)
    {
        VAR4 = FUN5(&VAR2->VAR5, VAR10);
        if (VAR4 != VAR11 && VAR4 != VAR12)
        {
            FUN6(VAR2->VAR13, VAR14, "", VAR4);
            return VAR15;
        }
        if (VAR2->VAR5.VAR16 == 0)
        {
            if (!(VAR2->VAR17 & VAR18))
            {
                FUN7(VAR2);
            }
            VAR2->VAR5.VAR16 = VAR2->VAR19;
            VAR2->VAR5.VAR20 = VAR2->VAR21;
        }
        if (VAR4 == VAR12 && VAR2->VAR5.VAR6 > 0)
        {
            FUN6(NULL, VAR22, "", VAR2->VAR5.VAR6);
            return 0;
        }
    }
    return 0;
}