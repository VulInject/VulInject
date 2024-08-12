VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR1 *VAR9;
    VAR10 *VAR11;
    int VAR12;
    VAR9 = FUN2(VAR3, 0);
    if (!VAR9)
    {
        fprintf(VAR13, "");
        FUN3(1);
    }
    VAR6 = FUN4(VAR4);
    if (!VAR6)
    {
        fprintf(VAR13, "");
        FUN3(1);
    }
    VAR8 = &VAR9->VAR6;
    VAR8->VAR14 = VAR15;
    VAR8->VAR16 = 400000;
    VAR8->VAR17 = 352;
    VAR8->VAR18 = 288;
    VAR8->VAR19 = 25;
    VAR8->VAR20 = 1;
    VAR8->VAR21 = 12;
    if (FUN5(VAR8, VAR6) < 0)
    {
        fprintf(VAR13, "");
        FUN3(1);
    }
    VAR22 = FUN6();
    VAR23 = 100000;
    VAR24 = malloc(VAR23);
    VAR12 = VAR8->VAR17 * VAR8->VAR18;
    VAR11 = malloc((VAR12 * 3) / 2);
    VAR22->VAR25[0] = VAR11;
    VAR22->VAR25[1] = VAR22->VAR25[0] + VAR12;
    VAR22->VAR25[2] = VAR22->VAR25[1] + VAR12 / 4;
    VAR22->VAR26[0] = VAR8->VAR17;
    VAR22->VAR26[1] = VAR8->VAR17 / 2;
    VAR22->VAR26[2] = VAR8->VAR17 / 2;
    return VAR9;
}