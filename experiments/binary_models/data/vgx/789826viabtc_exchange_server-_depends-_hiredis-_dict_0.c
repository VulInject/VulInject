static int FUN1(VAR1 *VAR2);
static unsigned long FUN2(unsigned long VAR3);
static int FUN3(VAR1 *VAR2, const void *VAR4);
static int FUN4(VAR1 *VAR2, VAR5 *VAR6, void *VAR7);




static unsigned int FUN5(const unsigned char *VAR8, int VAR9) {
unsigned int VAR10 = 5381;

while (VAR9--)
VAR10 = ((VAR10 << 5) + VAR10) + (*VAR8++); 
return VAR10;
}