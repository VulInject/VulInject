VAR1 FUN1(u32 VAR2, u32 VAR3, u32 VAR4, u32 VAR5, u32 VAR6,
u32 VAR7, u32 VAR8)
{
static u32 VAR9[VAR10][5];
VAR1 *VAR11;
int VAR12;
u32 VAR13;

VAR12 = FUN2();
VAR11 = VAR9[VAR12];

VAR11[0] = VAR4;
VAR11[1] = VAR5;
VAR11[2] = VAR6;
VAR11[3] = VAR7;
VAR11[4] = VAR8;


FUN3();
FUN4(FUN5(VAR11), FUN5(VAR11 + 5));
VAR13 = FUN6(VAR2, VAR3, FUN5(VAR11));

FUN7();

return VAR13;
}