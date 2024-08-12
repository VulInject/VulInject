static struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4;
struct VAR5 *VAR6, **VAR7;
int VAR8 = 0;
int VAR9;
int VAR10;

if (!VAR3->VAR11 || !VAR3->VAR11[0]) {
FUN2(VAR12 "");
return NULL;
}
VAR7 = VAR3->VAR13;	
for (VAR9 = 0, VAR10 = 0;;) {
VAR7++;
if (VAR7 >= &VAR3->VAR11[VAR3->VAR14] || !*VAR7)
VAR7 = VAR3->VAR11;
VAR6 = *VAR7;
if (!VAR6->VAR15) {
VAR10 = 1;
VAR8 += VAR6->VAR16;
}
if (VAR6->VAR16 < VAR6->VAR17
&& (VAR9 || !VAR6->VAR15)
&& VAR6->VAR18->VAR19) {
VAR4 = FUN3(VAR3, VAR6);
if (VAR4) {
FUN4(VAR6);
VAR3->VAR13 = VAR7;
return VAR4;
}
}
if (VAR7 == VAR3->VAR13) {	
if (!VAR9 && !VAR10)
VAR9 = 1;
else
break;
}
}
if (VAR8 == 0) {
VAR3->VAR20++;
VAR3->VAR21 |= VAR22;
}
return NULL;
}