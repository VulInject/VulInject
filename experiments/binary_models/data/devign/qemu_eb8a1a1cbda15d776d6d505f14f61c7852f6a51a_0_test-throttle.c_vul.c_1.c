static void FUN1(void)
{
    FUN2(&VAR1);
    VAR2 = VAR1.VAR3[VAR4];
    VAR2.VAR5 = 150;
    VAR2.VAR6 = 15;
    VAR2.VAR7 = 1.5;
    FUN3(&VAR2, VAR8 / 150);
    FUN4(VAR2.VAR5 == 150);
    FUN4(VAR2.VAR6 == 15);
    FUN4(FUN5(VAR2.VAR7, 0.5));
    FUN3(&VAR2, VAR8 / 150);
    FUN4(VAR2.VAR5 == 150);
    FUN4(VAR2.VAR6 == 15);
    FUN4(FUN5(VAR2.VAR7, 0));
    FUN3(&VAR2, VAR8 / 150);
    FUN4(VAR2.VAR5 == 150);
    FUN4(VAR2.VAR6 == 15);
    FUN4(FUN5(VAR2.VAR7, 0));