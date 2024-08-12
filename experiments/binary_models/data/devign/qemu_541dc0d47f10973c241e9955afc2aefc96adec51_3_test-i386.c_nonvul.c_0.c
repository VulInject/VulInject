void FUN1(void)
{
    struct VAR1
    {
        uint16_t VAR2;
        uint16_t VAR3;
        uint16_t VAR4;
        uint16_t VAR5;
        uint16_t VAR6;
        uint16_t VAR7;
        uint32_t VAR8[4];
        long double VAR9[8];
    } VAR10;
    asm volatile(""
                 :
                 : ""(VAR10));
    VAR10.VAR4 &= ~0x7f;
    asm volatile(""
                 :
                 : ""(VAR10));
}