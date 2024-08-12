void FUN1(void)
{
struct VAR1 *VAR2 = VAR3;
struct VAR4 *VAR5, *VAR6, *VAR7;

for (;;) {

VAR5 = FUN2(VAR2->VAR8);
do {
VAR6 = NULL;
if (!VAR5) {
if (VAR2->VAR9 & VAR10)
VAR6 = &VAR11;
else
break;
}
} while (!FUN3(&VAR2->VAR8, &VAR5, VAR6));

if (!VAR5)
break;

FUN4(&VAR2->VAR12);
FUN5(&VAR2->VAR12);

do {
VAR7 = VAR5->VAR7;
VAR5->FUN6(VAR5);
VAR5 = VAR7;
FUN7();
} while (VAR5);
}
}