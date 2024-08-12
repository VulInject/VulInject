int
FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR4;
uid_t			 VAR5;

VAR5 = FUN2(VAR2->VAR6);
if (VAR5 == (VAR7)-1)
return (0);

VAR4 = FUN3(VAR5);
if (VAR4 == NULL)
return (0);
if (VAR4->VAR8 & VAR9)
VAR2->VAR8 |= VAR10;
return (1);
}