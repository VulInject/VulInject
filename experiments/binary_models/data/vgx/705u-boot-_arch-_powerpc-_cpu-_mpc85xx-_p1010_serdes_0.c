void FUN1(void)
{
VAR1 *VAR2 = (void *)VAR3;
u32 VAR4 = FUN2(&VAR2->VAR4);
u32 VAR5 = (VAR4 & VAR6) >>
VAR7;
int VAR8;

if (VAR9 & (1 << VAR10) &&
VAR11 & (1 << VAR10))
return;

FUN3("", VAR5);

if (VAR5 >= FUN4(VAR12)) {
FUN5("", VAR5);
return;
}
for (VAR8 = 0; VAR8 < VAR13; VAR8++) {
enum srds_prtcl VAR14 = VAR12[VAR5][VAR8];
VAR9 |= (1 << VAR14);
}


VAR9 |= (1 << VAR10);

if (VAR5 >= FUN4(VAR15)) {
FUN5("", VAR5);
return;
}

for (VAR8 = 0; VAR8 < VAR16; VAR8++) {
enum srds_prtcl VAR14 = VAR15[VAR5][VAR8];
VAR11 |= (1 << VAR14);
}


VAR11 |= (1 << VAR10);
}