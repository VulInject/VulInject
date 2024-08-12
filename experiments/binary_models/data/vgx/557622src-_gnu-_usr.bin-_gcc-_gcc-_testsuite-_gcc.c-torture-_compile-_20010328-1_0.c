extern int FUN1 (__const char *VAR1, struct VAR2 *VAR3);
extern int FUN2 (__const char *VAR1, struct VAR4 *VAR3);


int
FUN2 (const char *VAR5, struct VAR4 *VAR6)
{
struct statfs VAR7;

if (FUN1 (VAR5, &VAR7) < 0)
return -1;

VAR6->VAR8 = VAR7.VAR8;
VAR6->VAR9 = VAR7.VAR9;
VAR6->VAR10 = VAR7.VAR10;
VAR6->VAR11 = VAR7.VAR11;
VAR6->VAR12 = VAR7.VAR12;
VAR6->VAR13 = VAR7.VAR13;
VAR6->VAR14 = VAR7.VAR14;
VAR6->VAR15 = VAR7.VAR15;
VAR6->VAR16 = VAR7.VAR16;
memcpy (VAR6->VAR17, VAR7.VAR17, sizeof (VAR7.VAR17));

return 0;
}