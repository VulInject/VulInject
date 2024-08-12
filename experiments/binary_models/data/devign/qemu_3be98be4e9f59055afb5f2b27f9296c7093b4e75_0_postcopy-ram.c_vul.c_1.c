static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct uffd_msg VAR4;
    int VAR5;
    VAR6 *VAR7 = NULL;
    VAR6 *VAR8 = NULL;
    FUN2();
    FUN3(&VAR3->VAR9);
    while (true)
    {
        ram_addr_t VAR10;
        struct pollfd VAR11[2];
        VAR11[0].VAR12 = VAR3->VAR13;
        VAR11[0].VAR14 = VAR15;
        VAR11[0].VAR16 = 0;
        VAR11[1].VAR12 = VAR3->VAR17;
        VAR11[1].VAR14 = VAR15;
        VAR11[1].VAR16 = 0;
        if (FUN4(VAR11, 2, -1) == -1)
        {
            FUN5("", VAR18, strerror(VAR19));
            break;
        }
        if (VAR11[1].VAR16)
        {
            FUN6();
            break;
        }
        VAR5 = read(VAR3->VAR13, &VAR4, sizeof(VAR4));
        if (VAR5 != sizeof(VAR4))
        {
            if (VAR19 == VAR20)
            {
                continue;
            }
            if (VAR5 < 0)
            {
                FUN5("", VAR18, strerror(VAR19));
                break;
            }
            else
            {
                FUN5("", VAR18, VAR5, sizeof(VAR4));
                break;
            }
        }
        if (VAR4.VAR21 != VAR22)
        {
            FUN5("", VAR18, VAR4.VAR21);
            continue;
        }
        VAR7 = FUN7((void *)(VAR23)VAR4.VAR24.VAR25.VAR26, true, &VAR10);
        if (!VAR7)
        {
            FUN5("" VAR27, (VAR28)VAR4.VAR24.VAR25.VAR26);
            break;
        }
        VAR10 &= ~(FUN8(VAR7) - 1);
        FUN9(VAR4.VAR24.VAR25.VAR26, FUN10(VAR7), VAR10);
        if (VAR7 != VAR8)
        {
            VAR8 = VAR7;
            FUN11(VAR3, FUN10(VAR7), VAR10, FUN8(VAR7));
        }
        else
        {
            FUN11(VAR3, NULL, VAR10, FUN8(VAR7));
        }
    }
    FUN12();
    return NULL;
}