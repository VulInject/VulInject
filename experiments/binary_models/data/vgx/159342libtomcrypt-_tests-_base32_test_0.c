int FUN1(void)
{
unsigned char VAR1[100], VAR2[100];
char VAR3[160];
unsigned char VAR4[] = { 0x61,0xc2,0xcb,0xbc,0x5e,0x6d,0x2a,0x7a,0x1a,0x19,0x1a,0xae,0xc9,0x02,0xd4,0xbf,0x7d };
const int VAR5[4] = {
VAR6,
VAR7,
VAR8,
VAR9
};
const char *VAR10[4] = {
"",
"",
"",
""
};
unsigned long VAR11, VAR12, VAR13;
int VAR14;

for (VAR14 = 0; VAR14 < 4; VAR14++) {
for (VAR11 = 0; VAR11 < 100; VAR11++) {
FUN2(FUN3(VAR1, VAR11, &VAR15) == VAR11);
VAR12 = sizeof(VAR3);
FUN4(FUN5(VAR1, VAR11, VAR3, &VAR12, VAR5[VAR14]));
VAR13 = sizeof(VAR2);
FUN4(FUN6(VAR3, VAR12, VAR2, &VAR13, VAR5[VAR14]));
FUN4(FUN7(VAR2, VAR13, VAR1, VAR11, "", VAR14 * 100 + VAR11));
}
}

for (VAR14 = 0; VAR14 < 4; VAR14++) {
VAR12 = sizeof(VAR3);
FUN4(FUN5(VAR4, sizeof(VAR4), VAR3, &VAR12, VAR5[VAR14]));
FUN4(FUN7(VAR3, VAR12, VAR10[VAR14], FUN8(VAR10[VAR14]), "", VAR14));
VAR13 = sizeof(VAR2);
FUN4(FUN6(VAR3, VAR12, VAR2, &VAR13, VAR5[VAR14]));
FUN4(FUN7(VAR2, VAR13, VAR4, sizeof(VAR4), "", VAR14));
}

return VAR16;
}