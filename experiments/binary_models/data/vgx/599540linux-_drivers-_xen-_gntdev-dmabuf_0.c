long FUN1(struct VAR1 *VAR2,
struct ioctl_gntdev_dmabuf_imp_to_refs VAR3 *VAR4)
{
struct ioctl_gntdev_dmabuf_imp_to_refs VAR5;
struct VAR6 *VAR6;
long VAR7;

if (FUN2(&VAR5, VAR4, sizeof(VAR5)) != 0)
return -VAR8;

if (FUN3(FUN4(VAR5.VAR9)))
return -VAR10;

VAR6 = FUN5(VAR2->VAR11,
VAR2->VAR12, VAR5.VAR13,
VAR5.VAR9, VAR5.VAR14);
if (FUN6(VAR6))
return FUN7(VAR6);

if (FUN8(VAR4->VAR15, VAR6->VAR4.VAR16.VAR15,
sizeof(*VAR4->VAR15) * VAR5.VAR9) != 0) {
VAR7 = -VAR8;
goto VAR17;
}
return 0;

VAR17:
FUN9(VAR2->VAR11, VAR5.VAR13);
return VAR7;
}