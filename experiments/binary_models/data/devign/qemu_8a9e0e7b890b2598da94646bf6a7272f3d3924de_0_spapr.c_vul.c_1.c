static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR4);
    VAR9 *VAR10 = FUN3(VAR8);
    VAR11 *VAR12 = VAR10->FUN4(VAR8);
    uint64_t VAR13 = FUN5(VAR12);
    char *VAR14;
    if (VAR13 % VAR15)
    {
        FUN6(VAR6, ""
                         "",
                   VAR15 / VAR16);
        return;
    }
    VAR14 = FUN7(FUN8(VAR8), VAR17, NULL);
    if (VAR14 && !FUN9(VAR14))
    {
        FUN6(VAR6, ""
                         "");
        return;
    }
}