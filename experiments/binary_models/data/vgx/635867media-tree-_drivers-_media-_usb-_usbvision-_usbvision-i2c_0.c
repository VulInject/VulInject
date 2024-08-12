static inline int FUN1(struct VAR1 *VAR2,
unsigned char VAR3, int VAR4)
{
struct VAR5 *VAR6;
int VAR7, VAR8 = -1;
char VAR9[4];

VAR6 = (struct VAR5 *)FUN2(VAR2);
VAR9[0] = 0x00;
for (VAR7 = 0; VAR7 <= VAR4; VAR7++) {
VAR8 = (FUN3(VAR6, VAR3, VAR9, 1));
if (VAR8 == 1)
break;	
FUN4(5);
if (VAR7 == VAR4)	
break;
FUN4(10);
}
if (VAR7) {
FUN5(VAR10, "", VAR7, VAR3);
FUN5(VAR10, "");
}
return VAR8;
}