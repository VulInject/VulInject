static inline unsigned int FUN1(unsigned int VAR1)
{
return (VAR1 & 0x3F) + ((VAR1 >> 6) & 0x3F);
}