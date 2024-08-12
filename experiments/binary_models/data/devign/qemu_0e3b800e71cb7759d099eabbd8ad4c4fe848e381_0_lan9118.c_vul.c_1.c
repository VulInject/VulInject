static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR2->VAR5 = (VAR2->VAR5 & 0x10) | (VAR3 << 28) | VAR4;
    switch (VAR3)
    {
    case 0:
        VAR2->VAR6 = VAR2->VAR7[VAR4];
        FUN2("", VAR4, VAR2->VAR6);
    case 1:
        VAR2->VAR8 = 0;
        FUN2("");
    case 2:
        VAR2->VAR8 = 1;
        FUN2("");
    case 3:
        if (VAR2->VAR8)
        {
            VAR2->VAR7[VAR4] &= VAR2->VAR6;
            FUN2("", VAR4, VAR2->VAR6);
        }
        else
        {
            FUN2("", VAR4);
        }
    case 4:
        if (VAR2->VAR8)
        {
            for (VAR4 = 0; VAR4 < 128; VAR4++)
            {
                VAR2->VAR7[VAR4] &= VAR2->VAR6;
            }
            FUN2("", VAR2->VAR6);
        }
        else
        {
            FUN2("");
        }
    case 5:
        if (VAR2->VAR8)
        {
            VAR2->VAR7[VAR4] = 0xff;
            FUN2("", VAR4);
        }
        else
        {
            FUN2("", VAR4);
        }
    case 6:
        if (VAR2->VAR8)
        {
            memset(VAR2->VAR7, 0xff, 128);
            FUN2("");
        }
        else
        {
            FUN2("");
        }
    case 7:
        FUN3(VAR2);
    }