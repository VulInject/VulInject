FUN1 (void)
{


static hf_register_info VAR1[] = {
{&VAR2,
{"", "",
VAR3, VAR4, NULL, 0,
"", VAR5}
},
{&VAR6,
{"", "",
VAR3, VAR4, NULL, 0,
"", VAR5}
},
{&VAR7,
{"", "",
VAR8, VAR9, NULL, 0,
NULL, VAR5}
},
{&VAR10,
{"", "",
VAR3, VAR4, FUN2(VAR11), 0,
"", VAR5}
},
{&VAR12,
{"", "",
VAR3, VAR13, NULL, 0,
NULL, VAR5}
},
{&VAR14,
{"", "",
VAR3, VAR4, NULL, 0,
NULL, VAR5}
},
{&VAR15,
{"", "",
VAR16, VAR13, NULL, 0,
"", VAR5}
},
{&VAR17,
{"", "",
VAR16, VAR4, NULL, 0,
NULL, VAR5}
},
};


static VAR18 *VAR19[] = {
&VAR20,
};


VAR21 = FUN3 ("", "", "");


FUN4 (VAR21, VAR1, FUN5 (VAR1));
FUN6 (VAR19, FUN5 (VAR19));

VAR22 = FUN7 ("", "",
VAR21, VAR3, VAR4);

VAR23 = FUN8("", "", VAR24, VAR25, NULL, VAR26, VAR27, NULL, NULL);
}