static int FUN1(VAR1 *VAR2, eventfd_user_side_handler_t VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6->VAR5;
    struct VAR7 *VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR9 = sizeof(*VAR8) + sizeof(*VAR12);
    VAR8 = FUN2(VAR9);
    VAR8->VAR9 = VAR9;
    VAR8->VAR13 = VAR14 | VAR15;
    VAR8->VAR16 = VAR2->VAR17;
    VAR8->VAR18 = 0;
    VAR8->VAR19 = 1;
    VAR12 = (VAR11 *)&VAR8->VAR20;
    *VAR12 = FUN3(VAR2->VAR21);
    FUN4(*VAR12, (VAR22 *)VAR3, NULL, VAR2);
    VAR10 = FUN5(VAR5->VAR23, VAR24, VAR8);
    FUN6(VAR8);
    if (VAR10 < 0)
    {
        FUN7("");
        FUN4(*VAR12, NULL, NULL, NULL);
    }
    return VAR10;
}