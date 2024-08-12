static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    unsigned VAR5;
    FUN3("");
    memset(&VAR4->VAR6, 0, (VAR7 *)&VAR4->VAR8 - (VAR7 *)&VAR4->VAR6);
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        memset(&VAR4->VAR8[VAR5], 0, sizeof(VAR10));
        VAR4->VAR8[VAR5].VAR11 = 0xC2;
        FUN4(VAR4, VAR5);
        FUN5(VAR4, VAR5, 0xFFFFFFFF);
        FUN6(VAR4, VAR5);
    }
    FUN7(VAR4->VAR12);
    VAR4->VAR12 = NULL;
    FUN8(VAR4);
    FUN9(VAR4, false);
    VAR4->VAR13 = 0x7D517D51;
    VAR4->VAR14 = 0x10040100;
    VAR4->VAR15[0] = VAR4->VAR15[3] = 0x01000100;
    VAR4->VAR16[0] = VAR4->VAR16[3] = 0x01000100;
    VAR4->VAR17 = 0x01800080;
}