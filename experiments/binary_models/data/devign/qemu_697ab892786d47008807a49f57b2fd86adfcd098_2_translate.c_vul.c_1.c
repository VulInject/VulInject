void FUN1(void)
{
    int VAR1;
    char *VAR2;
    size_t VAR3;
    static int VAR4 = 0;
    if (VAR4)
        return;
    VAR5 = FUN2(VAR6, "");
    VAR2 = VAR7;
    VAR3 = sizeof(VAR7);
    for (VAR1 = 0; VAR1 < 8; VAR1++)
    {
        snprintf(VAR2, VAR3, "", VAR1);
        VAR8[VAR1] = FUN3(VAR6, FUN4(VAR9, VAR10[VAR1]), VAR2);
        VAR2 += 5;
        VAR3 -= 5;
    }
    for (VAR1 = 0; VAR1 < 32; VAR1++)
    {
        snprintf(VAR2, VAR3, "", VAR1);
        VAR11[VAR1] = FUN5(VAR6, FUN4(VAR9, VAR12[VAR1]), VAR2);
        VAR2 += (VAR1 < 10) ? 3 : 4;
        VAR3 -= (VAR1 < 10) ? 3 : 4;
        snprintf(VAR2, VAR3, "", VAR1);
        VAR13[VAR1] = FUN3(VAR6, FUN4(VAR9, VAR14[VAR1]), VAR2);
        VAR2 += (VAR1 < 10) ? 4 : 5;
        VAR3 -= (VAR1 < 10) ? 4 : 5;
        snprintf(VAR2, VAR3, "", VAR1);
        VAR15[VAR1] = FUN6(VAR6, FUN4(VAR9, VAR16[VAR1]), VAR2);
        VAR2 += (VAR1 < 10) ? 4 : 5;
        VAR3 -= (VAR1 < 10) ? 4 : 5;
        snprintf(VAR2, VAR3, "", VAR1);
        VAR17[VAR1] = FUN6(VAR6, FUN4(VAR9, VAR18[VAR1].VAR19[0]), VAR2);
        VAR17[VAR1] = FUN6(VAR6, FUN4(VAR9, VAR18[VAR1].VAR19[1]), VAR2);
        VAR2 += (VAR1 < 10) ? 6 : 7;
        VAR3 -= (VAR1 < 10) ? 6 : 7;
        snprintf(VAR2, VAR3, "", VAR1);
        VAR20[VAR1] = FUN6(VAR6, FUN4(VAR9, VAR18[VAR1].VAR19[1]), VAR2);
        VAR20[VAR1] = FUN6(VAR6, FUN4(VAR9, VAR18[VAR1].VAR19[0]), VAR2);
        VAR2 += (VAR1 < 10) ? 6 : 7;
        VAR3 -= (VAR1 < 10) ? 6 : 7;
    }
    VAR21 = FUN5(VAR6, FUN4(VAR9, VAR22), "");
    VAR23 = FUN5(VAR6, FUN4(VAR9, VAR24), "");
    VAR25 = FUN5(VAR6, FUN4(VAR9, VAR26), "");
    VAR27 = FUN5(VAR6, FUN4(VAR9, VAR28), "");
    VAR29 = FUN5(VAR6, FUN4(VAR9, VAR30), "");
    VAR31 = FUN5(VAR6, FUN4(VAR9, VAR32), "");
    VAR33 = FUN3(VAR6, FUN4(VAR9, VAR34), "");
    VAR35 = FUN3(VAR6, FUN4(VAR9, VAR36), "");
    VAR4 = 1;