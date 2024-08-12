unsigned FUN1(unsigned VAR1)
{
unsigned VAR2 = (VAR1 & 0xfffff000);
return ((VAR2 >> 12) ^ (VAR1 >> 12)) & VAR2;
}