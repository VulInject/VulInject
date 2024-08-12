signed FUN1(signed VAR1, signed VAR2);

signed FUN2(signed VAR1, signed VAR2);


signed FUN3(signed VAR3, signed VAR4);
unsigned FUN4(unsigned VAR3, unsigned VAR4);

static void FUN5(unsigned VAR5, unsigned VAR6, struct VAR7 *VAR7)
{
unsigned VAR8 = 1, VAR9 = 0;
if (VAR6 == 0) {
VAR7->VAR10 = 0xFFFFFFFF;	
return;
}

while ((VAR6 >> 31) == 0) {
VAR8 = VAR8 << 1;	
VAR6 = VAR6 << 1;     
}

while (VAR8 > 0) {
VAR9 = VAR9 << 1;	
if (VAR5 >= VAR6)
{
VAR5 -= VAR6;
VAR9++;
}
VAR6 = VAR6 >> 1; 	
VAR8 = VAR8 >> 1; 	
}
VAR7->VAR10 = VAR5;
VAR7->VAR9 = VAR9;
}