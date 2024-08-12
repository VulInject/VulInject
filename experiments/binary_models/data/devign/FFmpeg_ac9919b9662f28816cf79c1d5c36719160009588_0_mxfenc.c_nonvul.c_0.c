static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const UID VAR5, unsigned VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int VAR12 = (VAR4->VAR13->VAR14 + 15) / 16 * 16;
    int VAR15;
    int VAR16, VAR17;
    unsigned VAR18 = VAR6 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 5 + 16 + VAR8->VAR19 * 4 + 12 + 20;
    if (VAR8->VAR19 && VAR8->VAR20)
        VAR18 += 5;
    FUN2(VAR2, VAR4, VAR5, VAR18);
    FUN3(VAR11, 4, 0x3203);
    FUN4(VAR11, VAR4->VAR13->VAR21);
    FUN3(VAR11, 4, 0x3202);
    FUN4(VAR11, VAR12 >> VAR8->VAR19);
    FUN3(VAR11, 4, 0x3209);
    FUN4(VAR11, VAR4->VAR13->VAR21);
    if (VAR4->VAR13->VAR14 == 608)
        VAR15 = 576;
    else if (VAR4->VAR13->VAR14 == 512)
        VAR15 = 486;
    else
        VAR15 = VAR4->VAR13->VAR14;
    FUN3(VAR11, 4, 0x3208);
    FUN4(VAR11, VAR15 >> VAR8->VAR19);
    FUN3(VAR11, 4, 0x320B);
    FUN4(VAR11, (VAR4->VAR13->VAR14 - VAR15) >> VAR8->VAR19);
    FUN3(VAR11, 4, 0x3301);
    FUN4(VAR11, VAR8->VAR22);
    FUN3(VAR11, 4, 0x3302);
    FUN4(VAR11, 2);
    FUN3(VAR11, 1, 0x320C);
    FUN5(VAR11, VAR8->VAR19);
    switch (VAR4->VAR13->VAR14)
    {
    case 576:
        VAR16 = 23;
        VAR17 = VAR4->VAR13->VAR23 == VAR24 ? 335 : 336;
        break;
    case 608:
        VAR16 = 7;
        VAR17 = 320;
        break;
    case 480:
        VAR16 = 20;
        VAR17 = VAR4->VAR13->VAR23 == VAR24 ? 285 : 283;
        break;
    case 512:
        VAR16 = 7;
        VAR17 = 270;
        break;
    case 720:
        VAR16 = 26;
        VAR17 = 0;
        break;
    case 1080:
        VAR16 = 21;
        VAR17 = 584;
        break;
    default:
        VAR16 = 0;
        VAR17 = 0;
        break;
    }
    if (!VAR8->VAR19)
    {
        VAR17 = 0;
        VAR16 *= 2;
    }
    FUN3(VAR11, 12 + VAR8->VAR19 * 4, 0x320D);
    FUN4(VAR11, VAR8->VAR19 ? 2 : 1);
    FUN4(VAR11, 4);
    FUN4(VAR11, VAR16);
    if (VAR8->VAR19)
        FUN4(VAR11, VAR17);
    FUN3(VAR11, 8, 0x320E);
    FUN4(VAR11, VAR8->VAR25.VAR26);
    FUN4(VAR11, VAR8->VAR25.VAR27);
    FUN3(VAR11, 16, 0x3201);
    FUN6(VAR11, *VAR8->VAR28, 16);
    if (VAR8->VAR19 && VAR8->VAR20)
    {
        FUN3(VAR11, 1, 0x3212);
        FUN5(VAR11, VAR8->VAR20);
    }
}