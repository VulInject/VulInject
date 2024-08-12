static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4[1] & 0x1;
    int VAR6 = VAR4[2] & 0x3;
    int VAR7;
    int VAR8 = FUN2(VAR2, VAR4);
    switch (VAR6)
    {
    case 0:
    case 3:
        VAR7 = 0;
        break;
    case 1:
        VAR7 = VAR4[4];
        VAR7 |= (VAR5 ? VAR4[3] << 8 : 0);
        break;
    case 2:
        VAR7 = VAR4[6];
        VAR7 |= (VAR5 ? VAR4[5] << 8 : 0);
        break;
    }
    return VAR7 * VAR8;