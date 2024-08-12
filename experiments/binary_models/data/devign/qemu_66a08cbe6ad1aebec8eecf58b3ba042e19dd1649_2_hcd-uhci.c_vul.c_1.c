static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5, VAR6, VAR7;
    uint32_t VAR8, VAR9 = 0;
    int VAR10, VAR11;
    UHCI_TD VAR12;
    UHCI_QH VAR13;
    QhDb VAR14;
    VAR3 = VAR2->VAR15 + ((VAR2->VAR16 & 0x3ff) << 2);
    FUN2(&VAR2->VAR17, VAR3, &VAR4, 4);
    FUN3(&VAR4);
    VAR7 = 0;
    VAR8 = 0;
    FUN4(&VAR14);
    for (VAR10 = VAR18; FUN5(VAR4) && VAR10; VAR10--)
    {
        if (VAR2->VAR19 >= VAR2->VAR20)
        {
            FUN6();
            break;
        }
        if (FUN7(VAR4))
        {
            FUN8(VAR4 & ~0xf);
            if (FUN9(&VAR14, VAR4))
            {
                if (VAR9 == 0)
                {
                    FUN10();
                    break;
                }
                else
                {
                    FUN11();
                    VAR9 = 0;
                    FUN4(&VAR14);
                    FUN9(&VAR14, VAR4);
                }
            }
            FUN2(&VAR2->VAR17, VAR4 & ~0xf, &VAR13, sizeof(VAR13));
            FUN3(&VAR13.VAR4);
            FUN3(&VAR13.VAR21);
            if (!FUN5(VAR13.VAR21))
            {
                VAR8 = 0;
                VAR4 = VAR13.VAR4;
            }
            else
            {
                VAR8 = VAR4;
                VAR4 = VAR13.VAR21;
            }
            continue;
        }
        FUN12(VAR2, &VAR12, VAR4);
        FUN13(VAR8 & ~0xf, VAR4 & ~0xf, VAR12.VAR22, VAR12.VAR23);
        VAR5 = VAR12.VAR22;
        VAR11 = FUN14(VAR2, NULL, &VAR12, VAR4, &VAR7);
        if (VAR5 != VAR12.VAR22)
        {
            VAR6 = FUN15(VAR12.VAR22);
            FUN16(&VAR2->VAR17, (VAR4 & ~0xf) + 4, &VAR6, sizeof(VAR6));
        }
        switch (VAR11)
        {
        case VAR24:
            goto VAR25;
        case VAR26:
        case VAR27:
            FUN17(VAR8 & ~0xf, VAR4 & ~0xf);
            VAR4 = VAR8 ? VAR13.VAR4 : VAR12.VAR4;
            continue;
        case VAR28:
            FUN18(VAR8 & ~0xf, VAR4 & ~0xf);
            VAR4 = VAR8 ? VAR13.VAR4 : VAR12.VAR4;
            continue;
        case VAR29:
            FUN19(VAR8 & ~0xf, VAR4 & ~0xf);
            VAR4 = VAR12.VAR4;
            VAR9++;
            VAR2->VAR19 += (VAR12.VAR22 & 0x7ff) + 1;
            if (VAR8)
            {
                VAR13.VAR21 = VAR4;
                VAR6 = FUN15(VAR13.VAR21);
                FUN16(&VAR2->VAR17, (VAR8 & ~0xf) + 4, &VAR6, sizeof(VAR6));
                if (!FUN20(VAR4))
                {
                    VAR8 = 0;
                    VAR4 = VAR13.VAR4;
                }
            }
            break;
        default:
            assert(!"");
        }
    }
VAR25:
    VAR2->VAR30 |= VAR7;
}