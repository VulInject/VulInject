static int
FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4, struct VAR5 *VAR6,
struct VAR7 *VAR7, const char *VAR8, const void *VAR9,
size_t VAR10, int VAR11)
{
struct xfs_da_args	VAR12 = {
.VAR13		= FUN2(VAR7),
.VAR14	= VAR2->VAR11,
.VAR15	= VAR11,
.VAR8		= VAR8,
.VAR16	= strlen(VAR8),
.VAR9		= (void *)VAR9,
.VAR17	= VAR10,
};
int			VAR18;

VAR18 = FUN3(&VAR12);
if (!VAR18 && (VAR2->VAR11 & VAR19))
FUN4(VAR7, VAR8);
return VAR18;
}