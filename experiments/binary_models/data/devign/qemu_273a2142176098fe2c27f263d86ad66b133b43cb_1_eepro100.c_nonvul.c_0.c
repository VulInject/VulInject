static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR3;
    VAR4 *VAR5 = VAR2->VAR6.VAR7;
    FUN2("", VAR2);
    FUN3(VAR5, VAR8);
    FUN4(VAR5, VAR9);
    FUN5(VAR10, 0x0000);
    FUN5(VAR11, 0x2800);
    FUN6(VAR12, 0x08);
    FUN6(0x09, 0x00);
    FUN7(VAR5, VAR13);
    FUN6(0x0d, 0x20);
    FUN8(VAR14, VAR15 | VAR16);
    FUN8(VAR17, VAR18);
    FUN8(VAR19, 0xfffe0000 | VAR15);
    FUN8(0x30, 0x00000000);
    FUN6(0x34, 0xdc);
    FUN6(0x3d, 1);
    FUN6(0x3e, 0x08);
    FUN6(0x3f, 0x18);
    FUN8(0xdc, 0x7e210001);
    switch (VAR3)
    {
    case VAR20:
        FUN6(VAR12, 0x0f);
        break;
    case VAR21:
        FUN5(VAR22, 0x1229);
        FUN6(VAR12, 0x02);
        break;
    case VAR23:
        FUN5(VAR22, 0x1229);
        FUN6(VAR12, 0x03);
        break;
    case VAR24:
        FUN5(VAR22, 0x1229);
        FUN5(VAR11, 0x2810);
        FUN6(VAR12, 0x05);
        break;
    case VAR25:
        FUN5(VAR22, 0x1229);
        FUN5(VAR11, 0x2810);
        break;
    case VAR26:
        FUN5(VAR11, 0x2810);
        FUN6(VAR12, 0x09);
        break;
    default:
        FUN2("", VAR3);
    }
    if (VAR3 == VAR23 || VAR3 == VAR24 || VAR3 == VAR25)
    {
        FUN2("");
    }
}