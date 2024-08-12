static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR4 = FUN2("");
    VAR2 = FUN3(""VAR5\""VAR6\""
                   ""VAR7\""
                   ""VAR8\""VAR9-VAR10\""
                   ""VAR11\""VAR9-VAR10\""
                   ""VAR12\""VAR13\""
                   "");
    FUN4(VAR2);
    FUN4(!FUN5(VAR2, ""));
    FUN6(VAR2);
    VAR2 = FUN3(""VAR5\""VAR14\""
                   ""VAR7\""
                   ""VAR11\""VAR9-VAR10\""
                   "");
    FUN4(VAR2);
    FUN4(!FUN5(VAR2, ""));
    FUN4(FUN5(VAR2, ""));
    FUN4(!strcmp(FUN7(VAR2, ""), ""));
    FUN6(VAR2);
    FUN8(VAR4);
}