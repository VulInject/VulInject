static int FUN1(struct VAR1 *VAR2, int VAR3,
void *VAR4, int VAR5)
{
u32 VAR6;

unsigned char VAR7[] = {
VAR8,
0x10,		
0,
VAR5 >> 8,
VAR5 & 0xff,
0
};

VAR6 = FUN2(VAR2, VAR7, VAR9, VAR4, VAR5,
NULL, VAR10, VAR11, NULL);
if (VAR6)
FUN3(VAR12, VAR2, "",
VAR6);
return VAR6;
}