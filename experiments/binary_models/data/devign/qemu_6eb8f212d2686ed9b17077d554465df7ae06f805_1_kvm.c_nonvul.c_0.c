static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3->VAR6);
    VAR7 *VAR8 = FUN3(VAR3->VAR6);
    FUN4(VAR5);
    VAR8->FUN5(VAR5);
    FUN6(VAR5);
    VAR3->VAR9 = VAR10;
}