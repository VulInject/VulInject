static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(VAR2, VAR5, "", VAR6, NULL, NULL, NULL, &VAR7);
    VAR4->VAR8 = 0;
    FUN3(VAR2, VAR9, "", VAR10, VAR11, NULL, NULL, &VAR7);
    FUN4(VAR2, VAR9, "", &VAR7);
    VAR4->VAR12 = VAR13;
    FUN3(VAR2, VAR14, "", VAR15, VAR16, NULL, NULL, &VAR7);
    FUN4(VAR2, VAR14, "", &VAR7);
    VAR4->VAR17 = VAR13;
    FUN3(VAR2, VAR18, "", VAR19, VAR20, NULL, NULL, &VAR7);
    FUN4(VAR2, VAR18, "", &VAR7);
    VAR4->VAR21.VAR22 = false;
    FUN5(VAR2, VAR23, VAR24, VAR25, &VAR7);
}