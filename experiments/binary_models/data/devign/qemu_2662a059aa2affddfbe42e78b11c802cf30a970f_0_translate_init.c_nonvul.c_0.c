static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7, *VAR8;
    FUN2(VAR2->VAR9, 0x40);
    FUN3("" VAR10 "", VAR4->VAR11, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14);
    if (&VAR15 < &VAR16)
    {
        VAR7 = &VAR15;
        VAR8 = &VAR16;
    }
    else
    {
        VAR7 = &VAR16;
        VAR8 = &VAR15;
    }
    for (VAR6 = VAR7 + 1; VAR6 != VAR8; VAR6++)
    {
        if ((VAR6->VAR17.VAR18 & VAR4->VAR13) != 0)
        {
            if (FUN4(VAR2->VAR9, VAR6) < 0)
            {
                FUN3(""
                       "",
                       VAR6->VAR19, VAR6->VAR20, VAR6->VAR21);
                return -1;
            }
            if (VAR19 != 0x00)
            {
                if (VAR6->VAR21 == 0xFF)
                {
                    if (VAR6->VAR20 == 0xFF)
                    {
                        FUN3("", VAR6->VAR19, VAR6->VAR19, VAR6->VAR22);
                    }
                    else
                    {
                        FUN3("", VAR6->VAR19, VAR6->VAR20, VAR6->VAR19, VAR6->VAR20, VAR6->VAR22);
                    }
                }
                else
                {
                    FUN3("", VAR6->VAR19, VAR6->VAR20, VAR6->VAR21, VAR6->VAR19, (VAR6->VAR21 << 5) | VAR6->VAR20, VAR6->VAR22);
                }
            }
        }
    }
    FUN5(VAR2->VAR9);
    FUN6(VAR23);
    FUN6(VAR24);
    return 0;
}