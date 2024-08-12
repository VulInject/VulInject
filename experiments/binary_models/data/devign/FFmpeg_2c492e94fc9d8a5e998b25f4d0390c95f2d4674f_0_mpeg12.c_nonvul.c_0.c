void FUN1(VAR1 *VAR2, int VAR3)
{
    FUN2(VAR2);
    FUN3(VAR2, VAR4);
    FUN4(&VAR2->VAR5, 10, (VAR2->VAR3 - VAR2->VAR6) & 0x3ff);
    FUN4(&VAR2->VAR5, 3, VAR2->VAR7);
    VAR2->VAR8 = VAR2->VAR5.VAR9 + FUN5(&VAR2->VAR5) / 8;
    FUN4(&VAR2->VAR5, 16, 0xFFFF);
    if (VAR2->VAR7 == VAR10 || VAR2->VAR7 == VAR11)
    {
        FUN4(&VAR2->VAR5, 1, 0);
        if (VAR2->VAR12 == VAR13)
            FUN4(&VAR2->VAR5, 3, VAR2->VAR14);
        else
            FUN4(&VAR2->VAR5, 3, 7);
    }
    if (VAR2->VAR7 == VAR11)
    {
        FUN4(&VAR2->VAR5, 1, 0);
        if (VAR2->VAR12 == VAR13)
            FUN4(&VAR2->VAR5, 3, VAR2->VAR15);
        else
            FUN4(&VAR2->VAR5, 3, 7);
    }
    FUN4(&VAR2->VAR5, 1, 0);
    VAR2->VAR16 = 1;
    if (VAR2->VAR12 == VAR17)
    {
        FUN3(VAR2, VAR18);
        FUN4(&VAR2->VAR5, 4, 8);
        if (VAR2->VAR7 == VAR10 || VAR2->VAR7 == VAR11)
        {
            FUN4(&VAR2->VAR5, 4, VAR2->VAR14);
            FUN4(&VAR2->VAR5, 4, VAR2->VAR14);
        }
        else
        {
            FUN4(&VAR2->VAR5, 8, 255);
        }
        if (VAR2->VAR7 == VAR11)
        {
            FUN4(&VAR2->VAR5, 4, VAR2->VAR15);
            FUN4(&VAR2->VAR5, 4, VAR2->VAR15);
        }
        else
        {
            FUN4(&VAR2->VAR5, 8, 255);
        }
        FUN4(&VAR2->VAR5, 2, VAR2->VAR19);
        FUN4(&VAR2->VAR5, 2, VAR2->VAR20 = VAR21);
        if (VAR2->VAR22)
        {
            FUN4(&VAR2->VAR5, 1, 0);
        }
        else
        {
            FUN4(&VAR2->VAR5, 1, VAR2->VAR23->VAR24);
        }
        VAR2->VAR16 = VAR2->VAR22;
        FUN4(&VAR2->VAR5, 1, VAR2->VAR16);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR25);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR26);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR27);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR28);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR29);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR30 = 1);
        VAR2->VAR31 = VAR2->VAR22;
        FUN4(&VAR2->VAR5, 1, VAR2->VAR31);
        FUN4(&VAR2->VAR5, 1, 0);
    }
    if (VAR2->VAR32 & VAR33)
    {
        int VAR34;
        FUN3(VAR2, VAR35);
        for (VAR34 = 0; VAR34 < sizeof(VAR36); VAR34++)
        {
            FUN4(&VAR2->VAR5, 8, VAR36[VAR34]);
        }
    }
    VAR2->VAR37 = 0;
    FUN6(VAR2);
}