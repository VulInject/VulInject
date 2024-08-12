static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR3;
    if (FUN2(VAR2) != VAR5)
    {
        double VAR6, VAR7;
        int VAR8, VAR9;
        VAR6 = FUN3(VAR2) - FUN4(VAR2);
        if (!FUN5(VAR6) && FUN6(VAR6) < VAR10)
        {
            VAR2->VAR11 = VAR6 + VAR2->VAR12 * VAR2->VAR11;
            if (VAR2->VAR13 < VAR14)
            {
                VAR2->VAR13++;
            }
            else
            {
                VAR7 = VAR2->VAR11 * (1.0 - VAR2->VAR12);
                if (FUN6(VAR7) >= VAR2->VAR15)
                {
                    VAR4 = VAR3 + (int)(VAR6 * VAR2->VAR16.VAR17);
                    VAR8 = ((VAR3 * (100 - VAR18) / 100));
                    VAR9 = ((VAR3 * (100 + VAR18) / 100));
                    VAR4 = FUN7(FUN8(VAR4, VAR8), VAR9);
                }
                FUN9(NULL, "", VAR6, VAR7, VAR4 - VAR3, VAR2->VAR19, VAR2->VAR15);
            }
        }
        else
        {
            VAR2->VAR13 = 0;
            VAR2->VAR11 = 0;
        }
    }
    return VAR4;
}