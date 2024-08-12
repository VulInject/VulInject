static void FUN1(VAR1 *VAR2)
{
    FlatView VAR3 = VAR2->VAR4;
    FlatView VAR5 = FUN2(VAR2->VAR6);
    FUN3(VAR2, VAR3, VAR5, false);
    FUN3(VAR2, VAR3, VAR5, true);
    VAR2->VAR4 = VAR5;
    FUN4(&VAR3);
    FUN5(VAR2);
}