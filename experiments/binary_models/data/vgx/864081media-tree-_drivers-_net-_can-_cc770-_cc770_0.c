struct VAR1 *FUN1(int VAR2)
{
struct VAR1 *VAR3;
struct VAR4 *VAR5;

VAR3 = FUN2(sizeof(struct VAR4) + VAR2,
VAR6);
if (!VAR3)
return NULL;

VAR5 = FUN3(VAR3);

VAR5->VAR3 = VAR3;
VAR5->VAR7.VAR8 = &VAR9;
VAR5->VAR7.VAR10 = VAR11;
VAR5->VAR7.VAR12 = VAR13;
VAR5->VAR7.VAR14 = VAR15;

memcpy(VAR5->VAR16, VAR17, sizeof(VAR17));

if (VAR2)
VAR5->VAR5 = (void *)VAR5 + sizeof(struct VAR4);

return VAR3;
}