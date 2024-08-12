int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4, unsigned int VAR5)
{
u32 VAR6;
int VAR7, VAR8;
unsigned int VAR9;
u8 VAR10[VAR11];
const VAR12 *VAR13 = (const VAR12 *)VAR4;
const struct VAR14 *VAR15 = (const struct VAR14 *)VAR4;
unsigned int VAR16 = VAR2->VAR17.VAR18 / VAR2->VAR17.VAR19;
unsigned int VAR20 = VAR2->VAR17.VAR21;
unsigned int VAR22 = VAR20 / VAR16;

if (!VAR5) {
FUN2(VAR2->VAR23, "");
return -VAR24;
}
if (VAR5 & 511) {
FUN2(VAR2->VAR23,
"");
return -VAR24;
}
if ((unsigned int)FUN3(VAR15->VAR25) * 512 != VAR5) {
FUN2(VAR2->VAR23,
"");
return -VAR24;
}
if (VAR5 > VAR26) {
FUN2(VAR2->VAR23, "",
VAR26);
return -VAR27;
}
if (!FUN4(VAR2, VAR15))
return -VAR24;

for (VAR6 = 0, VAR9 = 0; VAR9 < VAR5 / sizeof(VAR6); VAR9++)
VAR6 += FUN5(VAR13[VAR9]);

if (VAR6 != 0xffffffff) {
FUN2(VAR2->VAR23,
"", VAR6);
return -VAR24;
}

VAR9 = FUN6(VAR5, VAR16);        
VAR7 = FUN7(VAR2, VAR22, VAR22 + VAR9 - 1);
if (VAR7)
goto VAR28;


memcpy(VAR10, VAR4, VAR11);
((struct VAR14 *)VAR10)->VAR29 = FUN8(0xffffffff);
VAR7 = FUN9(VAR2, VAR20, VAR11, VAR10);
if (VAR7)
goto VAR28;

VAR8 = VAR20;
for (VAR5 -= VAR11; VAR5; VAR5 -= VAR11) {
VAR8 += VAR11;
VAR4 += VAR11;
VAR7 = FUN9(VAR2, VAR8, VAR11, VAR4);
if (VAR7)
goto VAR28;
}

VAR7 = FUN9(VAR2,
VAR20 + FUN10(struct VAR14, VAR29),
sizeof(VAR15->VAR29), (const VAR3 *)&VAR15->VAR29);
VAR28:
if (VAR7)
FUN2(VAR2->VAR23, "",
VAR7);
else
VAR7 = FUN11(VAR2, &VAR2->VAR17.VAR30);
return VAR7;
}