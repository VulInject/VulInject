static inline int FUN1(int VAR1)
{
if (VAR1 > 0xF000)
return VAR1 + 0x10000;
if (VAR1 > 0xE000)
return VAR1 + 0xF0000;
return VAR1;
}