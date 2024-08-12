static void FUN1(void)
{
int VAR1[3][2] = {
{ VAR2, 1 },
{ VAR3, 1 },
{ VAR4, 1 },
};
int VAR5;


for (VAR5 = 0; VAR5 < 3; VAR5++) {
FUN2(VAR6, VAR1[VAR5][0], VAR1[VAR5][1]);
FUN3(VAR6, VAR1[VAR5][0], 0);
FUN4(VAR6, VAR1[VAR5][0], 0);
}
}