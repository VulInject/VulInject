int FUN1(struct VAR1 *VAR2, VAR3 **VAR4, const char *VAR5,
size_t VAR6)
{
u8 VAR7[16];
int VAR8;

if (VAR2->VAR9)
return -VAR10;

VAR8 = FUN2(VAR2, VAR7, VAR5, VAR6);
if (VAR8)
return VAR8;

FUN3(*VAR4);
*VAR4 = FUN4(VAR7, sizeof(VAR7), VAR11);
if (!(*VAR4))
return -VAR12;

return 0;
}