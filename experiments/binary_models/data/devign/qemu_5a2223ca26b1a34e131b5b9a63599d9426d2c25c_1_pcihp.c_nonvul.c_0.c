static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = 0;
    int VAR8 = VAR6->VAR9;
    if (VAR8 < 0 || VAR8 > VAR10)
    {
        return 0;
    }
    switch (VAR3)
    {
    case VAR11 - VAR12:
        VAR7 = VAR6->VAR13[VAR8].VAR14;
        VAR6->VAR13[VAR8].VAR14 = 0;
        FUN2("" VAR15 "", VAR7);
        break;
    case VAR16 - VAR12:
        VAR7 = VAR6->VAR13[VAR8].VAR17;
        FUN2("" VAR15 "", VAR7);
        break;
    case VAR18 - VAR12:
        FUN2("" VAR15 "", VAR7);
        break;
    case VAR19 - VAR12:
        VAR7 = VAR6->VAR13[VAR8].VAR20;
        FUN2("" VAR15 "", VAR7);
        break;
    case VAR21 - VAR12:
        VAR7 = VAR6->VAR9;
        FUN2("" VAR15 "", VAR7);
    default:
        break;
    }
    return VAR7;
}