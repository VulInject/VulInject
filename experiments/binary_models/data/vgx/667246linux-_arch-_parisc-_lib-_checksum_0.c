__asm__ FUN1 (          \
""   \
"" \
: ""(VAR1)                      \
: ""(VAR2), ""(VAR1));

static inline unsigned short FUN2(unsigned int VAR3)
{

VAR3 = (VAR3 & 0xffff) + (VAR3 >> 16);

VAR3 = (VAR3 & 0xffff) + (VAR3 >> 16);
return (unsigned short)VAR3;
}