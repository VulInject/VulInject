static void FUN1(struct VAR1 *VAR2)
{
unsigned char *VAR3;
unsigned char VAR4;
unsigned short VAR5;
unsigned char *VAR6;
int VAR7;
int VAR8;

const char *VAR9 = "";
char *VAR10;

VAR3 = VAR2->VAR11;

VAR4 = *(VAR3 + VAR12);
if (VAR4 != 0) {
VAR5 =
*(unsigned short *)(VAR3 + VAR13);

VAR6 = (unsigned char *)(VAR3 + VAR5);
} else {

memcpy(VAR2->VAR14, VAR9, 7);
VAR2->VAR14[7] = 0;
return;
}


for (VAR8 = 0; VAR8 < VAR4; VAR8++) {
while (*VAR6 != 0)
VAR6++;
VAR6++;
}


VAR6 += 2;

VAR7 = FUN2(VAR6, VAR15 - 1);
memcpy(VAR2->VAR14, VAR6, VAR7);
VAR10 = VAR2->VAR14 + VAR7;
while ((*--VAR10) == '')
;
*(VAR10 + 1) = '';
}