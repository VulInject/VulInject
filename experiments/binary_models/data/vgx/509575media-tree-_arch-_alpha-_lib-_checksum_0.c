}
FUN1(VAR1);


VAR2 FUN2(const void *VAR3, int VAR4, __wsum VAR5)
{
unsigned long VAR6 = FUN3(VAR3, VAR4);


VAR6 += (__force VAR7)VAR5;

VAR6 = (VAR6 & 0xffffffff) + (VAR6 >> 32);
return (__force VAR2)VAR6;
}