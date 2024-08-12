static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)&VAR4[1];
    switch (VAR4->VAR7)
    {
    case VAR8:
        FUN2(VAR2, VAR9, "", VAR4->VAR10);
        if (VAR4->VAR10 > VAR11)
        {
            FUN3("");
            FUN4(VAR2, VAR4->VAR12, VAR13);
        }
        memcpy(VAR2->VAR14, VAR6, VAR4->VAR10);
        VAR2->VAR15 = VAR4->VAR10;
        FUN5(&VAR2->VAR16);
        FUN4(VAR2, VAR4->VAR12, VAR17);
    case VAR18:
        FUN6(&VAR2->VAR16, VAR6, VAR4->VAR10);
    case VAR19:
        FUN2(VAR2, VAR9, "");
        FUN7(&VAR2->VAR16);
        FUN4(VAR2, VAR4->VAR12, VAR17);
    case VAR20:
        FUN8(VAR2, VAR4, (VAR21 *)VAR6);
    case VAR22:
        FUN9(&VAR2->VAR16, *(VAR23 *)VAR6);
    case VAR24:
        if (FUN10(&VAR2->VAR16) < 0)
        {
            FUN4(VAR2, VAR25, VAR26);
        }
        else
        {
            FUN4(VAR2, VAR27, VAR17);
        }
    case VAR28:
        FUN11(&VAR2->VAR16);
        FUN4(VAR2, VAR4->VAR12, VAR17);
    default:
        FUN12("", VAR4->VAR7);
        FUN4(VAR2, VAR4->VAR12, VAR13);
    }