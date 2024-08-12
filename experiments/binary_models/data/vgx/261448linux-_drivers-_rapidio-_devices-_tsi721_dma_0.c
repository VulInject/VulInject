struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, unsigned int VAR6,
enum dma_transfer_direction VAR7, unsigned long VAR8,
void *VAR9)
{
struct VAR10 *VAR11 = FUN2(VAR3);
struct VAR12 *VAR13;
struct VAR14 *VAR15 = VAR9;
enum dma_rtype VAR16;
struct VAR1 *VAR17 = NULL;

if (!VAR5 || !VAR6) {
FUN3(&VAR3->VAR18->VAR19, "",
VAR11->VAR20);
return FUN4(-VAR21);
}

FUN5(VAR22, &VAR3->VAR18->VAR19, "", VAR11->VAR20,
(VAR7 == VAR23)?"":"");

if (VAR7 == VAR23)
VAR16 = VAR24;
else if (VAR7 == VAR25) {
switch (VAR15->VAR26) {
case VAR27:
VAR16 = VAR28;
break;
case VAR29:
VAR16 = VAR30;
break;
case VAR31:
default:
VAR16 = VAR32;
break;
}
} else {
FUN3(&VAR3->VAR18->VAR19,
"",
VAR11->VAR20);
return FUN4(-VAR21);
}

FUN6(&VAR11->VAR33);

if (!FUN7(&VAR11->VAR34)) {
VAR13 = FUN8(&VAR11->VAR34,
struct VAR12, VAR35);
FUN9(&VAR13->VAR35);
VAR13->VAR36 = VAR15->VAR36;
VAR13->VAR37 = VAR15->VAR37;
VAR13->VAR38 = 0;
VAR13->VAR16 = VAR16;
VAR13->VAR6	= VAR6;
VAR13->VAR39	= VAR5;
VAR17		= &VAR13->VAR17;
VAR17->VAR8	= VAR8;
}

FUN10(&VAR11->VAR33);

if (!VAR17) {
FUN5(VAR22, &VAR3->VAR18->VAR19,
"", VAR11->VAR20);
return FUN4(-VAR40);
}

return VAR17;
}