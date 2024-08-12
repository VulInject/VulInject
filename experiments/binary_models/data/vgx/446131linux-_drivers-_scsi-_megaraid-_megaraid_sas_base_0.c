static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
sector_t VAR5, int VAR6[])
{
int VAR7;
int VAR8;
sector_t VAR9;
unsigned long VAR10;


VAR7 = 64;
VAR8 = 32;

VAR10 = VAR7 * VAR8;
VAR9 = VAR5;

FUN2(VAR9, VAR10);



if (VAR5 >= 0x200000) {
VAR7 = 255;
VAR8 = 63;
VAR10 = VAR7*VAR8;
VAR9 = VAR5;
FUN2(VAR9, VAR10);
}

VAR6[0] = VAR7;
VAR6[1] = VAR8;
VAR6[2] = VAR9;

return 0;
}