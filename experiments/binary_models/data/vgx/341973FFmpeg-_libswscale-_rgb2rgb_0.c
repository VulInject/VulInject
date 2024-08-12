void FUN1(const VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
int VAR5, VAR6 = VAR4 >> 1;

for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
unsigned VAR7         = ((const VAR8 *)VAR2)[VAR5];
((VAR8 *)VAR3)[VAR5] = (VAR7 >> 11) | (VAR7 & 0x7E0) | (VAR7 << 11);
}
}