static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 = (VAR2 & 0xFFF) >> 4;
    switch (VAR2)
    {
    case 1 ... 7:
        FUN2(&VAR5->VAR6, VAR2, VAR3);
        break;
    case 8:
    case 22:
        FUN3(&VAR5->VAR6, 0, VAR3);
        break;
    default:
        break;
    }
}