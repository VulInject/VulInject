static void FUN1(VAR1 *VAR2)
{
    hwaddr VAR3 = 0;
    int VAR4 = FUN2(VAR2) - 1;
    int VAR5 = 0;
    int VAR6;
    VAR2->VAR7 = -1;
    if (!FUN3(VAR2))
    {
        VAR2->VAR8[0] &= ~0x0008;
        return;
    }
    VAR2->VAR9 = 1;
VAR10:
    if (FUN4(VAR2))
    {
        struct pcnet_TMD VAR11;
        FUN5(&VAR11, FUN6(VAR2, FUN7(VAR2)));
        FUN8("", FUN6(VAR2, FUN7(VAR2)));
        FUN9(&VAR11);
        if (FUN10(VAR11.VAR12, VAR13, VAR14))
        {
            VAR2->VAR7 = 0;
            VAR3 = FUN6(VAR2, FUN7(VAR2));
            if (FUN11(VAR2) != 1)
                VAR5 = FUN10(VAR11.VAR12, VAR13, VAR15);
        }
        if (VAR2->VAR16 == 0 && (!FUN12(VAR2) || (!FUN13(VAR2) && !FUN14(VAR2))))
        {
            FUN15(&VAR11.VAR17, VAR18, VAR19, 1);
            FUN15(&VAR11.VAR12, VAR13, VAR20, 1);
            FUN15(&VAR11.VAR12, VAR13, VAR21, 0);
            VAR2->VAR8[0] |= 0xa000;
            VAR2->VAR7 = -1;
            goto VAR22;
        }
        if (VAR2->VAR7 < 0)
        {
            goto VAR22;
        }
        VAR6 = 4096 - FUN10(VAR11.VAR23, VAR24, VAR25);
        if (VAR2->VAR7 + VAR6 > sizeof(VAR2->VAR26))
        {
            VAR2->VAR7 = -1;
            goto VAR22;
        }
        VAR2->FUN16(VAR2->VAR27, FUN6(VAR2, VAR11.VAR28), VAR2->VAR26 + VAR2->VAR7, VAR6, FUN17(VAR2));
        VAR2->VAR7 += VAR6;
        if (!FUN10(VAR11.VAR12, VAR13, VAR29))
        {
            goto VAR22;
        }
        FUN8("", VAR2->VAR7);
        if (FUN12(VAR2))
        {
            if (FUN11(VAR2) == 1)
                VAR5 = !FUN10(VAR11.VAR12, VAR13, VAR30);
            VAR2->VAR31 = VAR5 ? VAR32 : VAR33;
            FUN18(FUN19(VAR2->VAR34), VAR2->VAR26, VAR2->VAR7);
            VAR2->VAR31 = 0;
        }
        else
        {
            if (VAR2->VAR34)
            {
                FUN20(FUN19(VAR2->VAR34), VAR2->VAR26, VAR2->VAR7);
            }
        }
        VAR2->VAR8[0] &= ~0x0008;
        VAR2->VAR8[4] |= 0x0004;
        VAR2->VAR7 = -1;
    VAR22:
        FUN15(&VAR11.VAR12, VAR13, VAR21, 0);
        FUN21(&VAR11, FUN6(VAR2, FUN7(VAR2)));
        if (!FUN22(VAR2) || (FUN23(VAR2) && FUN10(VAR11.VAR12, VAR13, VAR35)))
            VAR2->VAR8[0] |= 0x0200;
        if (FUN24(VAR2) <= 1)
            FUN24(VAR2) = FUN2(VAR2);
        else
            FUN24(VAR2)
            --;
        if (VAR4--)
            goto VAR10;
    }
    else if (VAR2->VAR7 >= 0)
    {
        struct pcnet_TMD VAR11;
        FUN5(&VAR11, VAR3);
        FUN15(&VAR11.VAR17, VAR18, VAR36, 1);
        FUN15(&VAR11.VAR17, VAR18, VAR37, 1);
        FUN15(&VAR11.VAR12, VAR13, VAR20, 1);
        FUN15(&VAR11.VAR12, VAR13, VAR21, 0);
        FUN21(&VAR11, VAR3);
        VAR2->VAR8[0] |= 0x0200;
        if (!FUN25(VAR2))
        {
            VAR2->VAR8[0] &= ~0x0010;
        }
        else if (VAR4--)
            goto VAR10;
    }
    VAR2->VAR9 = 0;
}