static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int64_t VAR8, VAR9;
    FUN2(VAR7, "");
    FUN3(VAR7, 0);
    FUN2(VAR7, "");
    VAR8 = FUN4(VAR7, "");
    if (FUN5(VAR7, VAR2->VAR10[0]->VAR11) < 0)
    {
        FUN6(VAR2, VAR12, "", VAR2->VAR10[0]->VAR11->VAR11 ? VAR2->VAR10[0]->VAR11->VAR11->VAR13 : "");
        return -1;
    }
    FUN7(VAR7, VAR8);
    if (VAR2->VAR10[0]->VAR11->VAR14 != 0x01 && VAR2->VAR7->VAR15)
    {
        VAR9 = FUN4(VAR7, "");
        FUN3(VAR7, 0);
        FUN7(VAR7, VAR9);
    }
    FUN8(VAR2->VAR10[0], 64, 1, VAR2->VAR10[0]->VAR11->VAR16);
    VAR4->VAR17 = VAR4->VAR18 = 0;
    VAR4->VAR19 = VAR20;
    VAR4->VAR21 = FUN4(VAR7, "");
    FUN9(VAR7);
    return 0;
}