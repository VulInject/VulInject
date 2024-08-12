static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned int VAR6, VAR7, VAR8;
    FUN2(&VAR6, &VAR7, &VAR8);
    if (!(VAR6 > 0 || VAR7 > 2 || VAR7 == 2 && VAR8 >= 26))
    {
        FUN3(VAR2, VAR9, "");
        return VAR10;
    }
    if (VAR4->VAR11 == 0)
    {
        VAR2->VAR12 = 41 * VAR13;
        VAR2->VAR14 = 25 * VAR15;
    }
    VAR4->VAR16 = NULL;
    VAR4->VAR17 = NULL;
    VAR4->VAR18 = VAR19;
    {
        char *VAR20;
        VAR4->VAR21 = FUN4("", &VAR20);
    }
    FUN3(VAR2, VAR22, "", VAR4->VAR23);
    return (VAR4->VAR11 == 1) ? FUN5(VAR2) : 0;
}