static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = ~0;
    uint32_t VAR8;
    VAR3 >>= 2;
    switch (VAR3)
    {
    case VAR9:
        VAR7 = ~(VAR10 | VAR11);
        break;
    case VAR12:
        VAR8 = VAR6->VAR13[VAR3] & VAR14;
        VAR6->VAR13[VAR3] = 0;
        FUN2("" VAR15 "", VAR3 * 4, VAR8);
        return VAR8;
    case VAR16:
        VAR7 = VAR14;
        break;
    case VAR17:
        VAR7 = 0x1;
        break;
    case VAR18:
        VAR7 = 0xFF;
        break;
    case VAR19:
        VAR7 = 0x01FFFFFF;
        break;
    case VAR20:
    case VAR21:
    case VAR22:
        VAR7 = 0;
        break;
    case VAR23:
        FUN3(VAR6, &VAR8, VAR6->VAR24);
        FUN2("" VAR15 "", VAR3 * 4, VAR8);
        FUN4(VAR6);
        return VAR8;
    }
    FUN2("" VAR15 "", VAR3 * 4, VAR6->VAR13[VAR3] & VAR7);
    return VAR6->VAR13[VAR3] & VAR7;
}