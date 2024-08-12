static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8.VAR9;
    if (VAR2->VAR10 > 0)
        VAR7->VAR11 = VAR2->VAR10;
    if (VAR2->VAR12 > 0)
        VAR7->VAR13 = VAR2->VAR12;
    if (VAR4->VAR7 > 0)
    {
        FUN2(VAR2, VAR7);
    }
    else if (VAR4->VAR14 & VAR15)
    {
        FUN3(VAR2, VAR7);
    }
    else if (VAR2->VAR16 > 0)
    {
        FUN4(VAR2, VAR7);
    }
    else if (VAR2->VAR17 >= 0 && VAR2->VAR18 >= 0)
    {
        VAR7->VAR19 = VAR20;
        FUN5(VAR2, VAR7);
    }
    if (VAR2->VAR21 > 0)
        VAR7->VAR22 = VAR2->VAR21;
    if (VAR7->VAR11 > 0)
        VAR2->VAR10 = VAR7->VAR11;
    if (VAR4->VAR23)
    {
        VAR4->VAR8.VAR9.VAR24 = 1;
        VAR4->VAR8.VAR9.VAR25 = VAR4->VAR26;
        FUN6(VAR2, VAR27, "");
    }
    if (VAR4->VAR28)
    {
        VAR4->VAR8.VAR9.VAR29 = 1;
        FUN6(VAR2, VAR27, "");
    }
    if (VAR4->VAR30 > 0)
    {
        int VAR31 = FUN7(VAR4->VAR32, VAR4->VAR33) - VAR4->VAR8.VAR34 - 4;
        if (VAR31 < 0)
        {
            FUN6(VAR2, VAR35, "");
        }
        else
        {
            VAR4->VAR8.VAR9.VAR36 = 1;
            VAR4->VAR8.VAR9.VAR37 = FUN8(VAR4->VAR30, 0, VAR31);
            VAR4->VAR8.VAR9.VAR38 = VAR4->VAR39;
            VAR4->VAR8.VAR9.VAR40 = !VAR4->VAR41;
            FUN6(VAR2, VAR27, "", VAR4->VAR8.VAR9.VAR37, VAR4->VAR8.VAR9.VAR38 ? "" : "", VAR4->VAR8.VAR9.VAR40 ? "" : "");
        }
    }
    if (VAR4->VAR42)
    {
        VAR4->VAR8.VAR9.VAR43 = 1;
        FUN6(VAR2, VAR27, "");
    }
    if (VAR4->VAR44)
        VAR4->VAR8.VAR9.VAR45 = 1;
    if (VAR4->VAR46)
        VAR4->VAR8.VAR9.VAR47 = 1;
    if (VAR4->VAR48)
        VAR4->VAR8.VAR9.VAR49 = VAR4->VAR48;
}