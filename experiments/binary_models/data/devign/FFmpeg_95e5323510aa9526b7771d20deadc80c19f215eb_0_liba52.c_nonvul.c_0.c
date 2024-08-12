static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR6 = dlopen(VAR7, VAR8);
    if (!VAR4->VAR6)
    {
        FUN2(VAR2, VAR9, "", VAR7, FUN3());
        return -1;
    }
    VAR4->VAR10 = (VAR11 * (*)(VAR12)) FUN4(VAR4->VAR6, "");
    VAR4->VAR13 = (VAR14 * (*)(VAR11 *)) FUN4(VAR4->VAR6, "");
    VAR4->VAR15 = (int (*)(VAR16 *, int *, int *, int *))FUN4(VAR4->VAR6, "");
    VAR4->VAR17 = (int (*)(VAR11 *, VAR16 *, int *, VAR14 *, VAR14))FUN4(VAR4->VAR6, "");
    VAR4->VAR18 = (int (*)(VAR11 *))FUN4(VAR4->VAR6, "");
    VAR4->VAR19 = (void (*)(VAR11 *))FUN4(VAR4->VAR6, "");
    if (!VAR4->VAR10 || !VAR4->VAR13 || !VAR4->VAR15 || !VAR4->VAR17 || !VAR4->VAR18 || !VAR4->VAR19)
    {
        FUN5(VAR4->VAR6);
        return -1;
    }
    VAR4->VAR6 = 0;
    VAR4->VAR10 = VAR10;
    VAR4->VAR13 = VAR13;
    VAR4->VAR15 = VAR15;
    VAR4->VAR17 = VAR17;
    VAR4->VAR18 = VAR18;
    VAR4->VAR19 = VAR19;
    VAR4->VAR20 = VAR4->FUN6(0);
    VAR4->VAR21 = VAR4->FUN7(VAR4->VAR20);
    if (VAR2->VAR22 > 0 && VAR2->VAR23 > 0 && VAR2->VAR23 < VAR2->VAR22 && VAR2->VAR23 <= 2)
    {
        VAR2->VAR22 = VAR2->VAR23;
    }
    return 0;
}