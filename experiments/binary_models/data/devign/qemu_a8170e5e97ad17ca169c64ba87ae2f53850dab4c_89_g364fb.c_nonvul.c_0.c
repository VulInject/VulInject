static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    if (VAR3 >= VAR8 && VAR3 < VAR8 + 0x1000)
    {
        int VAR9 = (VAR3 - VAR8) >> 3;
        VAR7 = VAR6->VAR10[VAR9];
    }
    else if (VAR3 >= VAR11 && VAR3 < VAR11 + 0x18)
    {
        int VAR9 = (VAR3 - VAR11) >> 3;
        VAR7 = ((VAR12)VAR6->VAR13[VAR9][0] << 16);
        VAR7 |= ((VAR12)VAR6->VAR13[VAR9][1] << 8);
        VAR7 |= ((VAR12)VAR6->VAR13[VAR9][2] << 0);
    }
    else
    {
        switch (VAR3)
        {
        case VAR14:
            VAR7 = VAR6->VAR15 / 4;
            break;
        case VAR16:
            VAR7 = VAR6->VAR17 * 2;
            break;
        case VAR18:
            VAR7 = VAR6->VAR19;
            break;
        default:
        {
            FUN2("" VAR20 "", VAR3);
            VAR7 = 0;
            break;
        }
        }
    }
    FUN3(VAR3, VAR7);
    return VAR7;
}