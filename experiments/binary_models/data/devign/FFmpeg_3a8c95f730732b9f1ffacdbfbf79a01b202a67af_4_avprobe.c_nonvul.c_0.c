static void FUN1(VAR1 *VAR2)
{
    char VAR3[128];
    int64_t VAR4 = VAR2->VAR5 ? FUN2(VAR2->VAR5) : -1;
    FUN3("");
    FUN4("", VAR2->VAR6);
    FUN5("", VAR2->VAR7);
    FUN4("", VAR2->VAR8->VAR9);
    FUN4("", VAR2->VAR8->VAR10);
    FUN4("", FUN6(VAR3, sizeof(VAR3), VAR2->VAR11, &VAR12));
    FUN4("", FUN6(VAR3, sizeof(VAR3), VAR2->VAR13, &VAR12));
    FUN4("", VAR4 >= 0 ? FUN7(VAR3, sizeof(VAR3), VAR4, VAR14) : "");
    FUN4("", FUN7(VAR3, sizeof(VAR3), VAR2->VAR15, VAR16));
    FUN8(VAR2->VAR17, "");
    FUN9("");
}