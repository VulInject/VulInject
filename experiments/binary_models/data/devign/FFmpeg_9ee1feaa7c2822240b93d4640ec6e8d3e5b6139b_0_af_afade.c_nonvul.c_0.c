static double FUN1(int VAR1, int64_t VAR2, int VAR3)
{
    double VAR4;
    VAR4 = FUN2(1.0 * VAR2 / VAR3, 0, 1.0);
    switch (VAR1)
    {
    case VAR5:
        VAR4 = FUN3(VAR4 * VAR6 / 2.0);
        break;
    case VAR7:
        VAR4 = 0.6366197723675814 * FUN4(VAR4);
        break;
    case VAR8:
        VAR4 = 1.0 - FUN5(VAR6 / 4.0 * (FUN6(2.0 * VAR4 - 1) + 1));
        break;
    case VAR9:
        VAR4 = (1.0 - FUN5(VAR4 * VAR6)) / 2.0;
        break;
    case VAR10:
        VAR4 = 0.3183098861837907 * FUN7(1 - 2 * VAR4);
        break;
    case VAR11:
        VAR4 = FUN8(-11.512925464970227 * (1 - VAR4));
        break;
    case VAR12:
        VAR4 = FUN2(1 + 0.2 * FUN9(VAR4), 0, 1.0);
        break;
    case VAR13:
        VAR4 = 1 - FUN10(1 - VAR4);
        break;
    case VAR14:
        VAR4 = (1 - (1 - VAR4) * (1 - VAR4));
        break;
    case VAR15:
        VAR4 *= VAR4;
        break;
    case VAR16:
        VAR4 = FUN6(VAR4);
        break;
    case VAR17:
        VAR4 = FUN10(VAR4);
        break;
    case VAR18:
        VAR4 = FUN11(VAR4);
        break;
    case VAR19:
        VAR4 = VAR4 <= 0.5 ? FUN11(2 * VAR4) / 2 : 1 - FUN11(2 * (1 - VAR4)) / 2;
        break;
    case VAR20:
        VAR4 = VAR4 <= 0.5 ? FUN6(2 * VAR4) / 2 : 1 - FUN6(2 * (1 - VAR4)) / 2;
        break;
    }
    return VAR4;
}