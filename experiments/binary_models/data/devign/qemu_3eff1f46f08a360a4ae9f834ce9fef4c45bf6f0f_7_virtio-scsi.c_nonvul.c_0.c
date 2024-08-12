static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8;
    while ((VAR8 = FUN2(VAR6, VAR4)))
    {
        int VAR9;
        if (FUN3(VAR8->VAR10.VAR11, VAR8->VAR10.VAR12, 0, &VAR9, sizeof(VAR9)) < sizeof(VAR9))
        {
            FUN4();
            continue;
        }
        FUN5(&VAR8->VAR8.VAR13.VAR9);
        if (VAR8->VAR8.VAR13.VAR9 == VAR14)
        {
            if (FUN6(VAR8, sizeof(VAR15), sizeof(VAR16)) < 0)
            {
                FUN4();
            }
            else
            {
                FUN7(VAR6, VAR8);
            }
        }
        else if (VAR8->VAR8.VAR13.VAR9 == VAR17 || VAR8->VAR8.VAR13.VAR9 == VAR18)
        {
            if (FUN6(VAR8, sizeof(VAR19), sizeof(VAR20)) < 0)
            {
                FUN4();
            }
            else
            {
                VAR8->VAR21.VAR22.VAR23 = 0;
                VAR8->VAR21.VAR22.VAR24 = VAR25;
            }
        }
        FUN8(VAR8);
    }
}