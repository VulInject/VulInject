static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR8;
    VhostUserMsg VAR9;
    VAR2 *VAR10 = (VAR2 *)&VAR9;
    int VAR11;
    if (VAR4 != VAR12)
    {
        FUN2("", VAR4);
        return;
        FUN3(&VAR6->VAR13);
        memcpy(VAR10, VAR3, VAR12);
        if (VAR9.VAR4)
        {
            VAR10 += VAR12;
            VAR4 = FUN4(VAR8, VAR10, VAR9.VAR4);
            if (VAR4 != VAR9.VAR4)
            {
                FUN2("", VAR4, VAR9.VAR4);
                return;
                switch (VAR9.VAR14)
                {
                case VAR15:
                    VAR9.VAR16 |= VAR17;
                    VAR9.VAR4 = sizeof(VAR18.VAR19.VAR20);
                    VAR9.VAR19.VAR20 = 0x1ULL << VAR21 | 0x1ULL << VAR22;
                    VAR10 = (VAR2 *)&VAR9;
                    FUN5(VAR8, VAR10, VAR12 + VAR9.VAR4);
                    break;
                case VAR23:
                    FUN6(VAR9.VAR19.VAR20 & (0x1ULL << VAR22), !=, 0ULL);
                    break;
                case VAR24:
                    VAR9.VAR16 |= VAR17;
                    VAR9.VAR4 = sizeof(VAR18.VAR19.VAR20);
                    VAR9.VAR19.VAR20 = 1 << VAR25;
                    VAR10 = (VAR2 *)&VAR9;
                    FUN5(VAR8, VAR10, VAR12 + VAR9.VAR4);
                    break;
                case VAR26:
                    VAR9.VAR16 |= VAR17;
                    VAR9.VAR4 = sizeof(VAR18.VAR19.VAR27);
                    VAR9.VAR19.VAR27.VAR28 = 0;
                    VAR10 = (VAR2 *)&VAR9;
                    FUN5(VAR8, VAR10, VAR12 + VAR9.VAR4);
                    assert(VAR9.VAR19.VAR27.VAR29 < 2);
                    VAR6->VAR30 &= ~(0x1ULL << VAR9.VAR19.VAR27.VAR29);
                    break;
                case VAR31:
                    memcpy(&VAR6->VAR32, &VAR9.VAR19.VAR32, sizeof(VAR9.VAR19.VAR32));
                    VAR6->VAR33 = FUN7(VAR8, VAR6->VAR34, FUN8(VAR6->VAR34));
                    FUN9(&VAR6->VAR35);
                    break;
                case VAR36:
                case VAR37:
                    FUN7(VAR8, &VAR11, 1);
                    FUN10(VAR11);
                    break;
                case VAR38:
                    if (VAR6->VAR39 != -1)
                    {
                        close(VAR6->VAR39);
                        VAR6->VAR39 = -1;
                        FUN7(VAR8, &VAR6->VAR39, 1);
                        VAR9.VAR16 |= VAR17;
                        VAR9.VAR4 = 0;
                        VAR10 = (VAR2 *)&VAR9;
                        FUN5(VAR8, VAR10, VAR12);
                        FUN9(&VAR6->VAR35);
                        break;
                    case VAR40:
                        assert(VAR9.VAR19.VAR27.VAR29 < 2);
                        VAR6->VAR30 |= 0x1ULL << VAR9.VAR19.VAR27.VAR29;
                        break;
                    default:
                        break;
                        FUN11(&VAR6->VAR13)