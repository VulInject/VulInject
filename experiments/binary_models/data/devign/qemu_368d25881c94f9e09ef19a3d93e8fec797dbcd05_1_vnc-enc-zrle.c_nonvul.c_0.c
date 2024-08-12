static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    bool VAR7 = !!(VAR2->VAR8.VAR9 & VAR10);
    size_t VAR11;
    int VAR12;
    if (VAR2->VAR13.VAR14 == VAR15)
    {
        if (!VAR2->VAR16->VAR17 || VAR2->VAR18.VAR19 == (VAR20)-1 || VAR2->VAR18.VAR19 == 9)
        {
            VAR12 = 0;
            VAR2->VAR13.VAR14 = VAR21;
        }
        else if (VAR2->VAR18.VAR19 < 3)
        {
            VAR12 = 3;
        }
        else if (VAR2->VAR18.VAR19 < 6)
        {
            VAR12 = 2;
        }
        else
        {
            VAR12 = 1;
        }
    }
    else
    {
        VAR12 = 0;
    }
    FUN2(VAR2);
    switch (VAR2->VAR8.VAR22.VAR23)
    {
    case 1:
        FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
        break;
    case 2:
        if (VAR2->VAR8.VAR22.VAR24 > 0x1F)
        {
            if (VAR7)
            {
                FUN4(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
            else
            {
                FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
        }
        else
        {
            if (VAR7)
            {
                FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
            else
            {
                FUN7(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
        }
        break;
    case 4:
    {
        bool VAR25;
        bool VAR26;
        VAR25 = ((VAR2->VAR8.VAR22.VAR27 << VAR2->VAR8.VAR22.VAR28) < (1 << 24) && (VAR2->VAR8.VAR22.VAR24 << VAR2->VAR8.VAR22.VAR29) < (1 << 24) && (VAR2->VAR8.VAR22.VAR30 << VAR2->VAR8.VAR22.VAR31) < (1 << 24));
        VAR26 = (VAR2->VAR8.VAR22.VAR28 > 7 && VAR2->VAR8.VAR22.VAR29 > 7 && VAR2->VAR8.VAR22.VAR31 > 7);
        if ((VAR25 && !VAR7) || (VAR26 && VAR7))
        {
            if (VAR7)
            {
                FUN8(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
            else
            {
                FUN9(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
        }
        else if ((VAR25 && VAR7) || (VAR26 && !VAR7))
        {
            if (VAR7)
            {
                FUN10(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
            else
            {
                FUN11(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
        }
        else
        {
            if (VAR7)
            {
                FUN12(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
            else
            {
                FUN13(VAR2, VAR3, VAR4, VAR5, VAR6, VAR12);
            }
        }
    }
    break;
    }
    FUN14(VAR2);
    VAR11 = FUN15(VAR2, VAR32);
    FUN16(VAR2, VAR3, VAR4, VAR5, VAR6, VAR2->VAR13.VAR14);
    FUN17(VAR2, VAR11);
    FUN18(VAR2, VAR2->VAR13.VAR33.VAR34, VAR2->VAR13.VAR33.VAR35);
    return 1;
}