VAR1 *FUN1 (VAR2 *VAR3)
{
VAR1 *VAR4 = NULL;


uint32_t VAR5 = FUN2(VAR3);

VAR6 *VAR7 = &VAR8[VAR5];
FUN3(VAR7);


if (VAR7->VAR9 == NULL) {
VAR4 = FUN4(VAR3);
if (VAR4 == NULL) {
FUN5(VAR7);
return NULL;
}


VAR7->VAR9 = VAR4;
VAR7->VAR10 = VAR4;


FUN6(VAR4,VAR3);

FUN5(VAR7);
return VAR4;
}


VAR4 = VAR7->VAR9;


if (VAR4->remove || FUN7(VAR4, VAR3) == 0) {
VAR1 *VAR11 = NULL; 

while (VAR4) {
VAR11 = VAR4;
VAR4 = VAR4->VAR12;

if (VAR4 == NULL) {
VAR4 = VAR11->VAR12 = FUN4(VAR3);
if (VAR4 == NULL) {
FUN5(VAR7);
return NULL;
}
VAR7->VAR10 = VAR4;



VAR4->VAR13 = VAR11;


FUN6(VAR4,VAR3);

FUN5(VAR7);
return VAR4;
}

if (FUN7(VAR4, VAR3) != 0) {

if (VAR4->VAR12) {
VAR4->VAR12->VAR13 = VAR4->VAR13;
}
if (VAR4->VAR13) {
VAR4->VAR13->VAR12 = VAR4->VAR12;
}
if (VAR4 == VAR7->VAR10) {
VAR7->VAR10 = VAR4->VAR13;
}

VAR4->VAR12 = VAR7->VAR9;
VAR4->VAR13 = NULL;
VAR7->VAR9->VAR13 = VAR4;
VAR7->VAR9 = VAR4;


FUN8(&VAR4->VAR14);
(void) FUN9(VAR4);
FUN5(VAR7);
return VAR4;
}
}
}


FUN8(&VAR4->VAR14);
(void) FUN9(VAR4);
FUN5(VAR7);
return VAR4;
}