static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    target_ulong VAR10 = FUN2(VAR7, 0);
    target_ulong VAR11 = FUN2(VAR7, 1);
    target_ulong VAR12 = FUN2(VAR7, 2);
    target_ulong VAR13;
    switch (VAR10)
    {
    case VAR14:
    {
        char *VAR15 = FUN3(""
                                          ""
                                          ""
                                          "",
                                          VAR16, VAR17->VAR18 / VAR19, VAR20, VAR16);
        VAR13 = FUN4(VAR11, VAR12, VAR15, strlen(VAR15) + 1);
        FUN5(VAR15);
        break;
    }
    case VAR21:
    {
        uint8_t VAR15 = VAR22;
        VAR13 = FUN4(VAR11, VAR12, &VAR15, sizeof(VAR15));
        break;
    }
    case VAR23:
        VAR13 = FUN4(VAR11, VAR12, (unsigned char *)&VAR24, (VAR25 ? 16 : 0));
        break;
    default:
        VAR13 = VAR26;
    }
    FUN6(VAR9, 0, VAR13);
}