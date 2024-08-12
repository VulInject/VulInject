static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR2, NULL);
    xcb_get_geometry_cookie_t VAR8;
    VAR9 *VAR10;
    int VAR11;
    if (!VAR7)
        return FUN3(VAR12);
    VAR11 = FUN4(&VAR4->VAR13, &VAR4->VAR14, VAR4->VAR15);
    if (VAR11 < 0)
        return VAR11;
    VAR11 = FUN5(&VAR7->VAR16, VAR4->VAR17);
    if (VAR11 < 0)
        return VAR11;
    FUN6(VAR7, 64, 1, 1000000);
    VAR8 = FUN7(VAR4->VAR18, VAR4->VAR19->VAR20);
    VAR10 = FUN8(VAR4->VAR18, VAR8, NULL);
    if (VAR4->VAR21 + VAR4->VAR13 >= VAR10->VAR13 || VAR4->VAR22 + VAR4->VAR14 >= VAR10->VAR14)
    {
        FUN9(VAR2, VAR23, ""
                                "",
               VAR4->VAR13, VAR4->VAR14, VAR4->VAR21, VAR4->VAR22, VAR10->VAR13, VAR10->VAR14);
        return FUN3(VAR24);
    }
    VAR4->VAR25 = (VAR26){VAR7->VAR16.VAR27, VAR7->VAR16.VAR28};
    VAR4->VAR29 = FUN10();
    VAR7->VAR30->VAR31 = VAR32;
    VAR7->VAR30->VAR33 = VAR34;
    VAR7->VAR30->VAR13 = VAR4->VAR13;
    VAR7->VAR30->VAR14 = VAR4->VAR14;
    VAR7->VAR30->VAR25 = VAR4->VAR25;
    VAR11 = FUN11(VAR2, VAR10->VAR35, &VAR7->VAR30->VAR36);
    free(VAR10);
    return VAR11;
}