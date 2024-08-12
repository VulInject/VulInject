static int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3[0] == 0x01 && VAR2->VAR3[1] == 0x00 && VAR2->VAR3[4] == 0x01 + VAR2->VAR3[2] && VAR2->VAR3[8] == VAR2->VAR3[4] + VAR2->VAR3[6] && VAR2->VAR3[12] == VAR2->VAR3[8] + VAR2->VAR3[10])
        return VAR4;
    return 0;
}