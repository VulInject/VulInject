static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = -1;
    int VAR8;
    FUN2("", VAR9, VAR3);
    if (VAR3 & 0xF)
    {
        goto VAR10;
    }
    VAR8 = (VAR3 >> 6) & 0x3;
    if (VAR3 == 0x0)
    {
        VAR7 = VAR6->VAR11;
        goto VAR10;
    }
    switch (VAR3 & 0x30)
    {
    case 0x00:
        VAR7 = VAR6->VAR12[VAR8].VAR13;
        break;
    case 0x10:
        VAR7 = VAR6->VAR12[VAR8].VAR14;
        break;
    case 0x20:
        VAR7 = FUN3(VAR6, VAR6->VAR15 + VAR8);
        break;
    case 0x30:
        VAR7 = FUN4(VAR6, VAR6->VAR15 + VAR8);
        break;
    }
VAR10:
    FUN2("", VAR9, VAR7);
    return VAR7;
}