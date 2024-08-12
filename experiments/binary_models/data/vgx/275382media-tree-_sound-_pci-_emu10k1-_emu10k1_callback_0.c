static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
unsigned short VAR5;
short VAR6;
unsigned char VAR7;
int VAR8;

VAR6 = (char)(VAR4->VAR9.VAR10.VAR5>>8);
VAR7 = (VAR4->VAR9.VAR10.VAR5 & 0xff);
VAR8 = VAR4->VAR11->VAR12 + VAR4->VAR11->VAR13;
VAR6 += (VAR14 * VAR8) / 1200;
FUN2(VAR6, -128, 127);
VAR5 = ((unsigned char)VAR6<<8) | VAR7;
FUN3(VAR2, VAR15, VAR4->VAR16, VAR5);
}