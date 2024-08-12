static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    VAR3 = FUN2(VAR2);
    if (VAR3)
    {
        int VAR6;
        VAR6 = VAR2->VAR7[VAR3];
        VAR5 = (VAR6 >> 2) & 7;
        if (VAR6 & 0x80)
        {
            VAR4 = 24 + VAR5;
        }
        else
        {
            switch (VAR3)
            {
            case 8:
                VAR4 = VAR2->VAR8;
                break;
            case 12:
                VAR4 = VAR2->VAR9[0];
                break;
            case 13:
                VAR4 = VAR2->VAR9[1];
                break;
            default:
                FUN3("", VAR3);
                VAR4 = 0xf;
                break;
            }
        }
    }
    else
    {
        VAR5 = 0;
        VAR4 = 0;
    }
    FUN4(VAR2->VAR10, VAR5, VAR4);
}