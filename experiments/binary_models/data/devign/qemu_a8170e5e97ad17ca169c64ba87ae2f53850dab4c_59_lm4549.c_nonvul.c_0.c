void FUN1(VAR1 *VAR2, hwaddr VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    assert(VAR3 < 128);
    FUN2("", VAR3, VAR4);
    switch (VAR3)
    {
    case VAR7:
        FUN3(VAR2);
        break;
    case VAR8:
        VAR6[VAR8] = VAR4;
        FUN2("", VAR4);
        struct audsettings VAR9;
        VAR9.VAR10 = VAR4;
        VAR9.VAR11 = 2;
        VAR9.VAR12 = VAR13;
        VAR9.VAR14 = 0;
        VAR2->VAR15 = FUN4(&VAR2->VAR16, VAR2->VAR15, "", VAR2, VAR17, &VAR9);
        break;
    case VAR18:
        VAR4 &= ~0xf;
        VAR4 |= VAR6[VAR18] & 0xf;
        VAR6[VAR18] = VAR4;
        break;
    case VAR19:
    case VAR20:
    case VAR21:
        FUN2("", (int)VAR3);
        break;
    default:
        VAR6[VAR3] = VAR4;
        break;
    }
}