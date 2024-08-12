static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8;
    VAR3 -= VAR6->VAR9;
    switch (VAR3)
    {
    case VAR10:
        return VAR6->VAR11;
    case VAR12:
        return VAR6->VAR13 | (FUN2(VAR6->VAR14) << 2);
    case VAR15:
        VAR8 = FUN3(VAR6->VAR8);
        return VAR8->VAR16;
    case VAR17:
        return VAR6->VAR18;
    case VAR19:
        if (VAR6->VAR13 & (1 << 2))
            VAR6->VAR20 ^= 3;
        else
            VAR6->VAR20 = 0;
        return VAR6->VAR20;
    default:
        FUN4("" VAR21 "", VAR22, VAR3);
        break;
    }
    return 0;
}