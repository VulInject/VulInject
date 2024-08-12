void
FUN1(void)
{
VAR1 *VAR2;
VAR3    *VAR4;

static hf_register_info VAR5[] = {
{ &VAR6,
{ "", "", VAR7, VAR8, NULL, 0, "", VAR9 }
},
{ &VAR10,
{ "", "", VAR11, VAR8, FUN2(VAR12), 0, "", VAR9 }
},
{ &VAR13,
{ "", "", VAR11, VAR8, FUN2(VAR14), 0, "", VAR9 }
}
};
static VAR15 *VAR16[] = {
&VAR17,
&VAR18
};


static uat_field_t VAR19[] = {
FUN3(VAR20, VAR21, "", ""),
FUN4(VAR20, VAR22, "", VAR14, ""),
VAR23
};

if (VAR24 == -1) {
VAR24 = FUN5("");
}

if (VAR25 == -1) {
VAR25 = FUN6("", "", "");
FUN7(VAR25, VAR5, FUN8(VAR5));
FUN9(VAR16, FUN8(VAR16));
FUN10(VAR25);

VAR2 = FUN11(VAR25, NULL);




VAR2->VAR26 = VAR27;

VAR4 = FUN12("",
sizeof(VAR28),
"",
VAR29,
(void **)&VAR20,
&VAR30,
VAR31,
NULL,
VAR32,
VAR33,
VAR34,
VAR35,
NULL,
VAR19);

FUN13(VAR2,
"",
"",
"",
VAR4);

}

VAR36 = 0;

VAR37 = FUN14("");
}