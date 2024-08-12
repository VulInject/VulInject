static void FUN1(int VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    struct termios VAR6;
    speed_t VAR7;
    FUN2("", VAR2, VAR3, VAR4, VAR5);
    FUN3(VAR1, &VAR6);
    if (!VAR8)
    {
        VAR9 = VAR6;
    }
    VAR2 = VAR2 * 10 / 11;
    do
    {
        FUN4(50);
        FUN4(75);
        FUN4(110);
        FUN4(134);
        FUN4(150);
        FUN4(200);
        FUN4(300);
        FUN4(600);
        FUN4(1200);
        FUN4(1800);
        FUN4(2400);
        FUN4(4800);
        FUN4(9600);
        FUN4(19200);
        FUN4(38400);
        FUN4(57600);
        FUN4(115200);
        FUN4(230400);
        FUN4(460800);
        FUN4(500000);
        FUN4(576000);
        FUN4(921600);
        FUN4(1000000);
        FUN4(1152000);
        FUN4(1500000);
        FUN4(2000000);
        FUN4(2500000);
        FUN4(3000000);
        FUN4(3500000);
        FUN4(4000000);
        VAR7 = VAR10;
    } while (0);
    FUN5(&VAR6, VAR7);
    FUN6(&VAR6, VAR7);
    VAR6.VAR11 &= ~(VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18 | VAR19);
    VAR6.VAR20 |= VAR21;
    VAR6.VAR22 &= ~(VAR23 | VAR24 | VAR25 | VAR26 | VAR27);
    VAR6.VAR28 &= ~(VAR29 | VAR30 | VAR31 | VAR32 | VAR33);
    switch (VAR4)
    {
    default:
    case 8:
        VAR6.VAR28 |= VAR34;
        break;
    case 7:
        VAR6.VAR28 |= VAR35;
        break;
    case 6:
        VAR6.VAR28 |= VAR36;
        break;
    case 5:
        VAR6.VAR28 |= VAR37;
        break;
    }
    switch (VAR3)
    {
    default:
    case '':
        break;
    case '':
        VAR6.VAR28 |= VAR30;
        break;
    case '':
        VAR6.VAR28 |= VAR30 | VAR31;
        break;
    }
    if (VAR5 == 2)
        VAR6.VAR28 |= VAR33;
    FUN7(VAR1, VAR38, &VAR6);
}