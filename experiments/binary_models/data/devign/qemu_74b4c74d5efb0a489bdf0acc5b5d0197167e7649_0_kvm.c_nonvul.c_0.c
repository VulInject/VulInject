static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    unsigned int VAR5 = (VAR4->VAR6.VAR7 & 0xff00);
    uint8_t VAR8 = VAR4->VAR6.VAR7 & 0x00ff;
    int VAR9 = -1;
    FUN2("", VAR4->VAR6.VAR7, VAR4->VAR6.VAR10);
    switch (VAR5)
    {
    case VAR11:
        VAR9 = FUN3(VAR2, VAR4, VAR8);
        break;
    case VAR12:
        VAR9 = FUN4(VAR2, VAR4, VAR8);
        break;
    case VAR13:
        VAR9 = FUN5(VAR2, VAR4, VAR4->VAR6.VAR10 & 0xff);
        break;
    case VAR14:
        VAR9 = FUN6(VAR2, VAR4, VAR4->VAR6.VAR10 & 0xff);
        break;
    case VAR15:
        VAR9 = FUN7(VAR2, VAR4, VAR4->VAR6.VAR10);
        break;
    case VAR16:
        VAR9 = FUN8(VAR2, VAR8, VAR4->VAR6.VAR10);
        break;
    }
    if (VAR9 < 0)
    {
        VAR9 = 0;
        FUN9(VAR2, VAR17);
    }
    return VAR9;
}