static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint8_t VAR7;
    switch (VAR3)
    {
    case VAR8:
        return VAR6->VAR9[0];
    case VAR10:
        return VAR6->VAR9[1];
    case VAR11:
        return VAR6->VAR9[2];
    case VAR12:
        VAR6->VAR13[0] &= ~0x01;
        VAR6->VAR13[1] &= ~0x72;
        if (VAR6->VAR14)
        {
            VAR6->VAR14--;
            VAR7 = VAR6->VAR15[VAR6->VAR16++];
            VAR6->VAR16 &= 63;
            FUN2(VAR6);
            return VAR7;
        }
        FUN3("", VAR17);
        break;
    case VAR18:
        return VAR6->VAR13[0];
    case VAR19:
        return VAR6->VAR13[1] | (1 << 3);
    case VAR20:
        return VAR6->VAR14;
    default:
        FUN3("" VAR21 "", VAR17, VAR3);
        break;
    }
    return 0;
}