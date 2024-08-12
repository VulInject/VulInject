static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3, MemTxAttrs VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    int VAR8;
    int VAR9;
    VAR9 = FUN2(VAR6);
    if (VAR2 < 0x100)
    {
        if (VAR2 == 0)
        {
            if (VAR6->VAR10 && !VAR4.VAR11)
            {
                VAR6->VAR12 = FUN3(VAR6->VAR12, 1, 1, VAR3);
            }
            else if (FUN4(VAR6))
            {
                VAR6->VAR12 = VAR3 & (VAR13 | VAR14);
            }
            else
            {
                VAR6->VAR12 = VAR3 & VAR13;
            }
            FUN5("", VAR6->VAR12 & VAR13 ? "" : "", VAR6->VAR12 & VAR14 ? "" : "");
        }
        else if (VAR2 < 4)
        {
        }
        else if (VAR2 >= 0x80)
        {
            if (!(VAR6->VAR10 && !VAR4.VAR11) && FUN4(VAR6))
            {
                VAR7 = (VAR2 - 0x80) * 8 + VAR15;
                if (VAR7 >= VAR6->VAR16)
                {
                    goto VAR17;
                }
                for (VAR8 = 0; VAR8 < 8; VAR8++)
                {
                    int VAR18 = (VAR7 < VAR19) ? (1 << VAR9) : VAR20;
                    if (VAR3 & (1 << VAR8))
                    {
                        FUN6(VAR7 + VAR8, VAR18);
                    }
                    else
                    {
                        FUN7(VAR7 + VAR8, VAR18);
                    }
                }
            }
        }
        else
        {
            goto VAR17;
        }
    }
    else if (VAR2 < 0x180)
    {
        VAR7 = (VAR2 - 0x100) * 8 + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        if (VAR7 < VAR21)
        {
            VAR3 = 0xff;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                int VAR22 = (VAR7 < VAR19) ? (1 << VAR9) : FUN8(VAR7 + VAR8);
                int VAR18 = (VAR7 < VAR19) ? (1 << VAR9) : VAR20;
                if (!FUN9(VAR7 + VAR8, VAR18))
                {
                    FUN5("", VAR7 + VAR8);
                }
                FUN10(VAR7 + VAR8, VAR18);
                if (FUN11(VAR7 + VAR8, VAR22) && !FUN12(VAR7 + VAR8))
                {
                    FUN5("", VAR7 + VAR8, VAR22);
                    FUN13(VAR7 + VAR8, VAR22);
                }
            }
        }
    }
    else if (VAR2 < 0x200)
    {
        VAR7 = (VAR2 - 0x180) * 8 + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        if (VAR7 < VAR21)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                int VAR18 = (VAR7 < VAR19) ? (1 << VAR9) : VAR20;
                if (FUN9(VAR7 + VAR8, VAR18))
                {
                    FUN5("", VAR7 + VAR8);
                    FUN14(VAR7 + VAR8);
                }
                FUN15(VAR7 + VAR8, VAR18);
            }
        }
    }
    else if (VAR2 < 0x280)
    {
        VAR7 = (VAR2 - 0x200) * 8 + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        if (VAR7 < VAR21)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                FUN13(VAR7 + VAR8, FUN8(VAR7 + VAR8));
            }
        }
    }
    else if (VAR2 < 0x300)
    {
        VAR7 = (VAR2 - 0x280) * 8 + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        if (VAR7 < VAR21)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                FUN16(VAR7 + VAR8, VAR20);
            }
        }
    }
    else if (VAR2 < 0x400)
    {
        goto VAR17;
    }
    else if (VAR2 < 0x800)
    {
        VAR7 = (VAR2 - 0x400) + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        FUN17(VAR6, VAR9, VAR7, VAR3, VAR4);
    }
    else if (VAR2 < 0xc00)
    {
        if (VAR6->VAR23 != 1 || VAR6->VAR24 == VAR25)
        {
            VAR7 = (VAR2 - 0x800) + VAR15;
            if (VAR7 >= VAR6->VAR16)
            {
                goto VAR17;
            }
            if (VAR7 < 29)
            {
                VAR3 = 0;
            }
            else if (VAR7 < VAR19)
            {
                VAR3 = VAR20;
            }
            VAR6->VAR26[VAR7] = VAR3 & VAR20;
        }
    }
    else if (VAR2 < 0xf00)
    {
        VAR7 = (VAR2 - 0xc00) * 4 + VAR15;
        if (VAR7 >= VAR6->VAR16)
            goto VAR17;
        if (VAR7 < VAR21)
            VAR3 |= 0xaa;
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (VAR6->VAR24 == VAR25 || VAR6->VAR24 == VAR27)
            {
                if (VAR3 & (1 << (VAR8 * 2)))
                {
                    FUN18(VAR7 + VAR8);
                }
                else
                {
                    FUN19(VAR7 + VAR8);
                }
            }
            if (VAR3 & (2 << (VAR8 * 2)))
            {
                FUN20(VAR7 + VAR8);
            }
            else
            {
                FUN21(VAR7 + VAR8);
            }
        }
    }
    else if (VAR2 < 0xf10)
    {
        goto VAR17;
    }
    else if (VAR2 < 0xf20)
    {
        if (VAR6->VAR24 == VAR25 || VAR6->VAR24 == VAR27)
        {
            goto VAR17;
        }
        VAR7 = (VAR2 - 0xf10);
        VAR6->VAR28[VAR7][VAR9] &= ~VAR3;
        if (VAR6->VAR28[VAR7][VAR9] == 0)
        {
            FUN16(VAR7, 1 << VAR9);
        }
    }
    else if (VAR2 < 0xf30)
    {
        if (VAR6->VAR24 == VAR25 || VAR6->VAR24 == VAR27)
        {
            goto VAR17;
        }
        VAR7 = (VAR2 - 0xf20);
        FUN13(VAR7, 1 << VAR9);
        VAR6->VAR28[VAR7][VAR9] |= VAR3;
    }
    else
    {
        goto VAR17;
    }
    FUN22(VAR6);
    return;
VAR17:
    FUN23(VAR29, "", (int)VAR2);