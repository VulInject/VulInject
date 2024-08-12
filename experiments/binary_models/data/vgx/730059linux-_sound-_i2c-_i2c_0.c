static int FUN1(struct VAR1 *VAR2,
unsigned char *VAR3, int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
int VAR7, VAR8 = 0;

if (VAR2->VAR9 & VAR10)
return -VAR11;		
FUN2(VAR6);
VAR7 = FUN3(VAR6, (VAR2->VAR12 << 1) | 1);
if (VAR7 < 0) {
FUN4(VAR6);
return VAR7;
}
while (VAR4-- > 0) {
VAR7 = FUN5(VAR6, VAR4 == 0);
if (VAR7 < 0) {
FUN4(VAR6);
return VAR7;
}
*VAR3++ = (unsigned char)VAR7;
VAR8++;
}
FUN6(VAR6);
return VAR8;
}