void	FUN1(void *);
void	FUN2(void *);

struct VAR1 *
FUN3(void *VAR2, void (*VAR3)(void *), unsigned int VAR4)
{
struct VAR1 *VAR5;

if (VAR4 == 0)
FUN4("");

if (VAR6 == NULL &&
(VAR6 = FUN5("", 1, VAR7, 0)) == NULL)
VAR6 = VAR8;

VAR5 = malloc(sizeof(*VAR5), VAR9, VAR10);
if (VAR5 == NULL)
return (NULL);

VAR5->VAR3 = VAR3;
VAR5->VAR2 = VAR2;
VAR5->VAR4 = VAR4;
FUN6(&VAR5->VAR11, VAR12, VAR5);
FUN7(&VAR5->VAR13, VAR14, VAR5);
FUN8(&VAR5->VAR15, "");

FUN1(VAR5);

return (VAR5);
}