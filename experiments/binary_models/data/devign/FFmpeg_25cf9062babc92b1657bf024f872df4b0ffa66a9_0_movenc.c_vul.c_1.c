static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2);
    char VAR6[32];
    int VAR7;
    FUN3(VAR2, 0);
    VAR7 = VAR4->VAR8->VAR9;
    if (!VAR7)
        VAR7 = FUN4(VAR10, VAR4->VAR8->VAR11);
    if (!VAR7)
        VAR7 = FUN4(VAR12, VAR4->VAR8->VAR11);
    FUN5(VAR2, VAR7);
    FUN3(VAR2, 0);
    FUN6(VAR2, 0);
    FUN6(VAR2, 1);
    FUN6(VAR2, 0);
    FUN6(VAR2, 0);
    FUN7(VAR2, "");
    if (VAR4->VAR8->VAR11 == VAR13)
    {
        FUN3(VAR2, 0);
        FUN3(VAR2, 0x400);
    }
    else
    {
        FUN3(VAR2, 0x200);
        FUN3(VAR2, 0x200);
    }
    FUN6(VAR2, VAR4->VAR8->VAR14);
    FUN6(VAR2, VAR4->VAR8->VAR15);
    FUN3(VAR2, 0x00480000);
    FUN3(VAR2, 0x00480000);
    FUN3(VAR2, 0);
    FUN6(VAR2, 1);
    memset(VAR6, 0, 32);
    if (VAR4->VAR8->VAR16->VAR17)
        strncpy(VAR6, VAR4->VAR8->VAR16->VAR17, 31);
    FUN8(VAR2, FUN9(strlen(VAR6), 32));
    FUN10(VAR2, VAR6, 31);
    FUN6(VAR2, 0x18);
    FUN6(VAR2, 0xffff);
    if (VAR4->VAR8->VAR11 == VAR18)
        FUN11(VAR2, VAR4);
    else if (VAR4->VAR8->VAR11 == VAR19)
        FUN12(VAR2);
    else if (VAR4->VAR8->VAR11 == VAR20)
        FUN13(VAR2);
    return FUN14(VAR2, VAR5);
}