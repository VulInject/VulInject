static int FUN1(VAR1 *VAR2)
{
    uint16_t VAR3;
    VAR3 = FUN2(*((VAR4 *)VAR2->VAR5));
    if ((VAR3 == 0x0B8D || VAR3 == 0x0C0D || VAR3 == 0x0C8D) && VAR2->VAR5[2] == '' && VAR2->VAR5[3] == '' && VAR2->VAR5[4] == '' && VAR2->VAR5[5] == 0)
        return VAR6;
    else
        return 0;
}