static int FUN1(VAR1 *VAR2)
{
    if ((FUN2(&VAR2->VAR3[0]) != VAR4) || (FUN3(&VAR2->VAR3[2]) != 0xFFFFFFFF))
        return 0;
    return VAR5;
}