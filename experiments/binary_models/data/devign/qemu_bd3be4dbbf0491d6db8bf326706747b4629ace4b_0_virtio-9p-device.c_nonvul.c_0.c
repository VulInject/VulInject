static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR8->VAR11;
    if (FUN4(VAR10, VAR4))
    {
        goto VAR12;
    }
    VAR8->VAR13 = sizeof(struct VAR14) + strlen(VAR10->VAR15.VAR16);
    FUN5(VAR6, "", VAR17, VAR8->VAR13);
    VAR8->VAR18 = FUN6(VAR6, VAR19, VAR20);
    FUN7(VAR10, &VAR21);
VAR12:
    return;
}