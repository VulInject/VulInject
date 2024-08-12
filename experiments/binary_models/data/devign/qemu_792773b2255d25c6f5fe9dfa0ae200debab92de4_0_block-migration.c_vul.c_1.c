static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9.VAR10 = 0;
    VAR9.VAR11 = 0;
    VAR9.VAR12 = 0;
    VAR9.VAR13 = 0;
    VAR9.VAR14 = -1;
    for (VAR8 = VAR15; VAR8 != NULL; VAR8 = VAR8->VAR16)
    {
        if (VAR8->VAR17 == VAR18)
        {
            VAR6 = FUN2(sizeof(VAR5));
            VAR6->VAR8 = VAR8;
            VAR6->VAR19 = 0;
            VAR6->VAR20 = FUN3(VAR8) >> VAR21;
            VAR6->VAR22 = 0;
            VAR6->VAR23 = VAR9.VAR23;
            VAR9.VAR13 += VAR6->VAR20;
            if (VAR6->VAR23)
            {
                FUN4(VAR2, ""
                                    "",
                               VAR8->VAR24);
            }
            else
            {
                FUN4(VAR2, "", VAR8->VAR24);
            }
            FUN5(&VAR9.VAR25, VAR6, VAR26);
        }
    }
}