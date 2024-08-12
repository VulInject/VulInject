}
FUN1(VAR1);

static int FUN2(struct VAR2 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR3->private;
struct VAR7 *VAR8 = &VAR6->VAR8;
struct drm_printer VAR9 = FUN3(VAR3);

if (!FUN4(VAR6))
return -VAR10;

return FUN5(VAR8, &VAR9);
}