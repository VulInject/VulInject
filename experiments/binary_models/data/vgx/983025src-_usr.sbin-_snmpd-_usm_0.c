void			 FUN1(void *, VAR1);
int			 FUN2(struct VAR2 *, VAR3, char *,
VAR1);
struct VAR4	*FUN3(struct VAR2 *,
struct VAR4 *);
VAR5			 FUN4(struct VAR2 *, VAR6 *, int,
VAR6 *, int);
char			*FUN5(const VAR7 *, char *, int *);

void
FUN6(void)
{
struct VAR8	*VAR9;
const VAR7	*VAR10;
char		*VAR11;
int		 VAR12;

FUN7(VAR9, &VAR13, VAR14) {
if ((VAR10 = FUN8(VAR9->VAR15)) == NULL)
continue;


VAR12 = 0;
VAR11 = FUN5(VAR10, VAR9->VAR16, &VAR12);
free(VAR9->VAR16);
VAR9->VAR16 = VAR11;
VAR9->VAR17 = VAR12;


if (VAR9->VAR18 != VAR19) {
FUN9(&VAR9->VAR20, sizeof(VAR9->VAR20));

VAR12 = VAR21;
VAR11 = FUN5(VAR10, VAR9->VAR22, &VAR12);
free(VAR9->VAR22);
VAR9->VAR22 = VAR11;
}
}
return;
}