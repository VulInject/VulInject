int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    if ((FUN2(VAR4, 15) & 0x7FFF) != 0x7FFC)
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    FUN4(VAR4);
    VAR7 = FUN2(VAR4, 4);
    VAR8 = FUN2(VAR4, 4);
    VAR6->VAR11 = FUN2(VAR4, 4);
    if (VAR6->VAR11 < VAR12)
    {
        VAR6->VAR13 = VAR6->VAR11 + 1;
        VAR6->VAR11 = VAR14;
    }
    else if (VAR6->VAR11 <= VAR15)
    {
        VAR6->VAR13 = 2;
    }
    else
    {
        FUN3(VAR2, VAR10, "", VAR6->VAR11);
        return -1;
    }
    VAR9 = FUN2(VAR4, 3);
    if (VAR9 == 3 || VAR9 == 7)
    {
        FUN3(VAR2, VAR10, "", VAR9);
        return -1;
    }
    VAR6->VAR16 = VAR17[VAR9];
    if (FUN5(VAR4))
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    if (FUN6(VAR4) < 0)
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    if (VAR7 == 0)
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    else if (VAR7 == 6)
    {
        VAR6->VAR18 = FUN2(VAR4, 8) + 1;
    }
    else if (VAR7 == 7)
    {
        VAR6->VAR18 = FUN2(VAR4, 16) + 1;
    }
    else
    {
        VAR6->VAR18 = VAR19[VAR7];
    }
    if (VAR8 < 12)
    {
        VAR6->VAR20 = VAR21[VAR8];
    }
    else if (VAR8 == 12)
    {
        VAR6->VAR20 = FUN2(VAR4, 8) * 1000;
    }
    else if (VAR8 == 13)
    {
        VAR6->VAR20 = FUN2(VAR4, 16);
    }
    else if (VAR8 == 14)
    {
        VAR6->VAR20 = FUN2(VAR4, 16) * 10;
    }
    else
    {
        FUN3(VAR2, VAR10, "", VAR8);
        return -1;
    }
    FUN7(VAR4, 8);
    if (FUN8(FUN9(VAR22), 0, VAR4->VAR23, FUN10(VAR4) / 8))
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    return 0;
}