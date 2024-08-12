static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    int VAR9;
    uint32_t VAR10;
    VAR9 = FUN2(VAR6);
    if (FUN3(VAR6) != 0xC5 || FUN4(VAR6) != 4)
        return -1;
    VAR8 = FUN5(VAR2, 0);
    if (!VAR8)
        return -1;
    VAR8->VAR11->VAR12 = VAR13;
    VAR8->VAR11->VAR14 = VAR15;
    VAR8->VAR11->VAR16 = FUN6(VAR17);
    VAR8->VAR11->VAR18 = VAR17;
    FUN7(VAR6, VAR8->VAR11->VAR16, VAR17);
    VAR8->VAR11->VAR19 = FUN4(VAR6);
    VAR8->VAR11->VAR20 = FUN4(VAR6);
    if (FUN4(VAR6) != 0xC)
        return -1;
    FUN8(VAR6, 8);
    VAR10 = FUN4(VAR6);
    if (VAR10 == 0xFFFFFFFF)
        FUN9(VAR8, 32, 1, 1000);
    else
    {
        FUN9(VAR8, 24, 1, VAR10);
        VAR8->VAR21 = VAR9;
    }
    return 0;
}