static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    VAR4 = FUN2(VAR3, VAR2);
    VAR5 = FUN3(VAR7, VAR8, VAR4);
    VAR6 = FUN4(&VAR4->VAR9);
    FUN5(VAR2, 0x1000, VAR5);
    FUN5(VAR2, 0x1000, VAR6);
    return 0;
}