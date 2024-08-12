static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2("", VAR2, VAR3);
    switch (VAR2 & 3)
    {
    case 2:
        VAR5->VAR6 = (VAR3 & 0x60) | (VAR5->VAR6 & 1) | (VAR5->VAR6 & ~VAR3 & 0x06);
        break;
    }
}