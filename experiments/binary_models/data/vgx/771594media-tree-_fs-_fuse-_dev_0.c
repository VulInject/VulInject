static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
struct VAR4 *VAR5)
{
struct fuse_notify_inval_inode_out VAR6;
int VAR7 = -VAR8;

if (VAR3 != sizeof(VAR6))
goto VAR7;

VAR7 = FUN2(VAR5, &VAR6, sizeof(VAR6));
if (VAR7)
goto VAR7;
FUN3(VAR5);

FUN4(&VAR2->VAR9);
VAR7 = -VAR10;
if (VAR2->VAR11) {
VAR7 = FUN5(VAR2->VAR11, VAR6.VAR12,
VAR6.VAR13, VAR6.VAR14);
}
FUN6(&VAR2->VAR9);
return VAR7;

VAR7:
FUN3(VAR5);
return VAR7;
}