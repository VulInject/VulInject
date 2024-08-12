static void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    uint32_t VAR7 = 0;
    uint32_t VAR8 = 0;
    switch (VAR2->VAR9[VAR3])
    {
    case 0x80000005:
    case 0x80000006:
        VAR7 = VAR2->VAR10[VAR3];
        VAR8 = VAR2->VAR11[VAR3];
        break;
    case 1:
        VAR8 = (VAR2->VAR10[VAR3] + 511) / 512;
        break;
    case 2:
        break;
    }
    if (VAR7 > *VAR5)
    {
        *VAR5 = VAR7;
    }
    if (VAR8 > *VAR6)
    {
        *VAR6 = VAR8;
    }
}