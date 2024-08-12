static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    bool VAR7;
    VAR7 = FUN4(VAR4->VAR8);
    VAR4->VAR9 = VAR10 | (VAR7 ? VAR11 : 0) | VAR12;
    VAR4->VAR13 = 0;
    VAR6->FUN5(VAR4);
    FUN6(VAR2);
}