static int FUN1(struct VAR1 *VAR2, int VAR3)

{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6;
u8 VAR7, VAR8;

if (VAR3 < 0x20)
VAR3 = 0x20;
if (VAR3 > 0x80)
VAR3 = 0x80;

if (VAR3 >= 0x20 && VAR3 < 0x40) {
VAR7 = 0x0; 
VAR8 = VAR3;
} else {
VAR7 = 0x2; 
VAR8 = VAR3 / 2;
}

FUN3("", VAR3, VAR7, VAR8);


VAR6 = FUN4(VAR5, VAR9,
VAR10, VAR7);
if (VAR6)
return VAR6;


VAR6 = FUN4(VAR5, VAR9,
VAR11, VAR8);
if (VAR6)
return VAR6;

return 0;
}