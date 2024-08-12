void FUN1(struct VAR1 *VAR2, unsigned short VAR3,
VAR4 *VAR5, void *VAR6)
{
unsigned char *VAR7=VAR2->VAR7;

VAR7[0]=0x47;
VAR7[1]=(VAR3>>8);
VAR7[2]=VAR3&0xff;
VAR2->VAR8=0;
VAR2->VAR5=VAR5;
VAR2->VAR6=VAR6;
}