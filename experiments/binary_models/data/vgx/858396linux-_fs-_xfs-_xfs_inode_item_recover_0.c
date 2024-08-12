static inline VAR1
FUN1(
struct VAR2		*VAR3,
const xfs_log_timestamp_t	VAR4)
{
struct VAR5	*VAR6;
struct VAR7	*VAR8;
xfs_timestamp_t			VAR9;

if (FUN2(VAR3))
return FUN3(VAR4);

VAR6 = (struct VAR5 *)&VAR9;
VAR8 = (struct VAR7 *)&VAR4;
VAR6->VAR10 = FUN4(VAR8->VAR10);
VAR6->VAR11 = FUN4(VAR8->VAR11);

return VAR9;
}