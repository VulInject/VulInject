static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *read,
struct VAR5 *VAR5, unsigned long VAR6)
{
struct VAR7 *VAR8 = &VAR3->VAR8;
u32 VAR9;
int VAR10;
int VAR11 = VAR8->VAR12->VAR13 - 8;
long VAR13;
int VAR14;
__be32 VAR15;
__be32 VAR16;
VAR1 *VAR17;
u32 VAR18 = 0;
int VAR19;

VAR13 = VAR6;
VAR10 = 0;

VAR14 = FUN2(long, VAR13, ((void *)VAR8->VAR20 - (void *)VAR8->VAR17));
VAR17 = FUN3(VAR8, (VAR14+3)&~3);
FUN4(!VAR17);
VAR3->VAR21->VAR22[VAR10].VAR23 = VAR17;
VAR3->VAR21->VAR22[VAR10].VAR24 = VAR14;
VAR10++;
VAR13 -= VAR14;

while (VAR13) {
VAR14 = FUN2(long, VAR13, VAR25);
VAR17 = FUN3(VAR8, (VAR14+3)&~3);
FUN4(!VAR17);
VAR3->VAR21->VAR22[VAR10].VAR23 = VAR17;
VAR3->VAR21->VAR22[VAR10].VAR24 = VAR14;
VAR10++;
VAR13 -= VAR14;
}
read->VAR26 = VAR10;

VAR13 = VAR6;
VAR15 = FUN5(VAR5, read->VAR27, VAR3->VAR21->VAR22,
read->VAR26, &VAR6);
if (VAR15)
return VAR15;
FUN6(VAR8, VAR11 + 8 + ((VAR6+3)&~3));

VAR9 = FUN7(VAR13, VAR6, read->VAR27,
FUN8(read->VAR28->VAR29)->VAR30);

VAR16 = FUN9(VAR9);
FUN10(VAR8->VAR12, VAR11    , &VAR16, 4);
VAR16 = FUN9(VAR6);
FUN10(VAR8->VAR12, VAR11 + 4, &VAR16, 4);

VAR19 = (VAR6&3) ? 4 - (VAR6&3) : 0;
FUN10(VAR8->VAR12, VAR11 + 8 + VAR6,
&VAR18, VAR19);
return 0;

}