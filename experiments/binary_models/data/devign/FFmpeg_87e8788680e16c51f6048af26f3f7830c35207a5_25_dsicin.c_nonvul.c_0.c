static int FUN1(VAR1 *VAR2)
{
    if (FUN2(&VAR2->VAR3[0]) != 0x55AA0000)
        return 0;
    if (FUN2(&VAR2->VAR3[12]) != 22050 || VAR2->VAR3[16] != 16 || VAR2->VAR3[17] != 0)
        return 0;
    return VAR4;
}