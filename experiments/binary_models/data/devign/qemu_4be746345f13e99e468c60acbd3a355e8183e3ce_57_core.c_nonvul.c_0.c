VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = FUN2(VAR5);
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
        if ((!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12) || (VAR7 != VAR5->VAR11 && !VAR7->VAR12))
        {
            VAR9 = 0;
        }
        else if (!VAR10)
        {
            VAR9 = VAR7->VAR13;
        }
        else
        {
            VAR9 = VAR7->VAR14;
        }
        break;
    case 2:
        if (!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12)
        {
            VAR9 = 0;
        }
        else if (!VAR10)
        {
            VAR9 = VAR7->VAR15 & 0xff;
        }
        else
        {
            VAR9 = VAR7->VAR16;
        }
        break;
    case 3:
        if (!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12)
        {
            VAR9 = 0;
        }
        else if (!VAR10)
        {
            VAR9 = VAR7->VAR17;
        }
        else
        {
            VAR9 = VAR7->VAR18;
        }
        break;
    case 4:
        if (!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12)
        {
            VAR9 = 0;
        }
        else if (!VAR10)
        {
            VAR9 = VAR7->VAR19;
        }
        else
        {
            VAR9 = VAR7->VAR20;
        }
        break;
    case 5:
        if (!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12)
        {
            VAR9 = 0;
        }
        else if (!VAR10)
        {
            VAR9 = VAR7->VAR21;
        }
        else
        {
            VAR9 = VAR7->VAR22;
        }
        break;
    case 6:
        if (!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12)
        {
            VAR9 = 0;
        }
        else
        {
            VAR9 = VAR7->VAR23;
        }
        break;
    default:
    case 7:
        if ((!VAR5->VAR11[0].VAR12 && !VAR5->VAR11[1].VAR12) || (VAR7 != VAR5->VAR11 && !VAR7->VAR12))
        {
            VAR9 = 0;
        }
        else
        {
            VAR9 = VAR7->VAR24;
        }
        FUN3(VAR5->VAR25);
        break;
    }
    FUN4("", VAR3, VAR9);
    return VAR9;
}