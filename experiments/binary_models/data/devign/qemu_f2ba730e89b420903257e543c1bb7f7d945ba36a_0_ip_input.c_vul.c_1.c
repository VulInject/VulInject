FUN1(register struct VAR1 *VAR1, register struct VAR2 *VAR3)
{
    register struct VAR4 *VAR5 = FUN2(VAR1);
    register struct VAR6 *VAR7;
    int VAR8 = VAR1->VAR9 << 2;
    int VAR10, VAR11;
    FUN3("");
    FUN4("", (long)VAR1);
    FUN4("", (long)VAR3);
    FUN4("", (long)VAR5);
    VAR5->VAR12 += VAR8;
    VAR5->VAR13 -= VAR8;
    if (VAR3 == 0)
    {
        struct VAR4 *VAR14;
        if ((VAR14 = FUN5()) == NULL)
            goto VAR15;
        VAR3 = FUN6(VAR14, struct VAR2 *);
        FUN7(&VAR3->VAR16, &VAR2.VAR16);
        VAR3->VAR17 = VAR18;
        VAR3->VAR19 = VAR1->VAR20;
        VAR3->VAR21 = VAR1->VAR22;
        VAR3->VAR23.VAR11 = VAR3->VAR23.VAR24 = &VAR3->VAR23;
        VAR3->VAR25 = VAR1->VAR26;
        VAR3->VAR27 = VAR1->VAR28;
        VAR7 = (struct VAR6 *)VAR3;
        goto VAR29;
    }
    for (VAR7 = VAR3->VAR23.VAR11; VAR7 != (struct VAR6 *)&VAR3->VAR23; VAR7 = VAR7->VAR30)
        if (VAR7->VAR31 > VAR1->VAR32)
            break;
    if (VAR7->VAR33 != &VAR3->VAR23)
    {
        struct VAR6 *VAR34 = VAR7->VAR33;
        VAR10 = VAR34->VAR31 + VAR34->VAR35 - VAR1->VAR32;
        if (VAR10 > 0)
        {
            if (VAR10 >= VAR1->VAR36)
                goto VAR15;
            FUN8(FUN2(VAR1), VAR10);
            VAR1->VAR32 += VAR10;
            VAR1->VAR36 -= VAR10;
        }
    }
    while (VAR7 != (struct VAR6 *)&VAR3->VAR23 && VAR1->VAR32 + VAR1->VAR36 > VAR7->VAR31)
    {
        VAR10 = (VAR1->VAR32 + VAR1->VAR36) - VAR7->VAR31;
        if (VAR10 < VAR7->VAR35)
        {
            VAR7->VAR35 -= VAR10;
            VAR7->VAR31 += VAR10;
            FUN8(FUN2(VAR7), VAR10);
            break;
        }
        VAR7 = VAR7->VAR30;
        FUN9(FUN2(VAR7->VAR33));
        FUN10(VAR7->VAR33);
    }
VAR29:
    FUN11(FUN12(VAR1), VAR7->VAR33);
    VAR11 = 0;
    for (VAR7 = VAR3->VAR23.VAR11; VAR7 != (struct VAR6 *)&VAR3->VAR23; VAR7 = VAR7->VAR30)
    {
        if (VAR7->VAR31 != VAR11)
            return (0);
        VAR11 += VAR7->VAR35;
    }
    if (((struct VAR6 *)(VAR7->VAR33))->VAR37 & 1)
        return (0);
    VAR7 = VAR3->VAR23.VAR11;
    VAR5 = FUN2(VAR7);
    VAR7 = (struct VAR6 *)VAR7->VAR30;
    while (VAR7 != (struct VAR6 *)&VAR3->VAR23)
    {
        struct VAR4 *VAR14 = FUN2(VAR7);
        VAR7 = (struct VAR6 *)VAR7->VAR30;
        FUN13(VAR5, VAR14);
    }
    VAR7 = VAR3->VAR23.VAR11;
    if (VAR5->VAR38 & VAR39)
    {
        int VAR40;
        VAR40 = (char *)VAR1 - VAR5->VAR41;
        VAR7 = (struct VAR6 *)(VAR5->VAR42 + VAR40);
    }
    VAR1 = FUN14(VAR7);
    VAR1->VAR36 = VAR11;
    VAR1->VAR43 &= ~1;
    VAR1->VAR26 = VAR3->VAR25;
    VAR1->VAR28 = VAR3->VAR27;
    FUN15(&VAR3->VAR16);
    (void)FUN16(FUN2(VAR3));
    VAR5->VAR13 += (VAR1->VAR9 << 2);
    VAR5->VAR12 -= (VAR1->VAR9 << 2);
    return VAR1;
VAR15:
    FUN17(VAR44.VAR45++);
    FUN9(VAR5);
    return (0);
}