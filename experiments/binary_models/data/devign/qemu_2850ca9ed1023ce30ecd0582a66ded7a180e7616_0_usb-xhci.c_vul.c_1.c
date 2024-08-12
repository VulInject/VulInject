static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    uint8_t VAR8, VAR9;
    uint16_t VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    FUN2("", VAR4->VAR18);
    VAR6 = &VAR4->VAR19[0];
    VAR7 = &VAR4->VAR19[VAR4->VAR20 - 1];
    if (FUN3(*VAR7) == VAR21 && VAR4->VAR20 > 2)
    {
        VAR7--;
    }
    if (FUN3(*VAR6) != VAR22)
    {
        fprintf(VAR23, "", FUN3(*VAR6));
        return -1;
    }
    if (FUN3(*VAR7) != VAR24)
    {
        fprintf(VAR23, "", FUN3(*VAR7));
        return -1;
    }
    if (!(VAR6->VAR25 & VAR26))
    {
        fprintf(VAR23, "");
        return -1;
    }
    if ((VAR6->VAR27 & 0x1ffff) != 8)
    {
        fprintf(VAR23, "", (VAR6->VAR27 & 0x1ffff));
        return -1;
    }
    VAR8 = VAR6->VAR28;
    VAR9 = VAR6->VAR28 >> 8;
    VAR10 = VAR6->VAR28 >> 16;
    VAR12 = VAR6->VAR28 >> 32;
    VAR11 = VAR6->VAR28 >> 48;
    if (VAR4->VAR29 && VAR4->VAR30 < VAR11)
    {
        VAR4->VAR30 = 0;
        FUN4(VAR4->VAR29);
        VAR4->VAR29 = NULL;
    }
    if (!VAR4->VAR29)
    {
        FUN2("", VAR11);
        VAR4->VAR29 = FUN5(VAR11 + 1);
        VAR4->VAR30 = VAR11;
    }
    VAR4->VAR31 = VAR11;
    VAR14 = &VAR2->VAR32[VAR2->VAR33[VAR4->VAR18 - 1].VAR14 - 1];
    VAR16 = FUN6(VAR14, VAR2->VAR33[VAR4->VAR18 - 1].VAR34);
    if (!VAR16)
    {
        fprintf(VAR23, "", VAR4->VAR18, VAR2->VAR33[VAR4->VAR18 - 1].VAR14);
        return -1;
    }
    VAR4->VAR35 = VAR8 & VAR36;
    VAR4->VAR37 = false;
    FUN7(VAR4, VAR16);
    if (!VAR4->VAR35)
    {
        FUN8(VAR4, VAR4->VAR29, VAR11, 0, 1, 0);
    }
    VAR17 = FUN9(VAR16, &VAR4->VAR38, (VAR8 << 8) | VAR9, VAR10, VAR12, VAR11, VAR4->VAR29);
    FUN10(VAR4, VAR17);
    if (!VAR4->VAR39 && !VAR4->VAR40)
    {
        FUN11(VAR2, VAR4->VAR18, VAR4->VAR41);
    }
    return 0;
}