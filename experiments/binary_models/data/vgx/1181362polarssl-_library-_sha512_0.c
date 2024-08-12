int FUN1(VAR1 *VAR2,
unsigned char *VAR3)
{
int VAR4 = VAR5;
unsigned VAR6;
uint64_t VAR7, VAR8;


VAR6 = VAR2->VAR9[0] & 0x7F;

VAR2->VAR10[VAR6++] = 0x80;

if (VAR6 <= 112) {

memset(VAR2->VAR10 + VAR6, 0, 112 - VAR6);
} else {

memset(VAR2->VAR10 + VAR6, 0, VAR11 - VAR6);

if ((VAR4 = FUN2(VAR2, VAR2->VAR10)) != 0) {
return VAR4;
}

memset(VAR2->VAR10, 0, 112);
}


VAR7 = (VAR2->VAR9[0] >> 61)
| (VAR2->VAR9[1] <<  3);
VAR8  = (VAR2->VAR9[0] <<  3);

FUN3(VAR7, VAR2->VAR10, 112);
FUN3(VAR8,  VAR2->VAR10, 120);

if ((VAR4 = FUN2(VAR2, VAR2->VAR10)) != 0) {
return VAR4;
}


FUN3(VAR2->VAR12[0], VAR3,  0);
FUN3(VAR2->VAR12[1], VAR3,  8);
FUN3(VAR2->VAR12[2], VAR3, 16);
FUN3(VAR2->VAR12[3], VAR3, 24);
FUN3(VAR2->VAR12[4], VAR3, 32);
FUN3(VAR2->VAR12[5], VAR3, 40);

int VAR13 = 0;
VAR13 = VAR2->VAR14;
if (!VAR13) {
FUN3(VAR2->VAR12[6], VAR3, 48);
FUN3(VAR2->VAR12[7], VAR3, 56);
}

return 0;
}