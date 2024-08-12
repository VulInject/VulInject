static void FUN1                (VAR1 *VAR2);







static void
FUN2 (VAR1 *VAR2)
{
gint VAR3;
VAR4 *VAR5, *VAR6, VAR7;
gint VAR8;
VAR4 *VAR9;
gint VAR10, VAR11;

FUN3 (VAR2 != NULL);
FUN3 (VAR2->VAR9 != NULL);


VAR9 = VAR2->VAR9;
VAR10  = VAR2->VAR12;

VAR5 = VAR9 + ((VAR10 - 1) / 8);
VAR6   = VAR9 + (VAR10 - 1) * 3;
VAR8  = 7 - ((VAR10-1) % 8);


VAR7 = VAR5[0];
for (VAR3 = 0; VAR3 < VAR8; VAR3++, VAR7 >>= 1);

for (VAR11 = VAR10-1; VAR11 >= 0; VAR11--) {


VAR6[0] = VAR6[1] = VAR6[2] = (VAR7 & 0x01) ? 0x00 : 0xff;

VAR6 -= 3;
VAR8++;

if (VAR8 > 7 && VAR11 > 0) {
VAR5--;
VAR7 = VAR5[0];
VAR8 = 0;
} else {
VAR7 >>= 1;
}
}


}