VAR1
FUN1(
struct VAR2	*VAR2,
char		*VAR3,
size_t		VAR4)
{
struct xfs_attr_list_context VAR5;
struct attrlist_cursor_kern VAR6 = { 0 };
struct VAR7	*VAR7 = FUN2(VAR2);
int		VAR8;


memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR9 = FUN3(VAR7);
VAR5.VAR6 = &VAR6;
VAR5.VAR10 = 1;
VAR5.VAR11 = VAR4 ? VAR3 : NULL;
VAR5.VAR12 = VAR4;
VAR5.VAR13 = VAR5.VAR12;
VAR5.VAR14 = VAR15;

VAR8 = FUN4(&VAR5);
if (VAR8)
return VAR8;
if (VAR5.VAR16 < 0)
return -VAR17;

return VAR5.VAR16;
}