static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
int32_t VAR4, const struct VAR5 *VAR6, size_t VAR7, int VAR8)
{
struct VAR9	*VAR10;



if (VAR4 == -1) {
if ((VAR10 = calloc(1, sizeof(struct VAR9))) == NULL) {
FUN2("");
return 0;
}
VAR10->VAR4 = -1;
VAR10->VAR11 = NULL;
FUN3(VAR3, VAR10, VAR12);
return 1;
}



if (VAR4 < 0 || (VAR13)VAR4 >= VAR7) {
FUN4("",
VAR4, VAR7);
return 0;
} else if (FUN5(VAR6[VAR4].VAR14.VAR15)) {
FUN4(""
"", VAR6[VAR4].VAR16);
return 0;
} else if (FUN6(VAR6[VAR4].VAR14.VAR15)) {
FUN4(""
"", VAR6[VAR4].VAR16);
return 0;
} else if (!FUN7(VAR6[VAR4].VAR14.VAR15)) {
FUN4(""
"", VAR6[VAR4].VAR16);
return 0;
}

if ((VAR10 = calloc(1, sizeof(struct VAR9))) == NULL) {
FUN2("");
return 0;
}
VAR10->VAR4 = VAR4;
VAR10->VAR11 = NULL;
FUN3(VAR3, VAR10, VAR12);



if (!VAR1->VAR17->VAR18) {
VAR10->VAR11 = FUN8(VAR1, VAR8, VAR6[VAR4].VAR16);
if (VAR10->VAR11 == NULL) {
FUN9("");
return 0;
}
}
return 1;
}