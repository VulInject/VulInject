static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5, const char *VAR6)
{
const char *VAR7;

(void)VAR2;
VAR7 = strchr(VAR4->VAR8, '');
FUN2(VAR7);
VAR4->VAR9 = FUN3(VAR10, "",
(int)(VAR7 - VAR4->VAR8), VAR4->VAR8, VAR5, VAR6);
}