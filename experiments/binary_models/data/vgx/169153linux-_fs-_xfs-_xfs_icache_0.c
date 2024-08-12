static int
FUN1(
struct VAR1	*VAR2,
enum xfs_icwalk_goal	VAR3,
struct VAR4	*VAR5)
{
struct VAR6	*VAR7;
int			VAR8 = 0;
int			VAR9 = 0;
xfs_agnumber_t		VAR10;

FUN2(VAR2, VAR10, VAR7, VAR3) {
VAR8 = FUN3(VAR7, VAR3, VAR5);
if (VAR8) {
VAR9 = VAR8;
if (VAR8 == -VAR11) {
FUN4(VAR7);
break;
}
}
}
return VAR9;
FUN5(VAR12 & VAR13);
}