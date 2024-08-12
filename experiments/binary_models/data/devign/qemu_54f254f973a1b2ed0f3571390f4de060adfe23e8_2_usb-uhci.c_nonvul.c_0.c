static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0x1f;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    case 0x08:
        VAR5->VAR6 = VAR3 & ~0xfff;
        break;
    }
}