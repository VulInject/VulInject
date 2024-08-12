static int FUN1(struct VAR1 *VAR2, VAR3 *signal)
{
struct VAR4 *VAR5 = VAR2->VAR6;

unsigned char VAR7[1] = { 0x1B };
unsigned char VAR8 = 0;

FUN2(&VAR5->VAR9,
VAR7, FUN3(VAR7), &VAR8, 1);
*signal = (VAR8 & 0x80) ? 65535 : 0;
return 0;
}