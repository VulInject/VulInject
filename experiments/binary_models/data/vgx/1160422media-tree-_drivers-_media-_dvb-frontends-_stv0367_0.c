static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR5;
u32 VAR6 = 0, VAR7 = 0, VAR8 = 0;
int VAR9 = 0, VAR10 = 0, VAR11 = 0;

while (((FUN2(VAR3, VAR12) == 1) &&
(VAR11 < 400)) || ((VAR6 == 0) && (VAR11 < 400))) {
FUN3(1000, 2000);
VAR6 = ((VAR1)FUN2(VAR3, VAR13)
* (1 << 16))
+ ((VAR1)FUN2(VAR3, VAR14)
* (1 << 8))
+ ((VAR1)FUN2(VAR3, VAR15));
VAR11++;
}
VAR9 = FUN2(VAR3, VAR16);
VAR10 = FUN2(VAR3, VAR17);

if (VAR6 == 0)
VAR7 = 0;
else if (VAR9 == 0x9) {
if (VAR6 <= 4) {
VAR8 = (VAR6 * 1000000000) / (8 * (1 << 8));
VAR8 =  VAR8;
} else if (VAR6 <= 42) {
VAR8 = (VAR6 * 100000000) / (8 * (1 << 8));
VAR8 = VAR8 * 10;
} else if (VAR6 <= 429) {
VAR8 = (VAR6 * 10000000) / (8 * (1 << 8));
VAR8 = VAR8 * 100;
} else if (VAR6 <= 4294) {
VAR8 = (VAR6 * 1000000) / (8 * (1 << 8));
VAR8 = VAR8 * 1000;
} else if (VAR6 <= 42949) {
VAR8 = (VAR6 * 100000) / (8 * (1 << 8));
VAR8 = VAR8 * 10000;
} else { 
VAR8 = (VAR6 * 10000) / (8 * (1 << 8));
VAR8 = VAR8 * 100000;
}


if (VAR10 == 2)

VAR7 = VAR8;
else if (VAR10 == 3)

VAR7 = VAR8 / 4;
else if (VAR10 == 4)

VAR7 = VAR8 / 16;
else if (VAR10 == 5)

VAR7 = VAR8 / 64;
else if (VAR10 == 6)

VAR7 = VAR8 / 256;
else
VAR7 = 0;

}

VAR5->VAR18 = VAR7;

return VAR7;
}