static void FUN1(void)
{
    VAR1 *VAR2;
    static GlobalProperty VAR3[] = {{VAR4, "", "", true}, {VAR4, "", "", true}, {VAR4 "", "", "", true}, {VAR5, "", "", true}, {VAR6, "", "", true}, {VAR7, "", "", true}, {}};
    int VAR8;
    FUN2(VAR3);
    VAR2 = FUN3(FUN4(VAR4));
    FUN5(FUN6(VAR2));
    FUN7(VAR2->VAR9, ==, 101);
    FUN7(VAR2->VAR10, ==, 102);
    VAR8 = FUN8();
    FUN7(VAR8, ==, 1);
    FUN9(VAR3[0].VAR11);
    FUN9(VAR3[1].VAR11);
    FUN9(!VAR3[2].VAR11);
    FUN9(!VAR3[3].VAR11);
    FUN9(!VAR3[4].VAR11);
    FUN9(!VAR3[5].VAR11);
}