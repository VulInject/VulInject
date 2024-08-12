static VAR1 FUN1(u_char VAR2[])
{

uhash_ctx_t VAR3;
u_char VAR4;
aes_int_key VAR5;

VAR3 = (VAR1)malloc(sizeof(VAR6)+VAR7);
if (VAR3) {
if (VAR7) {
VAR4 = VAR7 -
((VAR8)VAR3 & (VAR7 -1));
VAR3 = (VAR1)((VAR9 *)VAR3 + VAR4);
*((VAR9 *)VAR3 - 1) = VAR4;
}
FUN2(VAR2,VAR5);
FUN3(VAR3, VAR5);
}
return (VAR3);
}