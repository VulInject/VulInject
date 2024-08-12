static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, VAR7 *VAR8)
{
    char *VAR9;
    int VAR10 = -1;
    int VAR11 = -1;
    int VAR12 = 0;
    V9fsString VAR13;
    char VAR14[VAR15];
    FUN2(&VAR13);
    FUN3(&VAR13, "", VAR4->VAR16, VAR5);
    VAR9 = VAR13.VAR16;
    if (VAR2->VAR17 & VAR18)
    {
        VAR10 = open(FUN4(VAR2, VAR9, VAR14), VAR6, VAR19);
        if (VAR10 == -1)
        {
            VAR11 = VAR10;
            goto VAR20;
        }
        VAR8->VAR21 = VAR8->VAR21 | VAR22;
        VAR11 = FUN5(FUN4(VAR2, VAR9, VAR14), VAR8);
        if (VAR11 == -1)
        {
            VAR12 = VAR23;
            goto VAR24;
        }
    }
    else if ((VAR2->VAR17 & VAR25) || (VAR2->VAR17 & VAR26))
    {
        VAR10 = open(FUN4(VAR2, VAR9, VAR14), VAR6, VAR8->VAR21);
        if (VAR10 == -1)
        {
            VAR11 = VAR10;
            goto VAR20;
        }
        VAR11 = FUN6(VAR2, VAR9, VAR8);
        if (VAR11 == -1)
        {
            VAR12 = VAR23;
            goto VAR24;
        }
    }
    VAR11 = VAR10;
    goto VAR20;
VAR24:
    close(VAR10);
    remove(FUN4(VAR2, VAR9, VAR14));
    VAR23 = VAR12;
VAR20:
    FUN7(&VAR13);
    return VAR11;
}