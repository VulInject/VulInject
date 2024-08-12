static int FUN1(int VAR1, void (*VAR2)(struct VAR3 *), u64 VAR4)
{
unsigned long VAR5;
int VAR6 = FUN2();
int VAR7 = 1;

FUN3(VAR1 == VAR6);
FUN3(VAR1 < 0 && VAR1 != VAR8);

if (FUN4(!VAR9))
return 0;


FUN5(&VAR5);
while (VAR10) {
FUN6(&VAR5);
FUN7();
FUN5(&VAR5);
}

VAR11 = VAR2;

if (VAR1 < 0) {

FUN8(&VAR12, VAR13);
FUN9(VAR6, &VAR12);
} else {

FUN10(VAR1, &VAR12);
}
VAR10++;
FUN11();

FUN12(VAR1);

while (!FUN13(&VAR12)) {
FUN14(1);
if (VAR4) {
VAR4--;
if (!VAR4)
break;
}
}

FUN15();
if (!FUN13(&VAR12)) {

VAR7 = 0;
FUN16(&VAR12);
}
VAR10--;
FUN6(&VAR5);

return VAR7;
}