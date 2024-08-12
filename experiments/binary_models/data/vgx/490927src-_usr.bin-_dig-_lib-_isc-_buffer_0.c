VAR1
FUN1(VAR2 *VAR3, const VAR4 *VAR5) {
unsigned char *VAR6;
unsigned int VAR7;

FUN2(VAR5 != NULL);


VAR6 = FUN3(VAR3);
VAR7 = FUN4(VAR3);
if (VAR5->VAR8 > VAR7)
return (VAR9);
memmove(VAR6, VAR5->VAR6, VAR5->VAR8);
VAR3->VAR10 += VAR5->VAR8;

return (VAR11);
}