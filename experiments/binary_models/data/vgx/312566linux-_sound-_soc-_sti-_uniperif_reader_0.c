static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5; 

unsigned int VAR6[4] = {
0x04060002, 0x0C0E080A, 0x14161012, 0x1C1E181A};

VAR5 = FUN2(VAR2);


FUN3(VAR4);
FUN4(VAR4);


FUN5(VAR4, VAR5 / 4 / 2);

FUN6(VAR4);
FUN7(VAR4);
FUN8(VAR4);


FUN9(VAR4, VAR6);
FUN10(VAR4, 1_2, VAR6[VAR7]);
FUN10(VAR4, 3_4, VAR6[VAR8]);
FUN10(VAR4, 5_6, VAR6[VAR9]);
FUN10(VAR4, 7_8, VAR6[VAR10]);

return 0;
}