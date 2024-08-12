static void FUN1(bool VAR1)
{
    VAR2 *VAR3 = FUN2(VAR2, 1);
    VAR2 *VAR4 = FUN2(VAR2, 1);
    VAR3->VAR5 = VAR6;
    VAR3->VAR7.VAR8.VAR9 = FUN3(VAR10, 1);
    *VAR3->VAR7.VAR8.VAR9 = (VAR10){
        .VAR11 = FUN4(""),
        .VAR12 = NULL,
    };
    VAR4->VAR5 = VAR6;
    VAR4->VAR7.VAR8.VAR9 = FUN3(VAR10, 1);
    *VAR4->VAR7.VAR8.VAR9 = (VAR10){
        .VAR11 = FUN4(""),
        .VAR12 = NULL,
    };
    FUN5(VAR1, VAR3, VAR4, false);
    FUN6(VAR3);
    FUN6(VAR4);
}