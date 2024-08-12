static int FUN1(struct VAR1 *VAR2, u16 VAR3,
u8 VAR4, u8 VAR5)
{
int VAR6;
unsigned char VAR7[4] = {0};
const u16 VAR8 = VAR3 + sizeof(VAR9); 

if (VAR3 != VAR10) {
FUN2(&VAR2->VAR11,
"", VAR12);
return -VAR13;
}


VAR7[0] = VAR4;
VAR7[1] = VAR5;

VAR6 = FUN3(VAR2, VAR8, VAR7);
if (VAR6)
FUN2(&VAR2->VAR11,
"",
VAR5, VAR4, VAR6);

return VAR6;
}