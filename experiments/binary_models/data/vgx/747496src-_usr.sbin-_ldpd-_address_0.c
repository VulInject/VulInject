static int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct tlv	 VAR5;
int		 VAR6;

memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR7 = FUN2(VAR8);
if (VAR4)
VAR5.VAR9 = FUN2(VAR10);
VAR6 = FUN3(VAR2, &VAR5, sizeof(VAR5));
if (VAR4)
VAR6 |= FUN3(VAR2, VAR4, VAR10);

return (VAR6);
}