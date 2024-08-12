static int FUN1(struct VAR1 *VAR2, const void *VAR3,
size_t VAR4, __le32 VAR5)
{
const struct VAR6 *VAR7 = VAR3;
void VAR8 *VAR9;
size_t VAR10 = VAR4 - sizeof(*VAR7);

if (VAR4 < sizeof(*VAR7) + sizeof(VAR11)) {
FUN2(VAR2, "", VAR4);
return -VAR12;
}

if (!FUN3(VAR2, &VAR9, VAR5, VAR10, ""))
return -VAR12;
FUN4(VAR2, "", FUN5(VAR5), VAR10);
FUN6(VAR9, VAR7->VAR3, VAR10);
FUN7(); 

return 0;
}