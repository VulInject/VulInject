static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint16_t VAR5, VAR6;
    uint16_t VAR7;
    uint32_t VAR8;
    FUN2("");
    FUN3(VAR4);
    VAR2->VAR9[VAR10] &= ~VAR11;
    VAR5 = FUN4(VAR4->VAR12) & VAR13;
    switch (VAR5)
    {
    case VAR14:
        FUN5(VAR2);
        return;
    case VAR15:
        FUN6(VAR2);
        return;
    }
    VAR6 = FUN4(VAR4->VAR12) & 0x0700;
    VAR7 = FUN4(VAR4->VAR7);
    VAR8 = FUN7(VAR4->VAR8);
    if (VAR6 == VAR16)
    {
        FUN8("", VAR5);
        FUN9(VAR2);
        return;
    }
    switch (VAR5)
    {
    case VAR17:
        FUN10(VAR2, VAR6, VAR8, VAR7, 0);
        return;
    case VAR18:
        FUN10(VAR2, VAR6, VAR8, VAR7, 1);
        return;
    case VAR19:
        FUN11(VAR2, VAR6, VAR8, VAR7, 0);
        return;
    case VAR20:
        FUN11(VAR2, VAR6, VAR8, VAR7, 1);
        return;
    }
    if (VAR6 < VAR21)
    {
        FUN8("", VAR5, VAR6);
        VAR6 = VAR22;
    }
    VAR7 = VAR7 & 0x0007;
    if (VAR7 & 0x4)
    {
        VAR7 = 4;
        VAR8 &= ~3;
    }
    else if (VAR7 & 0x2)
    {
        VAR7 = 2;
        VAR8 &= ~1;
    }
    else
        VAR7 = 1;
    switch (VAR5)
    {
    case VAR23:
        FUN12(VAR2, VAR6, VAR8, VAR7);
        return;
    case VAR24:
        FUN13(VAR2, VAR6, VAR8, VAR7);
        return;
    }
}