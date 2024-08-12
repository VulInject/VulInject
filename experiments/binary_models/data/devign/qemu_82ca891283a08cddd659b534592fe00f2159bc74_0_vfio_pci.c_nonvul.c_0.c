static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    union
    {
        uint8_t VAR7;
        uint16_t VAR8;
        uint32_t VAR9;
        uint64_t VAR10;
    } VAR11;
    switch (VAR4)
    {
    case 1:
        VAR11.VAR7 = VAR3;
        break;
    case 2:
        VAR11.VAR8 = FUN2(VAR3);
        break;
    case 4:
        VAR11.VAR9 = FUN3(VAR3);
        break;
    default:
        FUN4("", VAR4);
        break;
    }
    if (FUN5(VAR6->VAR12, &VAR11, VAR4, VAR6->VAR13 + VAR2) != VAR4)
    {
        FUN6("" VAR14 "" VAR15 "", VAR16, VAR2, VAR3, VAR4);
    }
    {
        VAR17 *VAR18 = FUN7(VAR6, VAR17, VAR19[VAR6->VAR20]);
        FUN8("" VAR14 "" VAR15 "", VAR16, VAR18->VAR21.VAR22, VAR18->VAR21.VAR23, VAR18->VAR21.VAR24, VAR18->VAR21.VAR25, VAR6->VAR20, VAR2, VAR3, VAR4);
    }
    FUN9(FUN7(VAR6, VAR17, VAR19[VAR6->VAR20]));
}