void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8 = VAR6->VAR8;
unsigned int VAR9[3] = {};

dma_addr_t VAR10;
bool VAR11;

if (VAR8->VAR12 == VAR13) {
unsigned int VAR14 = VAR6->VAR15 >> 16;
unsigned int VAR16;

VAR9[0] = FUN2(VAR8->VAR17[0]);


VAR16 = (VAR14 - 1) & (32 - 1);

FUN3(VAR2->VAR18, VAR19,
FUN4(VAR16));

if (VAR8->VAR20->VAR21 > 1) {
VAR9[1] =
FUN2(VAR8->VAR17[1]);

FUN3(VAR2->VAR18, VAR22,
FUN4(VAR16));
}

if (VAR8->VAR20->VAR21 > 2) {
VAR9[2] =
FUN2(VAR8->VAR17[2]);

FUN3(VAR2->VAR18, VAR23,
FUN4(VAR16));
}
} else {
VAR9[0] = VAR8->VAR17[0];

if (VAR8->VAR20->VAR21 > 1)
VAR9[1] = VAR8->VAR17[1];

if (VAR8->VAR20->VAR21 > 2)
VAR9[2] = VAR8->VAR17[2];
}


FUN5("", VAR8->VAR17[0]);
FUN3(VAR2->VAR18, VAR24,
VAR9[0]);

if (VAR8->VAR20->VAR21 > 1)
FUN3(VAR2->VAR18, VAR25,
VAR9[1]);

if (VAR8->VAR20->VAR21 > 2)
FUN3(VAR2->VAR18, VAR26,
VAR9[2]);


VAR11 = FUN6(VAR8->VAR20->VAR20);


VAR10 = FUN7(VAR8, VAR6, 0);
FUN5("", &VAR10);
FUN3(VAR2->VAR18, VAR27, VAR10);

if (VAR8->VAR20->VAR21 > 1) {
VAR10 = FUN7(VAR8, VAR6, VAR11 ? 2 : 1);
FUN5("",
&VAR10);
FUN3(VAR2->VAR18, VAR28,
VAR10);
}

if (VAR8->VAR20->VAR21 > 2) {
VAR10 = FUN7(VAR8, VAR6, VAR11 ? 1 : 2);
FUN5("",
&VAR10);
FUN3(VAR2->VAR18, VAR29,
VAR10);
}
}