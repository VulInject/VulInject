static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = -1;
    int VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++)
    {
        VAR3 = (VAR3 << 8) + VAR2->VAR11[VAR9];
        if (VAR3 & 0xfffffe00)
            continue;
        if (VAR3 < 2)
            continue;
        if (VAR3 == VAR12)
            VAR6++;
        else if (VAR3 == VAR13)
            VAR7++;
        else if (VAR3 >= 0x100 && VAR3 < 0x120)
            VAR4++;
        else if (VAR3 >= 0x120 && VAR3 < 0x130)
            VAR5++;
        else if (!(0x1AF < VAR3 && VAR3 < 0x1B7) && !(0x1B9 < VAR3 && VAR3 < 0x1C4))
            VAR8++;
    }
    if (VAR6 >= VAR7 && VAR6 >= VAR5 && VAR4 >= VAR5 && VAR5 > 0 && VAR8 == 0)
        return VAR6 + VAR4 > 4 ? VAR14 : VAR14 / 2;
    return 0;
}