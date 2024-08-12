void *FUN1(qemu_irq VAR1)
{
    VAR2 *VAR3 = (VAR2 *)FUN2(sizeof(*VAR3));
    VAR4 *VAR5;
    VAR3->VAR6 = FUN3(0x180000);
    VAR3->VAR7 = FUN4(VAR8, VAR9, NULL, VAR3);
    VAR5 = FUN5(VAR3->VAR7);
    switch (FUN6(VAR5))
    {
    case 0:
        VAR3->VAR10[0] = VAR3->VAR10[1] = FUN2(sizeof(VAR11) * 0x10);
        break;
    case 8:
        VAR3->VAR10[0] = VAR12;
        VAR3->VAR10[1] = VAR13;
        break;
    case 15:
        VAR3->VAR10[0] = VAR14;
        VAR3->VAR10[1] = VAR15;
        break;
    case 16:
        VAR3->VAR10[0] = VAR16;
        VAR3->VAR10[1] = VAR17;
        break;
    case 24:
        VAR3->VAR10[0] = VAR18;
        VAR3->VAR10[1] = VAR19;
        break;
    case 32:
        VAR3->VAR10[0] = VAR20;
        VAR3->VAR10[1] = VAR21;
        break;
    default:
        fprintf(VAR22, "", VAR23);
        FUN7(1);
    }
    FUN8(VAR3);
    return VAR3;
}