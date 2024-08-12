static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    struct VAR6 *VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    VAR8 = sizeof(*VAR7) + sizeof(*VAR11);
    VAR7 = FUN2(VAR8);
    VAR7->VAR8 = VAR8;
    VAR7->VAR12 = VAR13 | VAR14;
    VAR7->VAR15 = VAR2->VAR16;
    VAR7->VAR17 = 0;
    VAR7->VAR18 = 1;
    VAR11 = (VAR10 *)&VAR7->VAR19;
    *VAR11 = FUN3(VAR2->VAR20);
    FUN4(*VAR11, NULL, NULL, NULL);
    VAR9 = FUN5(VAR4->VAR21, VAR22, VAR7);
    FUN6(VAR7);
    if (VAR9 < 0)
    {
        FUN7("");
    }
    return VAR9;
}