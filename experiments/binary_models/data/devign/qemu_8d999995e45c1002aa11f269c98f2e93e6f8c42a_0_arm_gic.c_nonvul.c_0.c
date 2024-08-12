static VAR1 FUN1(void *VAR2, hwaddr VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    uint32_t VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    VAR9 = FUN2(VAR5);
    VAR10 = 1 << VAR9;
    if (VAR3 < 0x100)
    {
        if (VAR3 == 0)
            return VAR5->VAR12;
        if (VAR3 == 4)
            return ((VAR5->VAR13 / 32) - 1) | ((FUN3(VAR5) - 1) << 5);
        if (VAR3 < 0x08)
            return 0;
        if (VAR3 >= 0x80)
        {
            return 0;
        }
        goto VAR14;
    }
    else if (VAR3 < 0x200)
    {
        if (VAR3 < 0x180)
            VAR7 = (VAR3 - 0x100) * 8;
        else
            VAR7 = (VAR3 - 0x180) * 8;
        VAR7 += VAR15;
        if (VAR7 >= VAR5->VAR13)
            goto VAR14;
        VAR6 = 0;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (FUN4(VAR7 + VAR8, VAR10))
            {
                VAR6 |= (1 << VAR8);
            }
        }
    }
    else if (VAR3 < 0x300)
    {
        if (VAR3 < 0x280)
            VAR7 = (VAR3 - 0x200) * 8;
        else
            VAR7 = (VAR3 - 0x280) * 8;
        VAR7 += VAR15;
        if (VAR7 >= VAR5->VAR13)
            goto VAR14;
        VAR6 = 0;
        VAR11 = (VAR7 < VAR16) ? VAR10 : VAR17;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (FUN5(VAR5, VAR7 + VAR8, VAR11))
            {
                VAR6 |= (1 << VAR8);
            }
        }
    }
    else if (VAR3 < 0x400)
    {
        VAR7 = (VAR3 - 0x300) * 8 + VAR15;
        if (VAR7 >= VAR5->VAR13)
            goto VAR14;
        VAR6 = 0;
        VAR11 = (VAR7 < VAR16) ? VAR10 : VAR17;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (FUN6(VAR7 + VAR8, VAR11))
            {
                VAR6 |= (1 << VAR8);
            }
        }
    }
    else if (VAR3 < 0x800)
    {
        VAR7 = (VAR3 - 0x400) + VAR15;
        if (VAR7 >= VAR5->VAR13)
            goto VAR14;
        VAR6 = FUN7(VAR7, VAR9);
    }
    else if (VAR3 < 0xc00)
    {
        if (VAR5->VAR18 == 1 && VAR5->VAR19 != VAR20)
        {
            VAR6 = 0;
        }
        else
        {
            VAR7 = (VAR3 - 0x800) + VAR15;
            if (VAR7 >= VAR5->VAR13)
            {
                goto VAR14;
            }
            if (VAR7 >= 29 && VAR7 <= 31)
            {
                VAR6 = VAR10;
            }
            else
            {
                VAR6 = FUN8(VAR7);
            }
        }
    }
    else if (VAR3 < 0xf00)
    {
        VAR7 = (VAR3 - 0xc00) * 2 + VAR15;
        if (VAR7 >= VAR5->VAR13)
            goto VAR14;
        VAR6 = 0;
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (FUN9(VAR7 + VAR8))
                VAR6 |= (1 << (VAR8 * 2));
            if (FUN10(VAR7 + VAR8))
                VAR6 |= (2 << (VAR8 * 2));
        }
    }
    else if (VAR3 < 0xfe0)
    {
        goto VAR14;
    }
    else
    {
        if (VAR3 & 3)
        {
            VAR6 = 0;
        }
        else
        {
            VAR6 = VAR21[(VAR3 - 0xfe0) >> 2];
        }
    }
    return VAR6;
VAR14:
    FUN11(VAR22, "", (int)VAR3);
    return 0;
}