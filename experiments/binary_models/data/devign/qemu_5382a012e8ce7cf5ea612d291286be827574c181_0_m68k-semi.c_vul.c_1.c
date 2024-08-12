void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    void *VAR5;
    void *VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    VAR4 = VAR2->VAR9[1];
    switch (VAR3)
    {
    case VAR10:
        FUN2(VAR2, VAR2->VAR9[0]);
        FUN3(VAR2->VAR9[0]);
    case VAR11:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), (int)FUN6(1), FUN6(2), FUN6(3));
            return;
        }
        else
        {
            if (!(VAR5 = FUN7(FUN6(0))))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = open(VAR5, FUN8(FUN6(2)), FUN6(3));
                FUN9(VAR5, FUN6(0), 0);
            }
        }
        break;
    case VAR13:
    {
        int VAR14 = FUN6(0);
        if (VAR14 > 2)
        {
            if (FUN4())
            {
                FUN5(VAR12, "", FUN6(0));
                return;
            }
            else
            {
                VAR8 = close(VAR14);
            }
        }
        else
        {
            VAR8 = 0;
        }
        break;
    }
    case VAR15:
        VAR7 = FUN6(2);
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), FUN6(1), VAR7);
            return;
        }
        else
        {
            if (!(VAR5 = FUN10(VAR16, FUN6(1), VAR7, 0)))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = read(FUN6(0), VAR5, VAR7);
                FUN9(VAR5, FUN6(1), VAR7);
            }
        }
        break;
    case VAR17:
        VAR7 = FUN6(2);
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), FUN6(1), VAR7);
            return;
        }
        else
        {
            if (!(VAR5 = FUN10(VAR18, FUN6(1), VAR7, 1)))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = write(FUN6(0), VAR5, VAR7);
                FUN9(VAR5, FUN6(0), 0);
            }
        }
        break;
    case VAR19:
    {
        uint64_t VAR20;
        VAR20 = (VAR21)FUN6(2) | ((VAR22)FUN6(1) << 32);
        if (FUN4())
        {
            VAR23 = 1;
            FUN5(VAR12, "", FUN6(0), VAR20, FUN6(3));
        }
        else
        {
            VAR20 = FUN11(FUN6(0), VAR20, FUN6(3));
            FUN12(VAR20 >> 32, VAR4);
            FUN12(VAR20, VAR4 + 4);
            FUN12(VAR24, VAR4 + 8);
        }
        return;
    }
    case VAR25:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), (int)FUN6(1), FUN6(2), (int)FUN6(3));
            return;
        }
        else
        {
            VAR5 = FUN7(FUN6(0));
            VAR6 = FUN7(FUN6(2));
            if (!VAR5 || !VAR6)
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = FUN13(VAR5, VAR6);
            }
            FUN9(VAR5, FUN6(0), 0);
            FUN9(VAR6, FUN6(2), 0);
        }
        break;
    case VAR26:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), (int)FUN6(1));
            return;
        }
        else
        {
            if (!(VAR5 = FUN7(FUN6(0))))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = unlink(VAR5);
                FUN9(VAR5, FUN6(0), 0);
            }
        }
        break;
    case VAR27:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), (int)FUN6(1), FUN6(2));
            return;
        }
        else
        {
            struct stat VAR28;
            if (!(VAR5 = FUN7(FUN6(0))))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = FUN14(VAR5, &VAR28);
                FUN9(VAR5, FUN6(0), 0);
            }
            if (VAR8 == 0)
            {
                FUN15(VAR2, FUN6(2), &VAR28);
            }
        }
        break;
    case VAR29:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), FUN6(1));
            return;
        }
        else
        {
            struct stat VAR28;
            VAR8 = FUN16(FUN6(0), &VAR28);
            if (VAR8 == 0)
            {
                FUN15(VAR2, FUN6(1), &VAR28);
            }
        }
        break;
    case VAR30:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), FUN6(1));
            return;
        }
        else
        {
            qemu_timeval VAR31;
            struct VAR32 *VAR5;
            VAR8 = FUN17(&VAR31);
            if (VAR8 != 0)
            {
                if (!(VAR5 = FUN10(VAR16, FUN6(0), sizeof(struct VAR32), 0)))
                {
                    VAR8 = -1;
                }
                else
                {
                    VAR5->VAR33 = FUN18(VAR31.VAR33);
                    VAR5->VAR34 = FUN19(VAR31.VAR34);
                    FUN9(VAR5, FUN6(0), sizeof(struct VAR32));
                }
            }
        }
        break;
    case VAR35:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0));
            return;
        }
        else
        {
            VAR8 = FUN20(FUN6(0));
        }
        break;
    case VAR36:
        if (FUN4())
        {
            FUN5(VAR12, "", FUN6(0), (int)FUN6(1));
            return;
        }
        else
        {
            if (!(VAR5 = FUN7(FUN6(0))))
            {
                VAR8 = -1;
            }
            else
            {
                VAR8 = system(VAR5);
                FUN9(VAR5, FUN6(0), 0);
            }
        }
        break;
    case VAR37:
    {
        VAR38 *VAR39 = VAR2->VAR40;
        if (!VAR39->VAR41)
        {
            long VAR42;
            uint32_t VAR43;
            uint32_t VAR44;
            VAR44 = FUN21(0);
            VAR43 = VAR45;
            for (;;)
            {
                VAR42 = FUN21(VAR44 + VAR43);
                if (VAR42 != -1)
                    break;
                VAR43 >>= 1;
            }
            VAR39->VAR41 = VAR44 + VAR43;
        }
        VAR2->VAR9[1] = VAR39->VAR41;
        VAR2->VAR46[7] = VAR39->VAR47;
    }
        VAR2->VAR9[1] = VAR48;
        VAR2->VAR46[7] = VAR48;
        return;
    default:
        FUN22(VAR2, "", VAR3);
        VAR8 = 0;
    }
    FUN12(VAR8, VAR4);
    FUN12(VAR24, VAR4 + 4);
}