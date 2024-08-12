VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    VAR6 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR6->VAR9 = 1;
    VAR6->VAR5 = VAR5;
    VAR6->VAR3 = VAR3;
    FUN3(VAR6, VAR10);
    FUN4(&VAR6->VAR11, NULL, &VAR12, VAR6, "", 0x00100000);
    FUN5(VAR3, VAR4, &VAR6->VAR11);
    VAR6->VAR13 = FUN6(NULL, 0, &VAR14, VAR6);
    VAR8 = FUN7(VAR6->VAR13);
    switch (FUN8(VAR8))
    {
    case 0:
        VAR6->VAR15 = 0;
        break;
    case 8:
        VAR6->VAR16[0] = VAR17;
        VAR6->VAR16[1] = VAR18;
        VAR6->VAR15 = 1;
        break;
    case 15:
        VAR6->VAR16[0] = VAR19;
        VAR6->VAR16[1] = VAR20;
        VAR6->VAR15 = 2;
        break;
    case 16:
        VAR6->VAR16[0] = VAR21;
        VAR6->VAR16[1] = VAR22;
        VAR6->VAR15 = 2;
        break;
    case 24:
        VAR6->VAR16[0] = VAR23;
        VAR6->VAR16[1] = VAR24;
        VAR6->VAR15 = 3;
        break;
    case 32:
        VAR6->VAR16[0] = VAR25;
        VAR6->VAR16[1] = VAR26;
        VAR6->VAR15 = 4;
        break;
    default:
        fprintf(VAR27, "", VAR28);
        FUN9(1);
    }
    FUN10(NULL, 0, &VAR29, VAR6);
    return VAR6;
}