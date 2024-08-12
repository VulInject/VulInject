static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR4 *VAR6 = VAR5->VAR7;
    uint32_t VAR8;
    int VAR9, VAR10;
    VAR8 = VAR3 & 7;
    VAR10 = 0;
    switch (VAR8)
    {
    case 0:
        VAR9 = 0xff;
        break;
    case 1:
        if ((!VAR5[0].VAR11 && !VAR5[1].VAR11) || (VAR6 != VAR5 && !VAR6->VAR11))
            VAR9 = 0;
        else if (!VAR10)
            VAR9 = VAR6->VAR12;
        else
            VAR9 = VAR6->VAR13;
        break;
    case 2:
        if (!VAR5[0].VAR11 && !VAR5[1].VAR11)
            VAR9 = 0;
        else if (!VAR10)
            VAR9 = VAR6->VAR14 & 0xff;
        else
            VAR9 = VAR6->VAR15;
        break;
    case 3:
        if (!VAR5[0].VAR11 && !VAR5[1].VAR11)
            VAR9 = 0;
        else if (!VAR10)
            VAR9 = VAR6->VAR16;
        else
            VAR9 = VAR6->VAR17;
        break;
    case 4:
        if (!VAR5[0].VAR11 && !VAR5[1].VAR11)
            VAR9 = 0;
        else if (!VAR10)
            VAR9 = VAR6->VAR18;
        else
            VAR9 = VAR6->VAR19;
        break;
    case 5:
        if (!VAR5[0].VAR11 && !VAR5[1].VAR11)
            VAR9 = 0;
        else if (!VAR10)
            VAR9 = VAR6->VAR20;
        else
            VAR9 = VAR6->VAR21;
        break;
    case 6:
        if (!VAR5[0].VAR11 && !VAR5[1].VAR11)
            VAR9 = 0;
        else
            VAR9 = VAR6->VAR22;
        break;
    default:
    case 7:
        if ((!VAR5[0].VAR11 && !VAR5[1].VAR11) || (VAR6 != VAR5 && !VAR6->VAR11))
            VAR9 = 0;
        else
            VAR9 = VAR6->VAR23;
        FUN2(VAR6->VAR24);
        break;
    }
    FUN3("", VAR3, VAR9);
    return VAR9;
}