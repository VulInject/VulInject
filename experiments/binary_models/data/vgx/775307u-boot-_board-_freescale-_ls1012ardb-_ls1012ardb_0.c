static int FUN1(void)
{
u8 VAR1[2] = {0xfc, 0xf5}, VAR2[2] = {0x7, 0x3};
u8 VAR3 = 0x24;
int VAR4, VAR5, VAR6 = 0;

struct VAR7 *VAR8;

VAR4 = FUN2(VAR6, VAR3,
1, &VAR8);
if (VAR4) {
FUN3("", VAR9,
VAR6);
return -VAR10;
}
FUN4(VAR6);


for (VAR5 = 0; VAR5 < sizeof(VAR1); VAR5++) {
VAR4 = FUN5(VAR8, VAR2[VAR5], &VAR1[VAR5], 1);
VAR4 = FUN6(VAR3, VAR2[VAR5], 1, &VAR1[VAR5], 1);
if (VAR4) {
FUN3("",
VAR3, VAR2[VAR5], VAR1[VAR5]);
goto VAR11;
}
}

VAR11:
return VAR4;
}