void
FUN1(void)
{
static hf_register_info VAR1[] = {
{ &VAR2,
{ "", "",
VAR3, VAR4, FUN2(VAR5), 0x0,
NULL, VAR6 }
},
{ &VAR7,
{ "", "",
VAR3, VAR4, FUN2(VAR5), 0x0,
NULL, VAR6 }
},
{ &VAR8,
{ "", "",
VAR9, VAR4, NULL, 0x0,
NULL, VAR6 }
},
};

static VAR10 *VAR11[] = {
&VAR12
};

VAR13 = FUN3(
"", "", "");
FUN4(VAR13, VAR1, FUN5(VAR1));
FUN6(VAR11, FUN5(VAR11));


VAR14 = FUN7("",
"", VAR13, VAR3, VAR4);

VAR15 = FUN8("", VAR16, VAR13);
}