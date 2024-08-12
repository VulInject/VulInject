static void FUN1(struct VAR1 *VAR2, u8 VAR3)
{
const u16 VAR4 = 0x128;
const u16 VAR5 = 0x12C;
u32 VAR6;
int VAR7;

VAR6 = (1 << 30); 
VAR6 |= (1 << 28); 
VAR6 |= (1 << 17); 
VAR6 |= (0x1F << 18);
VAR6 |= (VAR3 << 4);
FUN2(VAR2, VAR5, VAR6);

FUN3(10);
for (VAR7 = 0; VAR7 < 200; VAR7++) {
VAR6 = FUN4(VAR2, VAR4);
if (VAR6 & 0x100 )
break;
FUN5(1);
}
}