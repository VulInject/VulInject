static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11.VAR12;
    VAR13 *VAR14 = FUN2(VAR10);
    FUN3(3);
    switch (VAR4[2] & 0xf)
    {
    case 0:
        VAR6[2] = VAR14->FUN4(VAR10, VAR15, 0);
        break;
    case 1:
        VAR6[2] = VAR14->FUN4(VAR10, VAR16, 0);
        break;
    case 2:
        VAR6[2] = VAR14->FUN4(VAR10, VAR17, 0);
        break;
    case 3:
        VAR6[2] = VAR14->FUN4(VAR10, VAR18, 0);
        break;
    case 4:
        VAR6[2] = VAR14->FUN4(VAR10, VAR19, 0);
        break;
    case 5:
        VAR6[2] = VAR14->FUN4(VAR10, VAR20, 0);
        break;
    default:
        VAR6[2] = VAR21;
        return;
    }
}