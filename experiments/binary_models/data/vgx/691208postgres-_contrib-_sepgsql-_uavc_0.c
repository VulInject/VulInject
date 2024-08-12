bool
FUN1(const VAR1 *VAR2,
uint16 VAR3, uint32 VAR4,
const char *VAR5,
bool VAR6)
{
char	   *VAR7 = FUN2(VAR2, VAR8);
bool		VAR9;

VAR9 = FUN3(VAR7,
VAR3, VAR4,
VAR5, VAR6);
if (VAR7)
FUN4(VAR7);

return VAR9;
}