static int FUN1(VAR1 *VAR2,
int VAR3, void *VAR4, int VAR5)
{
int VAR6;

do {
VAR6 = pread(VAR2->VAR7, VAR4, VAR5, VAR3);
} while (VAR6 < 0 && (VAR8 == VAR9 || VAR8 == VAR10));
if (VAR6 != VAR5) {
return -VAR8;
}
return 0;
}