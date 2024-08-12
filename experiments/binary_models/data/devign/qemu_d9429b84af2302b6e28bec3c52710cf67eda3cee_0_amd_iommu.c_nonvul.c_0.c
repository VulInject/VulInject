static void FUN1(hwaddr VAR1, unsigned VAR2)
{
    uint8_t VAR3 = (VAR1 & ~0x2000) / 8;
    if ((VAR1 & 0x2000))
    {
        VAR3 = VAR3 >= VAR4 ? VAR4 : VAR3;
        FUN2(VAR5[VAR3], VAR1, VAR2, VAR1 & ~0x07);
    }
    else
    {
        VAR3 = VAR3 >= VAR6 ? VAR6 : VAR3;
        FUN2(VAR7[VAR3], VAR1, VAR2, VAR1 & ~0x07);
    }
}