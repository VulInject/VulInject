static int VAR1;		



static int VAR2;		


static int VAR3;		
static int VAR4;		





static __inline__ int FUN1(unsigned char *VAR5, unsigned int VAR6, unsigned char VAR7)
{
unsigned VAR8;
unsigned long VAR9 = 0;

FUN2(FUN3("", VAR6));
if (VAR10 <= 3) {
if (VAR6 > 65536)
VAR6 = 65536;
VAR8 = 65536 - (((unsigned) VAR5) & 0xFFFF);
} else {
if (VAR6 > (65536 << 1))
VAR6 = (65536 << 1);
VAR8 = (65536 << 1) - (((unsigned) VAR5) & 0x1FFFF);
}

if (VAR6 > VAR8)
VAR6 = VAR8;

FUN2(FUN3("", VAR6));
if ((VAR6 & 1) || (((unsigned) VAR5) & 1))
FUN4("");

VAR9 = FUN5();
FUN6(VAR10);
FUN7(VAR10);
FUN8(VAR10, (long) VAR5);
FUN9(VAR10, VAR6);
FUN10(VAR10, VAR7);
FUN11(VAR10);
FUN12(VAR9);

return VAR6;
}