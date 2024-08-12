static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    int VAR5 = (VAR2[3] & 0xC0) == 0x80 && (VAR2[4] & 0xC0) != 0x40 && ((VAR2[4] & 0xC0) == 0x00 || (VAR2[4] & 0xC0) >> 2 == (VAR2[6] & 0xF0));
    for (VAR2 += 3; VAR2 < VAR3 && *VAR2 == 0xFF; VAR2++)
        ;
    if ((*VAR2 & 0xC0) == 0x40)
        VAR2 += 2;
    if ((*VAR2 & 0xF0) == 0x20)
    {
        VAR4 = VAR2[0] & VAR2[2] & VAR2[4] & 1;
    }
    else if ((*VAR2 & 0xF0) == 0x30)
    {
        VAR4 = VAR2[0] & VAR2[2] & VAR2[4] & VAR2[5] & VAR2[7] & VAR2[9] & 1;
    }
    else
        VAR4 = *VAR2 == 0x0F;
    return VAR4 || VAR5;
}