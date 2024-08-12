int
FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4,
enum nvkm_subdev_type VAR5, int VAR6, struct VAR7 **VAR8)
{
struct VAR7 *VAR9;

if (!(VAR9 = *VAR8 = FUN2(sizeof(*VAR9), VAR10)))
return -VAR11;

FUN3(&VAR7, VAR4, VAR5, VAR6, &VAR9->VAR12);
VAR9->VAR2 = VAR2;
FUN4(&VAR9->VAR13);
FUN5(&VAR9->VAR14);
return 0;
}