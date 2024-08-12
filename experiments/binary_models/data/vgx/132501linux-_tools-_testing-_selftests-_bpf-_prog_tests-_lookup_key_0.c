void FUN1(void)
{
libbpf_print_fn_t VAR1;
struct VAR2 *VAR3;
__u32 VAR4;
int VAR5;

VAR3 = FUN2();
if (!FUN3(VAR3, ""))
return;

VAR1 = FUN4(VAR6);
VAR5 = FUN5(VAR3);
FUN4(VAR1);

if (VAR5 < 0 && VAR7) {
FUN6("",
VAR8);
FUN7();
goto VAR9;
}

if (!FUN8(VAR5, ""))
goto VAR9;

VAR5 = FUN9(VAR3);
if (!FUN8(VAR5, ""))
goto VAR9;

VAR3->VAR10->VAR11 = FUN10();
VAR3->VAR10->VAR12 = VAR13;


VAR3->VAR10->VAR14 = 0;

VAR5 = FUN11(0, &VAR4);
if (!FUN12(VAR5, 0, ""))
goto VAR9;


VAR3->VAR10->VAR14 = VAR15;

VAR5 = FUN11(0, &VAR4);
if (!FUN8(VAR5, ""))
goto VAR9;


VAR3->VAR10->VAR14 = VAR15 | VAR16;

VAR5 = FUN11(0, &VAR4);
if (!FUN8(VAR5, ""))
goto VAR9;


VAR3->VAR10->VAR14 = VAR17;

VAR5 = FUN11(0, &VAR4);
if (!FUN12(VAR5, 0, ""))
goto VAR9;

VAR3->VAR10->VAR12 = 0;
VAR3->VAR10->VAR18 = 1;

VAR5 = FUN11(0, &VAR4);
if (!FUN8(VAR5, ""))
goto VAR9;

VAR3->VAR10->VAR18 = VAR19;

VAR5 = FUN11(0, &VAR4);
FUN12(VAR5, 0, "");

VAR9:
VAR3->VAR10->VAR11 = 0;
FUN13(VAR3);
}