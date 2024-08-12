static int
FUN1(VAR1 *VAR2)
{
int VAR3;
ssize_t VAR4;
struct VAR5 *VAR6;
void *VAR7;
VAR8 *VAR9;

if (VAR2->VAR10 != 0) {
FUN2("");
return (VAR11);
}

VAR2->VAR12 = VAR6 =
FUN3(sizeof (struct VAR5), VAR13);


if (FUN4(&VAR6->VAR14, "") == -1) {
FUN2("");
FUN5(VAR2->VAR12, sizeof (struct VAR5));
VAR2->VAR12 = NULL;
return (VAR11);
}
if (FUN4(&VAR6->VAR15, "") == -1) {
FUN2("");
FUN5(VAR2->VAR12, sizeof (struct VAR5));
VAR2->VAR12 = NULL;
return (VAR11);
}


if ((VAR4 = FUN4(&VAR6->VAR16, "")) == -1) {
FUN2("");
FUN5(VAR2->VAR12, sizeof (struct VAR5));
VAR2->VAR12 = NULL;
return (VAR11);
} else if (VAR4 < sizeof (VAR6->VAR16)) {
FUN2("",
sizeof (VAR6->VAR16), VAR4);
FUN5(VAR2->VAR12, sizeof (struct VAR5));
VAR2->VAR12 = NULL;
return (VAR11);
}


VAR4 = FUN6(VAR6->VAR14, VAR6->VAR15) *
sizeof (VAR8);
for (VAR3 = 0; VAR3 < VAR17; VAR3++) {
if (VAR6->VAR16[VAR3] == NULL)
continue; 
VAR7 = FUN7(VAR4, VAR13);
if (FUN8(VAR7, VAR4, (VAR18)VAR6->VAR16[VAR3]) != VAR4) {
FUN2("",
VAR3, VAR6->VAR16[VAR3]);
FUN5(VAR7, VAR4);
FUN9(VAR2);
return (VAR11);
}
VAR6->VAR16[VAR3] = VAR7;
}


VAR2->VAR10 = 0;
if ((VAR9 = FUN10(VAR6)) != NULL)
VAR2->VAR10 = (VAR18)VAR9->VAR19;

return (VAR20);
}