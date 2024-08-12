static void FUN1(struct VAR1 *VAR1,
u8 VAR2,
const VAR3 *VAR4, int VAR5)
{
int VAR6;

if (VAR1->VAR7 < 0)
return;
memcpy(VAR1->VAR8, VAR4, VAR5);
VAR6 = FUN2(VAR1->VAR9,
FUN3(VAR1->VAR9, 0),
0,		
VAR10 | VAR11 | VAR12,
0,		
VAR2, VAR1->VAR8, VAR5,
500);
if (VAR6 < 0) {
FUN4("",
VAR2, VAR6);
VAR1->VAR7 = VAR6;
}
}