int FUN1(struct VAR1 *VAR2, bool VAR3,
void *VAR4, u32 VAR5)
{
struct VAR6 *VAR7;
int VAR8;

FUN2(VAR9, "");

VAR7 = FUN3(sizeof(*VAR7), VAR10);
if (!VAR7)
return -VAR11;


VAR7->VAR12 = VAR3;
VAR7->VAR13 = VAR5;
memcpy(VAR7->VAR14, VAR4, VAR5 * VAR15);

VAR8 = FUN4(VAR2, VAR16,
VAR7, sizeof(*VAR7));
if (VAR8 < 0) {
FUN5("", VAR8);
goto VAR17;
}

VAR17:
FUN6(VAR7);
return VAR8;
}