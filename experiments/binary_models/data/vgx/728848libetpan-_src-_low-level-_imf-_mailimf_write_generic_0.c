static int FUN1(int (* VAR1)(void *, const char *, VAR2), void * VAR3, int * VAR4,
struct VAR5 * VAR6)
{
int VAR7;

VAR7 = FUN2(VAR1, VAR3, VAR4, "", 13);
if (VAR7 != VAR8)
return VAR7;

VAR7 = FUN3(VAR1, VAR3, VAR4, VAR6->VAR9);
if (VAR7 != VAR8)
return VAR7;

VAR7 = FUN2(VAR1, VAR3, VAR4, "", 2);
if (VAR7 != VAR8)
return VAR7;
* VAR4 = 0;

return VAR8;
}