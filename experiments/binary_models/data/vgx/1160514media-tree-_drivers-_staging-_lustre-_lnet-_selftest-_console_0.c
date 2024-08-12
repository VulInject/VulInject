static int
FUN1(struct VAR1 *VAR2,
int VAR3, struct lnet_process_id VAR4 *VAR5,
struct list_head VAR4 *VAR6)
{
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR1 *VAR11;
struct lnet_process_id VAR12;
int VAR13;
int VAR14;



VAR13 = FUN2(NULL, &VAR11);
if (VAR13) {
FUN3("");
return -VAR15;
}

for (VAR14 = 0; VAR14 < VAR3; VAR14++) {
if (FUN4(&VAR12, &VAR5[VAR14], sizeof(VAR12))) {
VAR13 = -VAR16;
goto VAR17;
}


if (!FUN5(VAR2, VAR12, &VAR10, 0))
FUN6(VAR2, VAR11, VAR10);
}

VAR13 = FUN7(&VAR11->VAR18,
&VAR11->VAR19, VAR20,
VAR11, VAR21, &VAR8);
if (VAR13) {
FUN3("", VAR13);
goto VAR17;
}

FUN8(VAR8, VAR22);

VAR13 = FUN9(VAR8, VAR6, NULL);

FUN10(VAR8);

FUN11(VAR11);

return VAR13;
VAR17:
FUN12(VAR11, VAR2);
FUN11(VAR11);

return VAR13;
}