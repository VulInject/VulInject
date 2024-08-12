static int
FUN1(VAR1 *VAR2, int VAR3, char *VAR4, int VAR5)
{
char VAR6[VAR7];

(void) memset(VAR6, 0, sizeof (VAR6));

VAR6[0] = VAR8;
VAR6[1] = VAR3 ? 0x01 : 0x00;
VAR6[2] = VAR3;
VAR6[4] = VAR5;


return (FUN2(VAR2, (union VAR9 *)&VAR6, VAR7,
(VAR10)VAR4, VAR5) == -1 ? -1 : 0);
}