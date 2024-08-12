static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2->VAR7, VAR4);
    VAR8 *VAR9 = FUN3(VAR2);
    uint64_t VAR10, VAR11, VAR12 = FUN4(VAR6);
    VAR10 = FUN5(VAR6);
    VAR11 = VAR12 - VAR9->VAR13;
    VAR9->VAR14 = FUN6(VAR6) + VAR11;
    VAR11 = FUN7(VAR11, VAR10);
    if (VAR12 <= VAR9->VAR13 || !VAR11)
    {
        VAR15 *VAR7 = VAR2->VAR7;
        char *VAR16 = FUN8(FUN9(VAR7));
        FUN10(VAR4, "" VAR17 ""
                         "" VAR17 ""
                         "" VAR17 "",
                   VAR16, FUN4(VAR6), VAR9->VAR13, VAR10);
        return;
    }
    FUN11(&VAR9->VAR18, FUN9(VAR2), "", VAR6, 0, VAR11);
    VAR9->VAR18.VAR10 = VAR10;