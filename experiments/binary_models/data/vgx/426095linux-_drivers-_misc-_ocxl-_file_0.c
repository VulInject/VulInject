static long FUN1(struct VAR1 *VAR2,
struct ocxl_ioctl_attach VAR3 *VAR4)
{
struct ocxl_ioctl_attach VAR5;
u64 VAR6 = 0;

FUN2("", VAR7, VAR2->VAR8);

if (FUN3(&VAR5, VAR4, sizeof(VAR5)))
return -VAR9;


if (VAR5.VAR10 || VAR5.VAR11 || VAR5.VAR12)
return -VAR13;

VAR6 = VAR5.VAR6 & FUN4(VAR14);
return FUN5(VAR2, VAR6, VAR15->VAR16);
}