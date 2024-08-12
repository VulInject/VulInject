static int FUN1(VAR1 *VAR2, void *VAR3, VAR4 *VAR5) {
VAR6 *VAR7 = VAR3;
const char *VAR8;
VAR9 *VAR10;
uint32_t VAR11;
uid_t VAR12;
int VAR13;

VAR13 = FUN2(VAR2, "", &VAR8, &VAR11);
if (VAR13 < 0)
return VAR13;

if (!FUN3(VAR11))
return FUN4(VAR5, VAR14, "" VAR15, VAR11);

VAR10 = FUN5(VAR7->VAR16, VAR8);
if (!VAR10)
return FUN4(VAR5, VAR17, "", VAR8);

if (VAR10->class != VAR18)
return FUN6(VAR5, VAR14, "");

VAR13 = FUN7(VAR10, VAR11, &VAR12);
if (VAR13 == -VAR19)
return FUN4(VAR5, VAR20, "", VAR8);
if (VAR13 < 0)
return VAR13;

return FUN8(VAR2, "", (VAR21) VAR12);
}