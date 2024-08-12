static unsigned int
FUN1(const uint32_t VAR1, unsigned int VAR2)
{
return (VAR1 >> (31 - VAR2)) & 1u;
}