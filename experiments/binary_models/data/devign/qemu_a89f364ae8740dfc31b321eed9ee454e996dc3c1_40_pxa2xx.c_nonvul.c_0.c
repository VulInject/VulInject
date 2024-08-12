static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    switch (VAR3)
    {
    case VAR8:
        return VAR6->VAR9[0];
    case VAR10:
        return VAR6->VAR9[1];
    case VAR11:
        return VAR6->VAR12;
    case VAR13:
        return VAR6->VAR14;
    case VAR15:
        return VAR6->VAR16;
    case VAR17:
        return VAR6->VAR18 | VAR6->VAR16;
    case VAR19:
        if (!VAR6->VAR20)
            return 0xffffffff;
        if (VAR6->VAR21 < 1)
        {
            FUN2("", VAR22);
            return 0xffffffff;
        }
        VAR6->VAR21--;
        VAR7 = VAR6->VAR23[VAR6->VAR24++];
        VAR6->VAR24 &= 0xf;
        FUN3(VAR6);
        return VAR7;
    case VAR25:
        return VAR6->VAR26;
    case VAR27:
        return VAR6->VAR28;
    case VAR29:
        return 0;
    case VAR30:
        return VAR6->VAR31;
    default:
        FUN2("" VAR32 "", VAR22, VAR3);
        break;
    }
    return 0;
}