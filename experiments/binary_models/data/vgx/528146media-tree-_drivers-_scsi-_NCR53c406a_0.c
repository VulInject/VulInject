"", 61, 82},};





static int VAR1;		
static int VAR2;		
static int VAR3;		
static int VAR4;		
static int VAR5;		
static int VAR6;		
static int VAR7;		
static int VAR8;		
static int VAR9;		
static int VAR10;		
static int VAR11;		
static int VAR12;		
static int VAR13;		
static int VAR14;		

static int VAR15;		
static int VAR16;		
static int VAR17;		
static int VAR18;		






static int VAR19;		



static int VAR20;		


static int VAR21;		
static int VAR22;		





static __inline__ int FUN1(unsigned char *VAR23, unsigned int VAR24, unsigned char VAR25)
{
unsigned VAR26;
unsigned long VAR27 = 0;

FUN2(FUN3("", VAR24));
if (VAR28 <= 3) {
if (VAR24 > 65536)
VAR24 = 65536;
VAR26 = 65536 - (((unsigned) VAR23) & 0xFFFF);
} else {
if (VAR24 > (65536 << 1))
VAR24 = (65536 << 1);
VAR26 = (65536 << 1) - (((unsigned) VAR23) & 0x1FFFF);
}

if (VAR24 > VAR26)
VAR24 = VAR26;

FUN2(FUN3("", VAR24));
if ((VAR24 & 1) || (((unsigned) VAR23) & 1))
FUN4("");

VAR27 = FUN5();
FUN6(VAR28);
FUN7(VAR28);
FUN8(VAR28, (long) VAR23);
FUN9(VAR28, VAR24);
FUN10(VAR28, VAR25);
FUN11(VAR28);
FUN12(VAR27);

return VAR24;
}