static VAR1 FUN1(void *VAR2, hwaddr VAR3, MemTxAttrs VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    VAR10 = FUN2(VAR6);
    VAR11 = 1 << VAR10;
    if (VAR3 < 0x100)
    {
        if (VAR3 == 0)
        {
            if (VAR6->VAR13 && !VAR4.VAR14)
            {
                return FUN3(VAR6->VAR15, 1, 1);
            }
            else
            {
                return VAR6->VAR15;
            }
        }
        if (VAR3 == 4)
            return ((VAR6->VAR16 / 32) - 1) | ((FUN4(VAR6) - 1) << 5) | (VAR6->VAR13 << 10);
        if (VAR3 < 0x08)
            return 0;
        if (VAR3 >= 0x80)
        {
            VAR7 = 0;
            if (!(VAR6->VAR13 && !VAR4.VAR14) && FUN5(VAR6))
            {
                VAR8 = (VAR3 - 0x080) * 8 + VAR17;
                if (VAR8 >= VAR6->VAR16)
                {
                    goto VAR18;
                }
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                {
                    if (FUN6(VAR8 + VAR9, VAR11))
                    {
                        VAR7 |= (1 << VAR9);
                    }
                }
            }
            return VAR7;
        }
        goto VAR18;
    }
    else if (VAR3 < 0x200)
    {
        if (VAR3 < 0x180)
            VAR8 = (VAR3 - 0x100) * 8;
        else
            VAR8 = (VAR3 - 0x180) * 8;
        VAR8 += VAR17;
        if (VAR8 >= VAR6->VAR16)
            goto VAR18;
        VAR7 = 0;
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            if (FUN7(VAR8 + VAR9, VAR11))
            {
                VAR7 |= (1 << VAR9);
            }
        }
    }
    else if (VAR3 < 0x300)
    {
        if (VAR3 < 0x280)
            VAR8 = (VAR3 - 0x200) * 8;
        else
            VAR8 = (VAR3 - 0x280) * 8;
        VAR8 += VAR17;
        if (VAR8 >= VAR6->VAR16)
            goto VAR18;
        VAR7 = 0;
        VAR12 = (VAR8 < VAR19) ? VAR11 : VAR20;
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            if (FUN8(VAR6, VAR8 + VAR9, VAR12))
            {
                VAR7 |= (1 << VAR9);
            }
        }
    }
    else if (VAR3 < 0x400)
    {
        VAR8 = (VAR3 - 0x300) * 8 + VAR17;
        if (VAR8 >= VAR6->VAR16)
            goto VAR18;
        VAR7 = 0;
        VAR12 = (VAR8 < VAR19) ? VAR11 : VAR20;
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            if (FUN9(VAR8 + VAR9, VAR12))
            {
                VAR7 |= (1 << VAR9);
            }
        }
    }
    else if (VAR3 < 0x800)
    {
        VAR8 = (VAR3 - 0x400) + VAR17;
        if (VAR8 >= VAR6->VAR16)
            goto VAR18;
        VAR7 = FUN10(VAR8, VAR10);
    }
    else if (VAR3 < 0xc00)
    {
        if (VAR6->VAR21 == 1 && VAR6->VAR22 != VAR23)
        {
            VAR7 = 0;
        }
        else
        {
            VAR8 = (VAR3 - 0x800) + VAR17;
            if (VAR8 >= VAR6->VAR16)
            {
                goto VAR18;
            }
            if (VAR8 >= 29 && VAR8 <= 31)
            {
                VAR7 = VAR11;
            }
            else
            {
                VAR7 = FUN11(VAR8);
            }
        }
    }
    else if (VAR3 < 0xf00)
    {
        VAR8 = (VAR3 - 0xc00) * 4 + VAR17;
        if (VAR8 >= VAR6->VAR16)
            goto VAR18;
        VAR7 = 0;
        for (VAR9 = 0; VAR9 < 4; VAR9++)
        {
            if (FUN12(VAR8 + VAR9))
                VAR7 |= (1 << (VAR9 * 2));
            if (FUN13(VAR8 + VAR9))
                VAR7 |= (2 << (VAR9 * 2));
        }
    }
    else if (VAR3 < 0xf10)
    {
        goto VAR18;
    }
    else if (VAR3 < 0xf30)
    {
        if (VAR6->VAR22 == VAR23 || VAR6->VAR22 == VAR24)
        {
            goto VAR18;
        }
        if (VAR3 < 0xf20)
        {
            VAR8 = (VAR3 - 0xf10);
        }
        else
        {
            VAR8 = (VAR3 - 0xf20);
        }
        VAR7 = VAR6->VAR25[VAR8][VAR10];
    }
    else if (VAR3 < 0xfe0)
    {
        goto VAR18;
    }
    else
    {
        if (VAR3 & 3)
        {
            VAR7 = 0;
        }
        else
        {
            VAR7 = VAR26[(VAR3 - 0xfe0) >> 2];
        }
    }
    return VAR7;
VAR18:
    FUN14(VAR27, "", (int)VAR3);
    return 0;
}