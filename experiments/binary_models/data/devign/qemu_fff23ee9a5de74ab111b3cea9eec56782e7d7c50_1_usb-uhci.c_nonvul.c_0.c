static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5, VAR6, VAR7;
    uint32_t VAR8;
    int VAR9, VAR10;
    UHCI_TD VAR11;
    UHCI_QH VAR12;
    QhDb VAR13;
    VAR3 = VAR2->VAR14 + ((VAR2->VAR15 & 0x3ff) << 2);
    FUN2("", VAR2->VAR15, VAR3);
    FUN3(&VAR2->VAR16, VAR3, (VAR17 *)&VAR4, 4);
    FUN4(&VAR4);
    VAR7 = 0;
    VAR8 = 0;
    FUN5(&VAR13);
    for (VAR9 = VAR18; FUN6(VAR4) && VAR9; VAR9--)
    {
        if (FUN7(VAR4))
        {
            if (FUN8(&VAR13, VAR4))
            {
                FUN2("", VAR4);
                break;
            }
            FUN3(&VAR2->VAR16, VAR4 & ~0xf, (VAR17 *)&VAR12, sizeof(VAR12));
            FUN4(&VAR12.VAR4);
            FUN4(&VAR12.VAR19);
            FUN2("", VAR4, VAR12.VAR4, VAR12.VAR19);
            if (!FUN6(VAR12.VAR19))
            {
                VAR8 = 0;
                VAR4 = VAR12.VAR4;
            }
            else
            {
                VAR8 = VAR4;
                VAR4 = VAR12.VAR19;
            }
            continue;
        }
        FUN3(&VAR2->VAR16, VAR4 & ~0xf, (VAR17 *)&VAR11, sizeof(VAR11));
        FUN4(&VAR11.VAR4);
        FUN4(&VAR11.VAR20);
        FUN4(&VAR11.VAR21);
        FUN4(&VAR11.VAR22);
        FUN2("", VAR4, VAR11.VAR4, VAR11.VAR20, VAR11.VAR21, VAR8);
        VAR5 = VAR11.VAR20;
        VAR10 = FUN9(VAR2, VAR4, &VAR11, &VAR7);
        if (VAR5 != VAR11.VAR20)
        {
            VAR6 = FUN10(VAR11.VAR20);
            FUN11(&VAR2->VAR16, (VAR4 & ~0xf) + 4, (const VAR17 *)&VAR6, sizeof(VAR6));
        }
        if (VAR10 < 0)
        {
            break;
        }
        if (VAR10 == 2 || VAR10 == 1)
        {
            FUN2("", VAR4, VAR10 == 2 ? "" : "", VAR11.VAR4, VAR11.VAR20, VAR11.VAR21, VAR8);
            VAR4 = VAR8 ? VAR12.VAR4 : VAR11.VAR4;
            continue;
        }
        FUN2("", VAR4, VAR11.VAR4, VAR11.VAR20, VAR11.VAR21, VAR8);
        VAR4 = VAR11.VAR4;
        if (VAR8)
        {
            VAR12.VAR19 = VAR4;
            VAR6 = FUN10(VAR12.VAR19);
            FUN11(&VAR2->VAR16, (VAR8 & ~0xf) + 4, (const VAR17 *)&VAR6, sizeof(VAR6));
            if (!FUN12(VAR4))
            {
                FUN2("", VAR8, VAR12.VAR4, VAR12.VAR19);
                VAR8 = 0;
                VAR4 = VAR12.VAR4;
            }
        }
    }
    VAR2->VAR23 |= VAR7;
}