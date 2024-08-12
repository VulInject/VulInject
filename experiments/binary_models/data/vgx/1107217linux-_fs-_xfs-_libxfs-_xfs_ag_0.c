struct VAR1 *
FUN1(
struct VAR2	*VAR3,
xfs_agnumber_t		VAR4,
unsigned int		VAR5)
{
struct VAR1	*VAR6;
int			VAR7;
int			VAR8;

FUN2();
VAR7 = FUN3(&VAR3->VAR9,
(void **)&VAR6, VAR4, 1, VAR5);
if (VAR7 <= 0) {
FUN4();
return NULL;
}
VAR8 = FUN5(&VAR6->VAR10);
FUN4();
FUN6(VAR3, VAR6->VAR11, VAR8, VAR12);
return VAR6;
}