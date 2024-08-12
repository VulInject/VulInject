static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR2->VAR9 <= 0)
    {
        FUN2(NULL, VAR10, "");
    }
    else
    {
        FUN2(NULL, VAR11, "", VAR2->VAR9);
        if (VAR2->VAR9 >= 8)
        {
            VAR4->VAR12 = FUN3(VAR4->VAR12);
            VAR4->VAR13 = FUN4(VAR4->VAR13);
            VAR4->VAR14 = FUN4(VAR4->VAR14);
        }
        if (VAR2->VAR9 >= 16)
        {
            VAR4->VAR15 = FUN4(VAR4->VAR15);
            VAR4->VAR16 = FUN4(VAR4->VAR16);
        }
    }
    VAR7->VAR17 = VAR2->VAR17;
    VAR7->VAR18 = VAR2->VAR19;
    VAR7->VAR20 = VAR2->VAR20;
    VAR7->VAR21 = 1;
    VAR7->VAR22 = VAR4->VAR13 / VAR7->VAR18;
    VAR7->VAR13 = VAR4->VAR13;
    VAR7->VAR14 = VAR4->VAR14;
    VAR7->VAR23 = VAR2->VAR24 * 8;
    VAR7->VAR15 = 0;
    VAR7->VAR25 = 5;
    VAR7->VAR26 = VAR7->VAR14;
    FUN2(NULL, VAR11, "", VAR4->VAR12);
    switch (VAR4->VAR12)
    {
    case VAR27:
        if (VAR7->VAR18 != 1)
        {
            FUN2(NULL, VAR10, "");
        }
        FUN2(NULL, VAR11, "");
        break;
    case VAR28:
        if (VAR7->VAR18 != 1)
        {
            VAR7->VAR29 = 0;
            VAR7->VAR23 = VAR7->VAR23 / 2;
        }
        FUN2(NULL, VAR11, "");
        break;
    case VAR30:
        if (VAR7->VAR18 != 2)
        {
            FUN2(NULL, VAR10, "");
        }
        FUN2(NULL, VAR11, "");
        if (VAR2->VAR9 >= 16)
        {
            VAR7->VAR26 = VAR7->VAR14 + VAR4->VAR15;
            VAR7->VAR15 = VAR4->VAR15;
            VAR7->VAR29 = 1;
            VAR7->VAR16 = VAR4->VAR16;
        }
        if (VAR7->VAR22 > 256)
        {
            VAR7->VAR25 = 6;
        }
        if (VAR7->VAR22 > 512)
        {
            VAR7->VAR25 = 7;
        }
        break;
    case VAR31:
        FUN2(NULL, VAR10, "");
        break;
    default:
        FUN2(NULL, VAR10, "");
        break;
    }
    VAR7->VAR32 = VAR7->VAR22;
    VAR7->VAR33 = (1 << VAR7->VAR25);
    FUN5(VAR7);
    FUN6(VAR7);
    FUN7(VAR7);
    if (FUN8(VAR7) != 0)
        if ((VAR7->VAR34 = FUN9((VAR2->VAR24 + (4 - VAR2->VAR24 % 4) + VAR35) * sizeof(VAR36))) == NULL)
            VAR7->VAR37[0] = VAR7->VAR38;
    VAR7->VAR37[1] = VAR7->VAR39;
    VAR7->VAR37[2] = VAR7->VAR40;
    VAR7->VAR37[3] = VAR7->VAR41;
    VAR7->VAR42[0] = VAR7->VAR40;
    VAR7->VAR42[1] = VAR7->VAR41;
    VAR7->VAR43[0] = VAR7->VAR44;
    VAR7->VAR43[1] = VAR7->VAR45;
    if (FUN10(VAR7) == 0)
        if (VAR7->VAR26 > 53)
        {
            FUN2(NULL, VAR10, "");
        }
    if (VAR7->VAR14 > 50)
    {
        FUN2(NULL, VAR10, "");
    }
    if ((VAR7->VAR22 == 256) || (VAR7->VAR22 == 512) || (VAR7->VAR22 == 1024))
    {
    }
    else
    {
        FUN2(NULL, VAR10, "", VAR7->VAR22);
    }
    FUN11(VAR7, VAR4);
    return 0;