static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
void *VAR6 = FUN2(VAR4);
if (VAR6 == NULL)
return FUN3(VAR2, "");

VAR7 *VAR8 = (VAR7 *)VAR6;
VAR9 *VAR10 = NULL;

if (VAR5) {
VAR10 = &VAR8->VAR11;
} else {
VAR10 = &VAR8->VAR12;
}

uint32_t VAR13 = 0;
FUN4(VAR2);
VAR14 *VAR15 = NULL;
FUN5(VAR15, &VAR10->VAR16, VAR17)
{
FUN6(VAR2, VAR13++);

FUN4(VAR2);

FUN7(VAR2, "");
FUN6(VAR2, VAR15->VAR18);
FUN8(VAR2, -3);

FUN7(VAR2, "");
FUN9(VAR2, VAR15->VAR19, VAR15->VAR18);

FUN8(VAR2, -3);
FUN8(VAR2, -3);
}

return 1;
}