static VAR1 FUN1(struct VAR2 *VAR3,
const char *VAR4, size_t VAR5,
int (*VAR6)(struct VAR7 *, unsigned long))
{
struct VAR7 *VAR8 = FUN2(VAR3);
char *VAR9;
unsigned long VAR10;
int VAR11;

if (!FUN3(FUN4(VAR8->VAR12)->VAR13, VAR14))
return -VAR15;

VAR10 = FUN5(VAR4, &VAR9, 0);
if (VAR9 == VAR4)
return -VAR16;

if (!FUN6())
return FUN7();

VAR11 = (*VAR6)(VAR8, VAR10);
if (!VAR11)
FUN8(VAR8->VAR12);
FUN9();

return VAR11 ? VAR11 : VAR5;
}