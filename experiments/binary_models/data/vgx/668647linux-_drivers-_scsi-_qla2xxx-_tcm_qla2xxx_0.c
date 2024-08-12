static int FUN1(const char *VAR1, VAR2 *VAR3)
{
unsigned int VAR4, VAR5;
u8 VAR6[8];

memset(VAR6, 0, sizeof(VAR6));


for (VAR4 = 0, VAR5 = 0; VAR4 < 16; VAR4++) {
int VAR7;

VAR7 = FUN2(*VAR1++);
if (VAR7 >= 0)
VAR5 = (VAR5 << 4) | VAR7;
else
return -VAR8;

if (VAR4 % 2) {
VAR6[VAR4/2] = VAR5 & 0xff;
VAR5 = 0;
}
}

*VAR3 = FUN3(VAR6);
return 0;
}