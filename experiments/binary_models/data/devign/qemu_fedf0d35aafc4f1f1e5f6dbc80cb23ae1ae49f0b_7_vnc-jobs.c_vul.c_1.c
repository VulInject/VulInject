int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(sizeof(VAR7));
    VAR8->VAR9.VAR3 = VAR3;
    VAR8->VAR9.VAR4 = VAR4;
    VAR8->VAR9.VAR5 = VAR5;
    VAR8->VAR9.VAR6 = VAR6;
    FUN3(VAR10);
    FUN4(&VAR2->VAR11, VAR8, VAR12);
    FUN5(VAR10);
    return 1;
}