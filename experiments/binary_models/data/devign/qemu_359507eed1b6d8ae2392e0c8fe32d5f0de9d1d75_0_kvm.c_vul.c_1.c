static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    unsigned int VAR5 = (VAR4->VAR6.VAR7 & 0xff00);
    uint8_t VAR8 = VAR4->VAR6.VAR7 & 0x00ff;
    int VAR9 = (VAR4->VAR6.VAR10 & 0x0fff0000) >> 16;
    int VAR11 = -1;
    FUN2("", VAR4->VAR6.VAR7, VAR4->VAR6.VAR10);
    switch (VAR5)
    {
    case VAR12:
        VAR11 = FUN3(VAR2, VAR4, VAR8);
        break;
    case VAR13:
        VAR11 = FUN4(VAR2, VAR4, VAR9);
        break;
    case VAR14:
        VAR11 = FUN5(VAR2, VAR4, VAR8);
        break;
    }
    if (VAR11 < 0)
    {
        FUN6(VAR2, 0x0001);
    }
    return VAR11;
}