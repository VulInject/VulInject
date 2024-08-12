FUN1("");
FUN2("");
FUN3("");



static void FUN4(void *VAR1, int VAR2)
{
struct VAR3 *VAR4 = VAR1;
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8 = VAR4->VAR9;

if (VAR2) {
VAR8->VAR2 |=  0x0001;	
VAR8->VAR2 &= ~0x0100;	
} else {
VAR8->VAR2 &= ~0x0001;	
VAR8->VAR2 |=  0x0100;	
}
FUN5(VAR10, 0x010000 | VAR8->VAR2);
FUN6(VAR10);
}