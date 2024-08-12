static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    static int VAR6 = 0;
    FUN2(VAR4);
    VAR4->VAR2 = VAR2;
    VAR4->VAR7 = VAR8;
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    VAR4->VAR11 = VAR2->VAR11;
    switch (VAR2->VAR12)
    {
    case 0x10000000:
        VAR4->VAR13 = 0;
        VAR4->VAR14 = 0;
        VAR4->VAR15 = 1;
        break;
    case 0x10002000:
        VAR4->VAR13 = 3;
        VAR4->VAR14 = 1;
        VAR4->VAR15 = 1;
        VAR4->VAR16 = 1;
        break;
    case 0x10003000:
        VAR4->VAR13 = 3;
        VAR4->VAR14 = 1;
        VAR4->VAR15 = 1;
        break;
    case 0x10003001:
        VAR4->VAR13 = 3;
        VAR4->VAR14 = 0;
        VAR4->VAR15 = 1;
        break;
    case 0x20001000:
    case 0x20100001:
    case 0x20101001:
    case 0x20103001:
        VAR4->VAR15 = 1;
        break;
    case 0x20200002:
    case 0x20201002:
    case 0x30202002:
    case 0x30203002:
        VAR4->VAR15 = 0;
        VAR4->VAR2->VAR17 = 1;
        break;
    default:
        FUN3(VAR4->VAR2, VAR18, "", VAR2->VAR12);
    }
    if (FUN4(VAR4) < 0)
        return -1;
    FUN5(VAR4);
    if (!VAR6)
    {
        FUN6(&VAR19, VAR20, 256, VAR21, 1, 1, VAR22, 2, 2);
        FUN6(&VAR23, VAR20, 256, VAR24, 1, 1, VAR25, 2, 2);
        VAR6 = 1;
    }
    VAR2->VAR26 = VAR27;
    return 0;
}