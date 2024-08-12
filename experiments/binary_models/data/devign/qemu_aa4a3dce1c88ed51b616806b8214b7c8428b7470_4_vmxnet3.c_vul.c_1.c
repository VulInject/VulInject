FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    switch (VAR2)
    {
    case VAR7:
        FUN2("" VAR8 "", VAR3, VAR4);
        break;
    case VAR9:
        FUN2("" VAR8 "", VAR3, VAR4);
        break;
    case VAR10:
        FUN2("" VAR8 "", VAR3, VAR4);
        if (VAR3 == 0)
        {
            VAR6->VAR11 = false;
        }
        VAR6->VAR12 = VAR3;
        VAR6->VAR13 = 0;
        break;
    case VAR14:
        FUN2("" VAR8 "", VAR3, VAR4);
        VAR6->VAR13 = VAR6->VAR12 | (VAR3 << 32);
        break;
    case VAR15:
        FUN2("" VAR8 "", VAR3, VAR4);
        FUN3(VAR6, VAR3);
        break;
    case VAR16:
        FUN2("" VAR8 "", VAR3, VAR4);
        VAR6->VAR17 = VAR3;
        break;
    case VAR18:
        FUN2("" VAR8 "", VAR3, VAR4);
        FUN4(VAR6, VAR3, VAR6->VAR17);
        break;
    case VAR19:
        FUN2("" VAR8 "", VAR3, VAR4);
        FUN5();
        break;
    case VAR20:
        FUN2("" VAR8 "", VAR3, VAR4);
        FUN6(VAR6, VAR3);
        break;
    default:
        FUN2("" VAR8 "" VAR8 "", VAR2, VAR3, VAR4);
        break;
    }
}