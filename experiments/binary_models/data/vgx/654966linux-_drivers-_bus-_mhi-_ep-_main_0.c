static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4, *VAR5;
struct mhi_result VAR6 = {};
struct VAR7 *VAR8;
int VAR9;


for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++) {
VAR8 = &VAR2->VAR8[VAR9];
if (!VAR8->VAR11.VAR12)
continue;

FUN2(&VAR8->VAR13);

if (VAR8->VAR14) {
VAR6.VAR15 = -VAR16;
VAR6.VAR17 = 0;
VAR8->FUN3(VAR8->VAR18, &VAR6);
}

VAR8->VAR19 = VAR20;
FUN4(&VAR8->VAR13);
}

FUN5(VAR2->VAR21);


FUN6(&VAR2->VAR18->VAR22, NULL, VAR23);


for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++) {
VAR8 = &VAR2->VAR8[VAR9];
if (!VAR8->VAR11.VAR12)
continue;

VAR4 = &VAR2->VAR8[VAR9].VAR11;
FUN2(&VAR8->VAR13);
FUN7(VAR2, VAR4);
FUN4(&VAR8->VAR13);
}


for (VAR9 = 0; VAR9 < VAR2->VAR24; VAR9++) {
VAR5 = &VAR2->VAR25[VAR9].VAR11;
if (!VAR5->VAR12)
continue;

FUN2(&VAR2->VAR26);
FUN7(VAR2, VAR5);
FUN4(&VAR2->VAR26);
}


FUN7(VAR2, &VAR2->VAR27->VAR11);

FUN8(VAR2);
FUN9(VAR2);

VAR2->VAR28 = false;
}