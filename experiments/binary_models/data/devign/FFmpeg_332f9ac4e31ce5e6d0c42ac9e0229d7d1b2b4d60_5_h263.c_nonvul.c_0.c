int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (FUN2(&VAR2->VAR6, 17) != 1)
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return -1;
    }
    VAR3 = FUN4(&VAR2->VAR6, 5);
    if (VAR3 != 0 && VAR3 != 1)
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return -1;
    }
    VAR2->VAR9 = VAR3 + 1;
    VAR2->VAR10 = FUN4(&VAR2->VAR6, 8);
    VAR3 = FUN4(&VAR2->VAR6, 3);
    switch (VAR3)
    {
    case 0:
        VAR4 = FUN4(&VAR2->VAR6, 8);
        VAR5 = FUN4(&VAR2->VAR6, 8);
        break;
    case 1:
        VAR4 = FUN4(&VAR2->VAR6, 16);
        VAR5 = FUN4(&VAR2->VAR6, 16);
        break;
    case 2:
        VAR4 = 352;
        VAR5 = 288;
        break;
    case 3:
        VAR4 = 176;
        VAR5 = 144;
        break;
    case 4:
        VAR4 = 128;
        VAR5 = 96;
        break;
    case 5:
        VAR4 = 320;
        VAR5 = 240;
        break;
    case 6:
        VAR4 = 160;
        VAR5 = 120;
        break;
    default:
        VAR4 = VAR5 = 0;
        break;
    }
    if ((VAR4 == 0) || (VAR5 == 0))
        return -1;
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    VAR2->VAR11 = VAR12 + FUN4(&VAR2->VAR6, 2);
    if (VAR2->VAR11 > VAR13)
        VAR2->VAR11 = VAR13;
    FUN5(&VAR2->VAR6);
    VAR2->VAR14 = VAR2->VAR15 = FUN4(&VAR2->VAR6, 5);
    VAR2->VAR16 = 0;
    VAR2->VAR17 = 1;
    VAR2->VAR18 = 0;
    while (FUN6(&VAR2->VAR6) != 0)
    {
        FUN7(&VAR2->VAR6, 8);
    }
    VAR2->VAR19 = 1;
    if (VAR2->VAR7->VAR20 & VAR21)
    {
        FUN3(VAR2->VAR7, VAR22, "", FUN8(VAR2->VAR11), VAR2->VAR9 - 1, VAR2->VAR15, VAR2->VAR10);
    }
    VAR2->VAR23 = VAR2->VAR24 = VAR25;
    return 0;
}