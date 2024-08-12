static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    int VAR9, VAR10, VAR11, VAR12;
    uint64_t VAR13;
    VAR11 = VAR2->VAR14.VAR15[1] & 2;
    VAR10 = VAR2->VAR14.VAR15[2] & 0xf;
    VAR9 = VAR2->VAR14.VAR15[6];
    FUN3(VAR6->VAR7.VAR16.VAR17, &VAR13);
    FUN4("", VAR9, VAR10, VAR11 >> 1);
    VAR13 /= VAR6->VAR7.VAR18 / 512;
    switch (VAR10)
    {
    case 0:
        VAR12 = FUN5(VAR13, VAR4, VAR11, VAR9);
        break;
    case 1:
        VAR12 = 12;
        memset(VAR4, 0, 12);
        VAR4[1] = 0x0a;
        VAR4[2] = 0x01;
        VAR4[3] = 0x01;
        break;
    case 2:
        VAR12 = FUN6(VAR13, VAR4, VAR11, VAR9);
        break;
    default:
        return -1;
    }
    if (VAR12 > VAR2->VAR14.VAR19)
    {
        VAR12 = VAR2->VAR14.VAR19;
    }
    return VAR12;
}