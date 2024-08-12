static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4[2] & 0x3;
    int VAR6;
    int VAR7 = FUN2(VAR2, VAR4);
    switch (VAR5)
    {
    case 0:
    case 3:
        VAR6 = 0;
        break;
    case 1:
        VAR6 = VAR4[3];
        break;
    case 2:
        VAR6 = VAR4[4];
        break;
    }
    return VAR6 * VAR7;