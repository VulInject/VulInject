static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5, *VAR6;
struct igt_spinner VAR7;
struct VAR8 *VAR9;
enum intel_engine_id VAR10;
int VAR11 = -VAR12;


if (!VAR13)
return 0;

if (!FUN2(VAR3))
return 0;

VAR5 = FUN3(VAR3->VAR14, NULL);
if (!VAR5)
return -VAR12;
VAR5->VAR15.VAR16 = VAR17;

VAR6 = FUN3(VAR3->VAR14, NULL);
if (!VAR6)
goto VAR18;
VAR6->VAR15.VAR16 = VAR19;

if (FUN4(&VAR7, VAR3))
goto VAR20;

FUN5(VAR9, VAR3, VAR10) {
unsigned long VAR21;
struct VAR22 *VAR23;

if (!FUN6(VAR9))
continue;

VAR23 = FUN7(&VAR7, VAR6, VAR9,
VAR24); 
if (FUN8(VAR23)) {
VAR11 = FUN9(VAR23);
goto VAR25;
}

FUN10(VAR23);
if (!FUN11(&VAR7, VAR23)) {
FUN12(VAR3);
VAR11 = -VAR26;
goto VAR25;
}

VAR23 = FUN13(VAR5, VAR9);
if (FUN8(VAR23)) {
FUN14(&VAR7);
VAR11 = FUN9(VAR23);
goto VAR25;
}


while (FUN15(VAR9->VAR27.VAR28[0]))
FUN16();

VAR21 = VAR9->VAR29.VAR30;
VAR9->VAR29.VAR30 = 1; 

FUN17(VAR23);
FUN10(VAR23);

FUN18(VAR9);
VAR9->VAR29.VAR30 = VAR21;

if (FUN19(VAR23, 0, VAR31 / 10) < 0) {
FUN12(VAR3);
FUN20(VAR23);
VAR11 = -VAR32;
goto VAR25;
}

FUN14(&VAR7);
FUN20(VAR23);
}

VAR11 = 0;
VAR25:
FUN21(&VAR7);
VAR20:
FUN22(VAR6);
VAR18:
FUN22(VAR5);
return VAR11;
}