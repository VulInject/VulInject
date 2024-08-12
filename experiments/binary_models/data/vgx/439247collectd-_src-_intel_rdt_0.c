static void FUN1(void) {
char VAR1[VAR2 * 4];

if (VAR3 == NULL)
return;
if (VAR3->VAR1.VAR4 == 0)
return;

FUN2(VAR5 "");
FUN2(VAR5 "" VAR6, VAR3->VAR1.VAR4);

for (size_t VAR7 = 0; VAR7 < VAR3->VAR1.VAR4; VAR7++) {
VAR8 *VAR9 = VAR3->VAR1.VAR10 + VAR7;

memset(VAR1, 0, sizeof(VAR1));
for (size_t VAR11 = 0; VAR11 < VAR9->VAR12; VAR11++) {
FUN3(VAR1 + strlen(VAR1), sizeof(VAR1) - strlen(VAR1) - 1, "",
VAR9->VAR1[VAR11]);
}

FUN2(VAR5 "", VAR7);
FUN2(VAR5 "", VAR9->VAR13);
FUN2(VAR5 "", VAR1);
FUN2(VAR5 "", VAR3->VAR14[VAR7]);
}

return;
}