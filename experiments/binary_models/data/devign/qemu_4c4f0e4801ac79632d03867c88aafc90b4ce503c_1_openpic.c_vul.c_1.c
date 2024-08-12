static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint64_t VAR7 = 0;
    int VAR8, VAR9;
    FUN2("" VAR10 "", VAR11, VAR3);
    if (VAR3 & 0xF)
    {
        return -1;
    }
    VAR9 = VAR3 >> 4;
    switch (VAR3)
    {
    case 0x00:
    case 0x10:
    case 0x20:
    case 0x30:
    case 0x40:
    case 0x50:
    case 0x60:
    case 0x70:
        VAR7 = VAR6->VAR12[VAR9].VAR13;
        VAR6->VAR12[VAR9].VAR13 = 0;
        break;
    case 0x120:
        for (VAR8 = 0; VAR8 < VAR14; VAR8++)
        {
            VAR7 |= (VAR6->VAR12[VAR8].VAR13 ? 1 : 0) << VAR8;
        }
        break;
    }
    return VAR7;
}