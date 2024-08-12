static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    int VAR8, VAR9;
    FUN3(VAR4, VAR7->VAR10, VAR11);
    VAR7->VAR12[0].VAR13 = FUN4(VAR4);
    FUN5(VAR7, FUN4(VAR4), FUN6(VAR2, VAR14));
    if (VAR5 >= 3)
        VAR7->VAR15 = FUN7(VAR4);
    if (VAR5 >= 4)
    {
        if (VAR5 < 8)
        {
            VAR7->VAR16 = FUN4(VAR4);
            VAR7->VAR17 = FUN4(VAR4);
        }
        else
        {
            VAR7->VAR16 = FUN8(VAR4);
            VAR7->VAR17 = FUN8(VAR4);
        }
    }
    if (VAR5 >= 5)
    {
        VAR7->VAR18.VAR19 = FUN4(VAR4);
        if (VAR7->VAR18.VAR19 <= VAR20)
        {
            FUN3(VAR4, VAR7->VAR18.VAR21, VAR7->VAR18.VAR19 * VAR11);
        }
        else
        {
            int64_t VAR8;
            for (VAR8 = 0; VAR8 < (VAR22)VAR7->VAR18.VAR19 * VAR11; ++VAR8)
            {
                FUN8(VAR4);
            }
            VAR7->VAR18.VAR23 = VAR7->VAR18.VAR24 = 1;
            VAR7->VAR18.VAR19 = 0;
        }
    }
    if (VAR5 >= 6)
        FUN3(VAR4, (VAR25 *)VAR7->VAR26, VAR27 >> 3);
    if (VAR5 >= 7)
    {
        if (FUN4(VAR4) && !FUN9(VAR7))
        {
            FUN10("");
            return -1;
        }
    }
    if (VAR5 >= 9)
    {
        VAR7->VAR18.VAR23 = FUN8(VAR4);
        VAR7->VAR18.VAR24 = FUN8(VAR4);
    }
    if (VAR5 >= 10)
    {
        VAR7->VAR28 = FUN8(VAR4);
        VAR7->VAR29 = FUN8(VAR4);
        VAR7->VAR30 = FUN8(VAR4);
        VAR7->VAR31 = FUN8(VAR4);
    }
    if (VAR5 >= 11)
    {
        if (FUN8(VAR4) && !FUN11(VAR7))
        {
            FUN10("");
            return -1;
        }
    }
    if (VAR7->VAR32 > 1)
    {
        if (VAR7->VAR32 != FUN7(VAR4))
        {
            FUN10("");
            return -1;
        }
        VAR7->VAR33 = FUN7(VAR4);
        if (VAR7->VAR33 > VAR7->VAR32)
        {
            FUN10("", VAR7->VAR33, VAR7->VAR32);
            return -1;
        }
        for (VAR8 = 1; VAR8 < VAR7->VAR33; VAR8++)
        {
            VAR7->VAR12[VAR8].VAR13 = FUN4(VAR4);
        }
    }
    if (FUN6(VAR2, VAR34))
    {
        VAR7->VAR35 = FUN12(VAR4);
    }
    else
    {
        VAR7->VAR35 = FUN13(VAR7);
    }
    if (FUN9(VAR7))
    {
        FUN14(VAR7);
    }
    FUN15(VAR7);
    for (VAR8 = 0; VAR8 < VAR7->VAR18.VAR19; VAR8++)
    {
        if (VAR7->VAR18.VAR21[VAR8 * VAR11] & 1)
        {
            break;
        }
    }
    VAR7->VAR18.VAR36 = VAR8;
    VAR9 = (VAR7->VAR15 & VAR37) == 0;
    for (VAR8 = 0; VAR8 < VAR7->VAR32; VAR8++)
    {
        FUN16(VAR7->VAR38, VAR8)->VAR9 = VAR9;
    }
    if (FUN6(VAR2, VAR39) && FUN6(VAR2, VAR40))
    {
        VAR7->VAR41 = VAR42;
        FUN17(VAR7->VAR43, FUN18(VAR44));
    }
    return 0;
}