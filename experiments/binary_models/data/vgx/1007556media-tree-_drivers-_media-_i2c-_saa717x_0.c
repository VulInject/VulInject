static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;
char *VAR8[4] = {
"", "", "", ""
};

VAR7 = VAR9;

switch (VAR4->VAR10) {
case VAR11:
VAR7 = VAR12;
break;
case VAR13:
VAR7 = VAR9;
break;
case VAR14:
VAR7 = VAR15;
break;
case VAR16:
VAR7 = VAR17;
break;
}

FUN3(1, VAR18, VAR2, "",
VAR8[VAR7]);
VAR6->VAR19 = VAR7;


FUN4(VAR2, VAR6->VAR19);
return 0;
}