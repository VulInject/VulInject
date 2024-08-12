void FUN1(struct VAR1 *VAR2, unsigned char const *VAR3, unsigned VAR4)
{
uint32_t VAR5;



VAR5 = VAR2->VAR6[0];
if ((VAR2->VAR6[0] = VAR5 + ((VAR7) VAR4 << 3)) < VAR5)
VAR2->VAR6[1]++;		
VAR2->VAR6[1] += VAR4 >> 29;

VAR5 = (VAR5 >> 3) & 0x3f;	



if (VAR5) {
unsigned char *VAR8 = (unsigned char *) VAR2->VAR9 + VAR5;

VAR5 = 64 - VAR5;
if (VAR4 < VAR5) {
memcpy(VAR8, VAR3, VAR4);
return;
}
memcpy(VAR8, VAR3, VAR5);
FUN2(VAR2->VAR9, 16);
FUN3(VAR2->VAR3, (VAR7 *) VAR2->VAR9);
VAR3 += VAR5;
VAR4 -= VAR5;
}


while (VAR4 >= 64) {
memcpy(VAR2->VAR9, VAR3, 64);
FUN2(VAR2->VAR9, 16);
FUN3(VAR2->VAR3, (VAR7 *) VAR2->VAR9);
VAR3 += 64;
VAR4 -= 64;
}



memcpy(VAR2->VAR9, VAR3, VAR4);
}