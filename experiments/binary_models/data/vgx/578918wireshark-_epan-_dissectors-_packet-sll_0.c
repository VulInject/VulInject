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
VAR3, VAR4, FUN2(VAR8), 0x0,
NULL, VAR6 }
},
{ &VAR9,
{ "", "",
VAR3, VAR4, NULL, 0x0,
NULL, VAR6 }
},
{ &VAR10,
{ "", "",
VAR11, VAR12, NULL, 0x0,
"", VAR6 }
},
{ &VAR13,
{ "", "",
VAR14, VAR12, NULL, 0x0,
"", VAR6 }
},
{ &VAR15,
{ "", "",
VAR16, VAR12, NULL, 0x0,
"", VAR6 }
},
{ &VAR17,
{ "", "",
VAR16, VAR12, NULL, 0x0,
"", VAR6 }
},
{ &VAR18,
{ "", "",
VAR3, VAR19, FUN2(VAR20), 0x0,
"", VAR6 }
},
{ &VAR21,
{ "", "",
VAR3, VAR19, FUN2(VAR22), 0x0,
"", VAR6 }
},
{ &VAR23,
{ "", "",
VAR3, VAR19, FUN2(VAR24), 0x0,
"", VAR6 }
},
{ &VAR25,
{ "", "",
VAR16, VAR12, NULL, 0x0,
NULL, VAR6 }
},
{ &VAR26,
{ "", "",
VAR27, VAR4, NULL, 0x0,
NULL, VAR6 }
},
};

static VAR28 *VAR29[] = {
&VAR30
};


static build_valid_func VAR31[1] = {VAR32};
static decode_as_value_t VAR33 = {VAR34, 1, VAR31};
static decode_as_t VAR35 = {"", "", 1, 0, &VAR33, NULL, NULL,
VAR36, VAR37, VAR38, NULL};

VAR39 = FUN3("", "", "" );
FUN4(VAR39, VAR1, FUN5(VAR1));
FUN6(VAR29, FUN5(VAR29));

VAR40 = FUN7("", VAR41, VAR39);
VAR42 = FUN7("", VAR43, VAR39);
VAR44 = FUN8("");


VAR45 = FUN9 (
"",
"",
VAR39, VAR3,
VAR4
);
FUN10("", "");

VAR46 = FUN9 (
"",
"",
VAR39, VAR3,
VAR19
);
FUN10("", "");

FUN11(VAR39, VAR47, VAR48, VAR49);

FUN12(&VAR35);
}