static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(sizeof(*VAR5));
    VAR5->VAR6 = FUN3(VAR2, "");
    VAR5->VAR7 = FUN3(VAR2, "");
    VAR5->VAR8 = FUN3(VAR2, "");
    VAR5->VAR9 = true;
    FUN4(VAR5);
    return 0;
}