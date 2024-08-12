static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    switch (VAR4)
    {
    case VAR5:
        return VAR3->VAR6;
    case VAR7:
        return VAR3->VAR8.VAR9.VAR10[4] | (VAR3->VAR8.VAR9.VAR10[5] << 8);
    case VAR11:
        return VAR3->VAR8.VAR9.VAR10[0] | (VAR3->VAR8.VAR9.VAR10[1] << 8) | (VAR3->VAR8.VAR9.VAR10[2] << 16) | (VAR3->VAR8.VAR9.VAR10[3] << 24);
    case VAR12:
        return VAR3->VAR13;
        break;
    case VAR14:
        return VAR3->VAR15;
        break;
    case VAR16:
        return VAR3->VAR17;
    case VAR18:
        return VAR3->VAR19;
    case VAR20:
        return VAR3->VAR21;
    default:
        FUN2(VAR22, "", VAR3->VAR23 & 0xf);
        return 0;
    }
}