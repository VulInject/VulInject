static void
FUN1(void *VAR1)
{
(void)VAR1;
ed25519_keypair_t VAR2, VAR3;
VAR4 *VAR5[2] = {NULL, NULL}, *VAR6 = NULL;
VAR4 *VAR7[2] = {NULL, NULL};
time_t VAR8 = 1412094534;
VAR9 *VAR10 = NULL;
char *VAR11 = NULL;

FUN2(0,VAR12,FUN3(&VAR2, 0));
FUN2(0,VAR12,FUN3(&VAR3, 0));

for (int VAR13 = 0; VAR13 <= 1; ++VAR13) {
uint32_t VAR14 = VAR13 ? VAR15 : 0;

VAR5[VAR13] = FUN4(&VAR2, 5, &VAR3.VAR16, VAR8, 10000, VAR14);
FUN5(VAR5[VAR13]);

FUN6(VAR5[VAR13]->VAR17, VAR12, 0);
FUN6(VAR5[VAR13]->VAR18, VAR12, 1);
FUN6(VAR5[VAR13]->VAR19, VAR12, 0);
FUN6(VAR5[VAR13]->VAR20, VAR12, 1);
FUN2(VAR5[VAR13]->VAR21, VAR12, 5);
FUN7(VAR5[VAR13]->VAR22.VAR16, VAR12, &VAR3.VAR16.VAR16, 32);
FUN7(VAR5[VAR13]->VAR23.VAR16, VAR12, &VAR2.VAR16.VAR16, 32);
FUN2(VAR5[VAR13]->VAR24, VAR12, VAR13);

FUN5(VAR5[VAR13]->VAR25);
FUN2(VAR5[VAR13]->VAR26, VAR12, 104 + 36 * VAR13);
FUN2(VAR5[VAR13]->VAR25[0], VAR12, 1);
FUN2(VAR5[VAR13]->VAR25[1], VAR12, 5);

VAR7[VAR13] = FUN8(VAR5[VAR13]->VAR25, VAR5[VAR13]->VAR26);
FUN5(VAR7[VAR13]);
FUN2(VAR5[VAR13]->VAR26, VAR12, VAR7[VAR13]->VAR26);
FUN7(VAR5[VAR13]->VAR25, VAR12, VAR7[VAR13]->VAR25,
VAR5[VAR13]->VAR26);
FUN6(VAR7[VAR13]->VAR17, VAR12, 0);
FUN6(VAR7[VAR13]->VAR18, VAR12, 0);
FUN6(VAR7[VAR13]->VAR19, VAR12, 0);
FUN6(VAR7[VAR13]->VAR20, VAR12, 0);


FUN2(FUN9(VAR7[VAR13], &VAR2.VAR16, VAR8 + 30000),
VAR27, 0);
FUN6(VAR7[VAR13]->VAR19, VAR12, 1);
VAR7[VAR13]->VAR19 = 0;


FUN2(FUN9(VAR7[VAR13], &VAR3.VAR16, VAR8), VAR27, 0);
FUN6(VAR7[VAR13]->VAR17, VAR12, 1);
VAR7[VAR13]->VAR17 = 0;


int VAR28 = FUN9(VAR7[VAR13], NULL, VAR8);
FUN2(VAR28 < 0, VAR12, VAR13 == 0);
FUN6(VAR7[VAR13]->VAR17, VAR12, 0);
FUN5(VAR7[VAR13]->VAR18 == (VAR13 != 0));
FUN5(VAR7[VAR13]->VAR20 == (VAR13 != 0));
VAR7[VAR13]->VAR17 = 0;
VAR7[VAR13]->VAR18 = 0;
VAR7[VAR13]->VAR20 = 0;


FUN2(FUN9(VAR7[VAR13], &VAR2.VAR16, VAR8), VAR12, 0);
FUN6(VAR7[VAR13]->VAR17, VAR12, 0);
FUN6(VAR7[VAR13]->VAR18, VAR12, 1);
FUN6(VAR7[VAR13]->VAR19, VAR12, 0);
FUN6(VAR7[VAR13]->VAR20, VAR12, 1);
}



VAR6 = FUN8(VAR5[0]->VAR25, VAR5[0]->VAR26-1);
FUN10(NULL, VAR12, VAR6);


VAR5[0]->VAR25[0] = 99;
VAR6 = FUN8(VAR5[0]->VAR25, VAR5[0]->VAR26);
FUN10(NULL, VAR12, VAR6);
VAR5[0]->VAR25[0] = 1;


VAR10 = FUN11(VAR5[0]->VAR26 + 1);
memcpy(VAR10, VAR5[0]->VAR25, VAR5[0]->VAR26);
VAR6 = FUN8(VAR10, VAR5[0]->VAR26+1);
FUN10(NULL, VAR12, VAR6);


FUN12(VAR10);
VAR10 = FUN11(104 + 36 * 2);
VAR10[0] = 1; 
VAR10[1] = 5; 
VAR10[6] = 1; 
VAR10[39] = 2; 
VAR10[41] = 32; 
VAR10[42] = 4; 
VAR10[77] = 32; 
VAR10[78] = 4; 
VAR6 = FUN8(VAR10, 104 + 36 * 2);
FUN10(NULL, VAR12, VAR6);

VAR29:
FUN13(VAR5[0]);
FUN13(VAR5[1]);
FUN13(VAR7[0]);
FUN13(VAR7[1]);
FUN13(VAR6);
FUN12(VAR10);
FUN12(VAR11);
}