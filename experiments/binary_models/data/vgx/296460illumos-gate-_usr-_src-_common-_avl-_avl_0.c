void
FUN1(VAR1 *VAR2, void *VAR3)
{
VAR4 *delete;
VAR4 *VAR5;
VAR4 *VAR6;
avl_node_t VAR7;
int VAR8;
int VAR9;
int VAR10;
int VAR11;
int VAR12;
size_t VAR13 = VAR2->VAR14;

FUN2(VAR2);

delete = FUN3(VAR3, VAR13);


if (delete->VAR15[0] != NULL && delete->VAR15[1] != NULL) {


VAR8 = FUN4(delete);
VAR10 = (VAR8 > 0);
VAR11 = 1 - VAR10;


for (VAR6 = delete->VAR15[VAR10];
VAR6->VAR15[VAR11] != NULL;
VAR6 = VAR6->VAR15[VAR11])
;


VAR7 = *VAR6;

*VAR6 = *delete;
if (VAR6->VAR15[VAR10] == VAR6)
VAR6->VAR15[VAR10] = &VAR7;

VAR5 = FUN5(VAR6);
if (VAR5 != NULL)
VAR5->VAR15[FUN6(VAR6)] = VAR6;
else
VAR2->VAR16 = VAR6;
FUN7(VAR6->VAR15[VAR10], VAR6);
FUN7(VAR6->VAR15[VAR11], VAR6);


delete = &VAR7;
VAR5 = FUN5(delete);
VAR5->VAR15[FUN6(delete)] = delete;
VAR12 = (delete->VAR15[1] != 0);
if (delete->VAR15[VAR12] != NULL)
FUN7(delete->VAR15[VAR12], delete);
}



FUN2(VAR2->VAR17 > 0);
--VAR2->VAR17;
VAR5 = FUN5(delete);
VAR12 = FUN6(delete);
if (delete->VAR15[0] != NULL)
VAR6 = delete->VAR15[0];
else
VAR6 = delete->VAR15[1];


if (VAR6 != NULL) {
FUN7(VAR6, VAR5);
FUN8(VAR6, VAR12);
}
if (VAR5 == NULL) {
VAR2->VAR16 = VAR6;
return;
}
VAR5->VAR15[VAR12] = VAR6;



do {


VAR6 = VAR5;
VAR8 = FUN4(VAR6);
VAR9 = VAR8 - (VAR12 ? 1 : -1);
VAR5 = FUN5(VAR6);
VAR12 = FUN6(VAR6);


if (VAR8 == 0) {
FUN9(VAR6, VAR9);
break;
}


if (VAR9 == 0)
FUN9(VAR6, VAR9);
else if (!FUN10(VAR2, VAR6, VAR9))
break;
} while (VAR5 != NULL);
}