static void FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(VAR3);
    FUN3(1, 1);
    FUN4(VAR2, NULL);
    FUN3(1, 2);
    FUN5(!FUN6());
    FUN4(VAR2, NULL);
    FUN3(1, 3);
    FUN5(!FUN6());
}