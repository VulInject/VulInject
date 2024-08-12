static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    uint8_t VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR10;
    int VAR11 = VAR4->VAR11;
    int VAR12;
    switch (VAR4->VAR13)
    {
    case VAR14:
        if (VAR8 != 2)
            goto VAR15;
        FUN2(VAR6->VAR16, VAR10, VAR11);
        break;
    case VAR17:
        if (VAR8 != 1)
            goto VAR15;
        VAR12 = VAR18 - VAR6->VAR19;
        if (VAR11 <= 2)
        {
            VAR7 = VAR20;
            break;
        }
        *VAR10++ = FUN3(VAR6) | 1;
        if (VAR6->VAR21 && VAR6->VAR21 & VAR22)
        {
            VAR6->VAR21 &= ~VAR22;
            *VAR10 = VAR22;
            VAR7 = 2;
            break;
        }
        else
        {
            *VAR10++ = 0;
        }
        VAR11 -= 2;
        if (VAR11 > VAR6->VAR23)
            VAR11 = VAR6->VAR23;
        if (!VAR11)
        {
            VAR7 = VAR20;
            break;
        }
        if (VAR12 > VAR11)
            VAR12 = VAR11;
        memcpy(VAR10, VAR6->VAR24 + VAR6->VAR19, VAR12);
        if (VAR11 > VAR12)
            memcpy(VAR10 + VAR12, VAR6->VAR24, VAR11 - VAR12);
        VAR6->VAR23 -= VAR11;
        VAR6->VAR19 = (VAR6->VAR19 + VAR11) % VAR18;
        VAR7 = VAR11 + 2;
        break;
    default:
        FUN4("");
    VAR15:
        VAR7 = VAR25;
        break;
    }
    return VAR7;
}