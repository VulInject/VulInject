int
main(void)
{
int VAR1, VAR2;
char VAR3[VAR4], VAR5[VAR4];
char VAR6[VAR4], VAR7[VAR4];
struct VAR8 *VAR8, *VAR9;
const char *VAR10[] = { "", "", "" };

FUN1();

for (VAR2 = 0; VAR2 < 0xff; VAR2++) {
if ((VAR8 = FUN2(VAR2)) == NULL ||
(VAR9 = FUN2(VAR2)) == NULL)
continue;

FUN3 ("", VAR2,
VAR10[VAR8->VAR11->VAR12],
VAR8->VAR11->VAR13);

VAR1 = FUN4(VAR8);

FUN5(VAR8, VAR3);
FUN5(VAR9, VAR5);

FUN6(VAR8, VAR6, VAR5);
FUN6(VAR9, VAR7, VAR3);

if (memcmp (VAR6, VAR7, VAR1)) {
FUN3("");
return (1);
} else
FUN3("");

FUN7(VAR8);
FUN7(VAR9);
}

return (0);
}