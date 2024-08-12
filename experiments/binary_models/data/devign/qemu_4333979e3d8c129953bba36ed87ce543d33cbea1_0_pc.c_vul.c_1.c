static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    static const char VAR4[8] = "";
    static int VAR5 = 0;
    switch (VAR2)
    {
    case 0x400:
    case 0x401:
        break;
    case 0x402:
    case 0x403:
        fprintf(VAR6, "", VAR3);
        break;
    case 0x8900:
        if (VAR3 == VAR4[VAR5])
        {
            VAR5++;
            if (VAR5 == 8)
            {
                VAR5 = 0;
                FUN2();
            }
        }
        else
        {
            VAR5 = 0;
        }
        break;
    case 0x501:
    case 0x502:
        fprintf(VAR6, "", VAR3);
        FUN3(1);
    case 0x500:
    case 0x503:
        fprintf(VAR6, "", VAR3);
        break;
    }
}