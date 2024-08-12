static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
int VAR9 = 0;

if (VAR2->VAR10.VAR11[1] & 0x1) {

return FUN3(VAR2, VAR4);
}


if (VAR2->VAR10.VAR11[2] != 0) {
return -1;
}


VAR9 = VAR2->VAR10.VAR12;
if (VAR9 > VAR13) {
VAR9 = VAR13;
}

VAR4[0] = VAR6->VAR7.VAR14 & 0x1f;
VAR4[1] = (VAR6->VAR15 & (1 << VAR16)) ? 0x80 : 0;

FUN4((char *) &VAR4[16], 16, VAR6->VAR17, '');
FUN4((char *) &VAR4[8], 8, VAR6->VAR18, '');

memset(&VAR4[32], 0, 4);
memcpy(&VAR4[32], VAR6->VAR19, FUN5(4, strlen(VAR6->VAR19)));

VAR4[2] = VAR6->VAR7.VAR20;
VAR4[3] = 2 | 0x10; 

if (VAR9 > 36) {
VAR4[4] = VAR9 - 5; 
} else {

VAR4[4] = 36 - 5;
}


VAR4[7] = 0x10 | (VAR2->VAR21->VAR22->VAR23 ? 0x02 : 0);
return VAR9;
}