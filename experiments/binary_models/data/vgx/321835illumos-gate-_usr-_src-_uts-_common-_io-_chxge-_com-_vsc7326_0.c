static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
int VAR5=0;
u32 VAR6=0;

if(	(VAR4 != 0x0) &&
(VAR4 != 0x1) &&
(VAR4 != 0x2) &&
(VAR4 != 0xd) &&
(VAR4 != 0xe))
FUN2("", VAR4);

VAR5 = ((0x00 << 24) | ((VAR4 & 0xff) << 16) | (0x00 << 8) |
((VAR3 & 0xff) << 0));
FUN3(VAR2, VAR7, VAR5);

FUN4(10);

FUN5(VAR2, VAR8, &VAR6);
if((VAR6 & (1<<9)) != 0x0)
FUN2("", VAR6);
else if((VAR6 & (1<<8)) != 0x0)
FUN2("", VAR6);

return(VAR6 & 0xff);
}