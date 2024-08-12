static int
FUN1(struct VAR1 *VAR1, const struct VAR2 *VAR3, size_t VAR4)
{
struct timespec	 VAR5[2];
int		 VAR6;
struct stat	 VAR7;
const struct VAR8 *VAR9;

VAR9 = &VAR3->VAR10[VAR4];
assert(FUN2(VAR9->VAR7.VAR11));



if (!VAR1->VAR12->VAR13)
return 1;
if (VAR1->VAR12->VAR14)
return 1;

if (FUN3(VAR3->VAR15, VAR9->VAR16, &VAR7, VAR17) == -1) {
FUN4("", VAR9->VAR16);
return 0;
}
if (!FUN2(VAR7.VAR18)) {
FUN5("", VAR9->VAR16);
return 0;
}



if (VAR3->VAR19[VAR4] ||
(VAR1->VAR12->VAR20 &&
VAR7.VAR21 != VAR9->VAR7.VAR22)) {
VAR5[0].VAR23 = FUN6(NULL);
VAR5[0].VAR24 = 0;
VAR5[1].VAR23 = VAR9->VAR7.VAR22;
VAR5[1].VAR24 = 0;
VAR6 = FUN7(VAR3->VAR15, VAR9->VAR16, VAR5, 0);
if (VAR6 == -1) {
FUN4("", VAR9->VAR16);
return 0;
}
FUN8("", VAR9->VAR16);
}



if (VAR3->VAR19[VAR4] ||
(VAR1->VAR12->VAR25 && VAR7.VAR18 != VAR9->VAR7.VAR11)) {
VAR6 = FUN9(VAR3->VAR15, VAR9->VAR16, VAR9->VAR7.VAR11, 0);
if (VAR6 == -1) {
FUN4("", VAR9->VAR16);
return 0;
}
FUN8("", VAR9->VAR16);
}

return 1;
}