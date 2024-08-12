static int FUN1(struct VAR1 *VAR2, u16 VAR3,
u16 VAR4, u16 VAR5)
{
int VAR6;
unsigned char VAR7[4] = {0};
VAR8 *VAR9 = (VAR8 *)VAR7;
const u16 VAR10 = VAR3 + sizeof(VAR8); 

if (VAR3 != VAR11 && VAR3 != VAR12) {
FUN2(&VAR2->VAR13,
"", VAR14);
return -VAR15;
}


*VAR9 = FUN3(VAR4);

if (VAR3 == VAR11) {
VAR7[2] = (VAR16)(VAR5);
} else {

VAR8 *VAR17 = (VAR8 *)&VAR7[2];
*VAR17 = FUN3(VAR5);
}

VAR6 = FUN4(VAR2, VAR10, VAR7);
if (VAR6)
FUN2(&VAR2->VAR13,
"",
VAR5, VAR4, VAR6);

return VAR6;
}