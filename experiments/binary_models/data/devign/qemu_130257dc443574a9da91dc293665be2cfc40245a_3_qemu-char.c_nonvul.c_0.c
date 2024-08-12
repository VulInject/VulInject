static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR2, "");
    const char *VAR8 = FUN2(VAR2, "");
    const char *VAR9 = FUN2(VAR2, "");
    const char *VAR10 = FUN2(VAR2, "");
    bool VAR11 = false;
    VAR12 *VAR13;
    if (VAR7 == NULL || strlen(VAR7) == 0)
    {
        VAR7 = "";
    }
    if (VAR8 == NULL || strlen(VAR8) == 0)
    {
        FUN3(VAR6, "");
        return;
    }
    if (VAR10 == NULL || strlen(VAR10) == 0)
    {
        VAR10 = "";
    }
    else
    {
        VAR11 = true;
    }
    if (VAR9 == NULL || strlen(VAR9) == 0)
    {
        VAR9 = "";
    }
    else
    {
        VAR11 = true;
    }
    VAR4->VAR14.VAR15 = FUN4(VAR16, 1);
    VAR13 = FUN4(VAR12, 1);
    VAR13->VAR17 = VAR18;
    VAR13->VAR14.VAR19 = FUN4(VAR20, 1);
    VAR13->VAR14.VAR19->VAR7 = FUN5(VAR7);
    VAR13->VAR14.VAR19->VAR8 = FUN5(VAR8);
    VAR13->VAR14.VAR19->VAR21 = FUN2(VAR2, "");
    VAR13->VAR14.VAR19->VAR22 = FUN6(VAR2, "", 0);
    VAR13->VAR14.VAR19->VAR23 = FUN2(VAR2, "");
    VAR13->VAR14.VAR19->VAR24 = FUN6(VAR2, "", 0);
    VAR4->VAR14.VAR15->VAR25 = VAR13;
    if (VAR11)
    {
        VAR4->VAR14.VAR15->VAR11 = true;
        VAR13 = FUN4(VAR12, 1);
        VAR13->VAR17 = VAR18;
        VAR13->VAR14.VAR19 = FUN4(VAR20, 1);
        VAR13->VAR14.VAR19->VAR7 = FUN5(VAR9);
        VAR13->VAR14.VAR19->VAR8 = FUN5(VAR10);
        VAR4->VAR14.VAR15->VAR26 = VAR13;
    }
}