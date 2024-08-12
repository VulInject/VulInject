static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7:
        return VAR6->VAR8[0];
    case VAR9:
        return VAR6->VAR8[1];
    case VAR10:
        return VAR6->VAR11;
    case VAR12:
        return VAR6->VAR13;
    case VAR14:
        return 0;
    case VAR15:
        return VAR6->VAR16;
    case VAR17:
        if (VAR6->VAR18 > 0)
        {
            VAR6->VAR18--;
            FUN2(VAR6);
            return VAR6->FUN3(VAR6->VAR2);
        }
        return 0;
    default:
        FUN4("" VAR19 "", VAR20, VAR3);
        break;
    }
    return 0;
}