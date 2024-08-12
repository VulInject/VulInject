static void FUN1(const char *VAR1, VAR2 *VAR3)
{
    char *VAR4;
    uint8_t VAR5;
    uint8_t VAR6;
    uint16_t VAR7;
    int VAR8;
    const char *VAR9 = "";
    if (!FUN2(VAR3->VAR10, VAR11))
    {
        VAR9 = "";
    }
    VAR4 = FUN3("", VAR1 ? VAR1 : "", VAR12, VAR9);
    FUN4(VAR4);
    for (VAR8 = 0; VAR8 < VAR13; ++VAR8)
    {
        VAR5 = FUN5(VAR14 + VAR15);
        VAR6 = FUN5(VAR14 + VAR15 + 1);
        VAR7 = (VAR6 << 8) | VAR5;
        if (VAR7 == VAR16)
        {
            break;
        }
        FUN6(VAR17);
    }
    FUN7(VAR7, ==, VAR16);
    FUN8(VAR3);
    FUN9(VAR3);
    FUN10(VAR3);
    FUN11(VAR3);
    FUN12(VAR3);
    FUN13(VAR3);
    FUN14(VAR3);
    if (VAR18)
    {
        if (getenv(VAR19))
        {
            FUN15(VAR3, true);
        }
        else
        {
            FUN16(VAR3);
        }
    }
    FUN17(VAR20);
    FUN18(VAR4);
}