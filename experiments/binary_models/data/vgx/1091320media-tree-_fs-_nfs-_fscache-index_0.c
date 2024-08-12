static VAR1 FUN1(const void *VAR2,
void *VAR3, uint16_t VAR4)
{
struct nfs_fscache_inode_auxdata VAR5;
const struct VAR6 *VAR7 = VAR2;

memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR8 = VAR7->VAR9.VAR10;
VAR5.VAR11 = VAR7->VAR9.VAR12;
VAR5.VAR13 = VAR7->VAR9.VAR14;

if (FUN2(&VAR7->VAR9)->VAR15->VAR16->VAR17 == 4)
VAR5.VAR18 = VAR7->VAR9.VAR19;

if (VAR4 > sizeof(VAR5))
VAR4 = sizeof(VAR5);

memcpy(VAR3, &VAR5, VAR4);
return VAR4;
}