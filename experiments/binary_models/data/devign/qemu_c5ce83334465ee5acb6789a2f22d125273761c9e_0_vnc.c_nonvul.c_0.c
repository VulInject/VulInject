static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = FUN2(VAR2->VAR5->VAR6, VAR3) & VAR7;
    FUN3(VAR2->VAR5->VAR8.VAR9, VAR4, true);
    FUN4(VAR2->VAR5->VAR10);
    FUN3(VAR2->VAR5->VAR8.VAR9, VAR4, false);
    FUN4(VAR2->VAR5->VAR10);
}