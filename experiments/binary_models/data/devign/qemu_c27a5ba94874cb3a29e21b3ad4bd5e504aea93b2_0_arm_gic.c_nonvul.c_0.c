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
            VAR6->VAR10 = (VAR3 & 1);
            FUN3("", VAR6->VAR10 ? "" : "");
        }
        else if (VAR2 < 4)
        {
        }
        else if (VAR2 >= 0x80)
        {
            if (!(VAR6->VAR11 && !VAR4.VAR12) && FUN4(VAR6))
            {
                VAR7 = (VAR2 - 0x80) * 8 + VAR13;
                if (VAR7 >= VAR6->VAR14)
                {
                    goto VAR15;
                }
                for (VAR8 = 0; VAR8 < 8; VAR8++)
                {
                    int VAR16 = (VAR7 < VAR17) ? (1 << VAR9) : VAR18;
                    if (VAR3 & (1 << VAR8))
                    {
                        FUN5(VAR7 + VAR8, VAR16);
                    }
                    else
                    {
                        FUN6(VAR7 + VAR8, VAR16);
                    }
                }
            }
        }
        else
        {
            goto VAR15;
        }
    }
    else if (VAR2 < 0x180)
    {
        VAR7 = (VAR2 - 0x100) * 8 + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        if (VAR7 < VAR19)
        {
            VAR3 = 0xff;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                int VAR20 = (VAR7 < VAR17) ? (1 << VAR9) : FUN7(VAR7 + VAR8);
                int VAR16 = (VAR7 < VAR17) ? (1 << VAR9) : VAR18;
                if (!FUN8(VAR7 + VAR8, VAR16))
                {
                    FUN3("", VAR7 + VAR8);
                }
                FUN9(VAR7 + VAR8, VAR16);
                if (FUN10(VAR7 + VAR8, VAR20) && !FUN11(VAR7 + VAR8))
                {
                    FUN3("", VAR7 + VAR8, VAR20);
                    FUN12(VAR7 + VAR8, VAR20);
                }
            }
        }
    }
    else if (VAR2 < 0x200)
    {
        VAR7 = (VAR2 - 0x180) * 8 + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        if (VAR7 < VAR19)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                int VAR16 = (VAR7 < VAR17) ? (1 << VAR9) : VAR18;
                if (FUN8(VAR7 + VAR8, VAR16))
                {
                    FUN3("", VAR7 + VAR8);
                }
                FUN13(VAR7 + VAR8, VAR16);
            }
        }
    }
    else if (VAR2 < 0x280)
    {
        VAR7 = (VAR2 - 0x200) * 8 + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        if (VAR7 < VAR19)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                FUN12(VAR7 + VAR8, FUN7(VAR7 + VAR8));
            }
        }
    }
    else if (VAR2 < 0x300)
    {
        VAR7 = (VAR2 - 0x280) * 8 + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        if (VAR7 < VAR19)
        {
            VAR3 = 0;
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            if (VAR3 & (1 << VAR8))
            {
                FUN14(VAR7 + VAR8, VAR18);
            }
        }
    }
    else if (VAR2 < 0x400)
    {
        goto VAR15;
    }
    else if (VAR2 < 0x800)
    {
        VAR7 = (VAR2 - 0x400) + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        FUN15(VAR6, VAR9, VAR7, VAR3);
    }
    else if (VAR2 < 0xc00)
    {
        if (VAR6->VAR21 != 1 || VAR6->VAR22 == VAR23)
        {
            VAR7 = (VAR2 - 0x800) + VAR13;
            if (VAR7 >= VAR6->VAR14)
            {
                goto VAR15;
            }
            if (VAR7 < 29)
            {
                VAR3 = 0;
            }
            else if (VAR7 < VAR17)
            {
                VAR3 = VAR18;
            }
            VAR6->VAR24[VAR7] = VAR3 & VAR18;
        }
    }
    else if (VAR2 < 0xf00)
    {
        VAR7 = (VAR2 - 0xc00) * 4 + VAR13;
        if (VAR7 >= VAR6->VAR14)
            goto VAR15;
        if (VAR7 < VAR19)
            VAR3 |= 0xaa;
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (VAR6->VAR22 == VAR23 || VAR6->VAR22 == VAR25)
            {
                if (VAR3 & (1 << (VAR8 * 2)))
                {
                    FUN16(VAR7 + VAR8);
                }
                else
                {
                    FUN17(VAR7 + VAR8);
                }
            }
            if (VAR3 & (2 << (VAR8 * 2)))
            {
                FUN18(VAR7 + VAR8);
            }
            else
            {
                FUN19(VAR7 + VAR8);
            }
        }
    }
    else if (VAR2 < 0xf10)
    {
        goto VAR15;
    }
    else if (VAR2 < 0xf20)
    {
        if (VAR6->VAR22 == VAR23 || VAR6->VAR22 == VAR25)
        {
            goto VAR15;
        }
        VAR7 = (VAR2 - 0xf10);
        VAR6->VAR26[VAR7][VAR9] &= ~VAR3;
        if (VAR6->VAR26[VAR7][VAR9] == 0)
        {
            FUN14(VAR7, 1 << VAR9);
        }
    }
    else if (VAR2 < 0xf30)
    {
        if (VAR6->VAR22 == VAR23 || VAR6->VAR22 == VAR25)
        {
            goto VAR15;
        }
        VAR7 = (VAR2 - 0xf20);
        FUN12(VAR7, 1 << VAR9);
        VAR6->VAR26[VAR7][VAR9] |= VAR3;
    }
    else
    {
        goto VAR15;
    }
    FUN20(VAR6);
    return;
VAR15:
    FUN21(VAR27, "", (int)VAR2);
}