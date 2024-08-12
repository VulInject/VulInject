static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (VAR3 >= 0xfe0 && VAR3 < 0x1000)
    {
        return VAR7[VAR6->VAR8][(VAR3 - 0xfe0) >> 2];
    }
    if (VAR3 >= 0x200 && VAR3 < 0x400)
    {
        return VAR6->VAR9[(VAR3 - 0x200) >> 2];
    }
    switch (VAR3 >> 2)
    {
    case 0:
        return VAR6->VAR10[0];
    case 1:
        return VAR6->VAR10[1];
    case 2:
        return VAR6->VAR10[2];
    case 3:
        return VAR6->VAR10[3];
    case 4:
        return VAR6->VAR11;
    case 5:
        return VAR6->VAR12;
    case 6:
        if (VAR6->VAR8 != VAR13)
        {
            return VAR6->VAR14;
        }
        return VAR6->VAR15;
    case 7:
        if (VAR6->VAR8 != VAR13)
        {
            return VAR6->VAR15;
        }
        return VAR6->VAR14;
    case 8:
        return VAR6->VAR16;
    case 9:
        return VAR6->VAR16 & VAR6->VAR15;
    case 11:
        return VAR6->VAR11;
    case 12:
        return VAR6->VAR12;
    default:
        FUN2(VAR17, "", (int)VAR3);
        return 0;
    }
}