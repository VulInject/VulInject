int FUN1(struct VAR1 *VAR2, char *VAR3, int VAR4)
{
unsigned int VAR5, read = 0;

if (FUN2(!VAR2))
return -VAR6;


if (!VAR2->VAR7)
return 0;


for (VAR5 = 1; VAR4 && VAR5 < 2; VAR5++) {

if (VAR2->VAR8) {
unsigned int VAR9 = FUN3(VAR4, (int)VAR2->VAR8);
memcpy(&VAR3[read], &VAR2->VAR10[VAR2->VAR11], VAR9);
VAR2->VAR11 += VAR9;
VAR2->VAR8 -= VAR9;
VAR4 -= VAR9;
read += VAR9;
}
if (VAR4 == 0)
break;


if (VAR2->VAR11) {
VAR2->VAR12 -= VAR2->VAR11;
memmove(VAR2->VAR10, &VAR2->VAR10[VAR2->VAR11],
VAR2->VAR12);
VAR2->VAR11 = 0;
}


if (FUN4(VAR2))
VAR5--;
}
if (!VAR2->VAR13) {
FUN5("", VAR2->VAR14);
return -VAR15;
}
return read;
}