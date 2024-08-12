VAR1 *
FUN1(
VAR1	*VAR2,	
VAR1	*VAR3,	
struct VAR4 *VAR5)
{
VAR1	*VAR6; 
int		VAR7; 
XDR		VAR8, VAR9;

if (!FUN2(VAR5, 1,
FUN3(VAR10, VAR2)))
return (NULL);

(void) memset(&VAR8, 0, sizeof (VAR8));
(void) memset(&VAR9, 0, sizeof (VAR9));
FUN4(&VAR8, VAR5->VAR11, VAR5->VAR12,
VAR13);
FUN4(&VAR9, VAR5->VAR11, VAR5->VAR12,
VAR14);


if (VAR3) {
(void) memset(VAR3, 0, sizeof (VAR1));
VAR6 = VAR3;
} else
VAR6 = calloc(1, sizeof (VAR1));

if (VAR6 == NULL)
return (NULL);


(void) FUN5(&VAR8, 0);
VAR7 = FUN6(&VAR8, VAR2);
if (VAR7 == VAR15)
return (NULL);


(void) FUN5(&VAR9, 0);
VAR7 = FUN6(&VAR9, VAR6);
if (VAR7 == VAR15)
return (NULL);


return (VAR6);
}