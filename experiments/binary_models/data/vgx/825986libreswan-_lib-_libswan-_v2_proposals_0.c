bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR3,
shunk_t VAR4)
{
FUN2(VAR5, ""VAR6"",
FUN3(VAR4), VAR2->VAR7->VAR8);

if (VAR4.VAR9 == 0) {

FUN4(VAR2, "",
VAR2->VAR7->VAR8);
return false;
}

do {

shunk_t VAR10 = FUN5(&VAR4, NULL, "");
struct VAR11 *VAR11 = FUN6(VAR2);
switch (FUN7(VAR2, VAR11, VAR10)) {
case VAR12:
FUN8(VAR2->VAR13 != NULL);
FUN9(&VAR11);
return false;
case VAR14:
FUN8(VAR2->VAR13 == NULL);
FUN9(&VAR11);
break;
case VAR15:
FUN8(VAR2->VAR13 == NULL);
FUN10(VAR3, &VAR11);
break;
}
} while (VAR4.VAR16 != NULL);
return true;
}