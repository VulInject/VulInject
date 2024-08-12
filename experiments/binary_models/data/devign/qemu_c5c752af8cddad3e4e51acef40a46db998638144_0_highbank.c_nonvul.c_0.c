static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    uint32_t VAR5;
    VAR6 *VAR7 = VAR2;
    if (VAR3 / 4 >= VAR8)
    {
        FUN2(VAR9, "" VAR10 "", VAR3);
        return 0;
    }
    VAR5 = VAR7[VAR3 / 4];
    if ((VAR3 == 0x100) || (VAR3 == 0x108) || (VAR3 == 0x10C))
    {
        VAR5 |= 0x30000000;
    }
    return VAR5;
}